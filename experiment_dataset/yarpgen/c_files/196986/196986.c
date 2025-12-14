/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((((((arr_4 [i_0] [i_0] [i_0]) ? (max(4123582221, -7857)) : (((var_10 ? (arr_2 [i_1] [i_0]) : var_7)))))) ? (min(((var_12 - (arr_1 [i_0]))), 7867)) : ((min((arr_1 [i_0]), (arr_1 [i_1]))))));
                var_16 = (((arr_0 [i_0]) >> (((((1 ? 65535 : 107))) ? (arr_4 [i_0] [i_0] [i_1]) : (min((arr_5 [i_0]), 1))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 |= (min(0, (max(0, (arr_2 [i_1] [i_1])))));
                    arr_9 [i_2] = 237;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_18 |= ((min((((~(-32767 - 1)))), (min(3655493018, 0)))));
        arr_12 [1] = (((165 >> 1) ? (arr_10 [i_3 + 1]) : (arr_10 [i_3 - 2])));
        var_19 = (4160749568 - 106);
        arr_13 [i_3] = (((arr_11 [i_3 + 1] [i_3 + 1]) | (((max((arr_10 [i_3 - 1]), (arr_10 [i_3 - 1])))))));
        var_20 = var_12;
    }
    #pragma endscop
}
