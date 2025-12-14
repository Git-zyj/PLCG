/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 ^= ((arr_1 [13] [i_0]) ? ((1904764868 ? 32763 : ((-1904764874 ? (arr_3 [i_0]) : (arr_3 [i_0]))))) : (arr_1 [i_0] [0]));
        var_21 += ((((~((var_3 ? 9033086398192097760 : 5545136206227639960)))) <= (((0 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_22 |= 35;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_23 ^= var_2;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_24 = 1;
                            var_25 ^= (arr_4 [i_0] [1] [i_2]);
                            var_26 += -1904764874;
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_27 += (((((var_1 > var_15) * (arr_5 [i_0]))) | (((((min((arr_7 [i_2] [i_1] [i_2]), (-9223372036854775807 - 1)))) ? ((-1904764856 ? var_15 : var_17)) : -9033086398192097760)))));
                    arr_19 [4] [1] [i_5] |= (((((var_2 ? (((arr_1 [i_2] [i_0]) - (arr_10 [i_0] [i_1] [i_2] [i_5]))) : (arr_4 [i_0] [7] [2])))) ? ((-((7591 ? var_6 : 2485883653)))) : -32763));
                    var_28 = -48322;
                }
            }
        }
        arr_20 [i_0] [i_0] = (-11443315105676974995 * -0);
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_23 [i_6] = (((arr_22 [i_6] [i_6]) ? (~-12) : (var_11 | -32744)));
        var_29 -= (1904764860 | 1);
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_30 = (max(((max((arr_7 [i_7] [i_7] [i_7]), (arr_7 [11] [0] [i_7])))), ((-(arr_1 [i_7] [i_7])))));
        arr_26 [i_7] = var_4;
    }
    var_31 ^= ((var_9 && (!var_12)));
    #pragma endscop
}
