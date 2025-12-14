/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_9, var_11))) || ((((-22 ? 17523466567680 : 255)) != var_1))));
    var_14 = var_10;
    var_15 = var_2;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [7] = ((((max((arr_1 [i_0] [i_1]), (((arr_3 [i_0] [i_0] [3]) ? (arr_4 [1] [13] [10]) : (arr_1 [i_0] [i_1])))))) && ((max((max((arr_8 [i_0] [i_0]), (arr_2 [i_0]))), (max(2754428095, -30334)))))));
                        var_17 = (arr_0 [i_0]);

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_18 = ((min(((max(var_0, var_7))), (((arr_11 [2] [i_0] [i_2] [i_2] [i_4]) ? (arr_5 [i_0] [i_1] [i_0] [2]) : (arr_12 [i_0] [i_1] [i_1] [i_3] [i_4]))))));
                            var_19 = max((min((arr_7 [i_0]), (arr_7 [i_0]))), ((-(arr_7 [i_0]))));
                            var_20 |= (min((max(((max(var_12, (arr_2 [i_2])))), 18431950016187101600)), ((max((arr_2 [i_4 + 3]), var_0)))));
                        }
                        var_21 = var_10;
                    }
                }
            }
            var_22 = ((min(var_9, 0)));
            var_23 = (max(1, 9259));
        }
        var_24 = (min(var_24, (((-(arr_7 [6]))))));
    }
    #pragma endscop
}
