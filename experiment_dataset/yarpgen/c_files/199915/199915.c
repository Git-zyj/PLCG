/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 = (((((19096 ^ (arr_0 [i_0] [i_0 - 3])))) ? (((var_9 - 1) + 4611686018427387903)) : (((arr_1 [i_0 + 1]) ? (arr_0 [i_0 - 2] [1]) : -4611686018427387903))));
        arr_3 [i_0 - 2] [15] = ((+(min(7404925685725632974, (((arr_0 [i_0] [i_0]) * 16001568931299085276))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] = (var_2 < 0);
            var_18 = ((~((var_12 ? var_9 : 4))));
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            var_19 = var_15;

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_17 [i_0 - 2] [i_2] [i_3] [i_2] = (((1 ? 4611686018427387903 : 173)));
                    arr_18 [i_4] [i_2] [i_2] = 141;
                }
                arr_19 [14] [i_2] = (((((max(var_15, var_3))) ? ((-1 ? var_12 : var_9)) : (!-4611686018427387904))));
                arr_20 [i_0] [i_2] = ((var_10 & ((((arr_13 [i_0 - 1] [i_0 - 3] [i_2 - 2]) != (arr_13 [i_0 + 1] [i_0 - 3] [i_2 - 3]))))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_20 = var_8;
                arr_23 [i_0] [i_2] [i_2] [i_2] = 0;
            }
        }
        var_21 = (min(var_21, (((((1 ? (arr_9 [i_0 - 2] [i_0 - 3] [i_0 + 1]) : 0)) < (((((var_11 ? var_13 : 0))))))))));
        arr_24 [i_0] = -5;
    }
    var_22 = (-((var_4 ? var_8 : -4611686018427387902)));
    #pragma endscop
}
