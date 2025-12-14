/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_7, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = 40649;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_4 [i_1] [i_1]) / (((-5208361102366447837 ? -8900 : 256)))));
                                arr_17 [i_1] [3] [i_2] [1] [i_1] [i_1] = (arr_1 [i_1]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] = ((((min(9858850818590852684, ((((arr_11 [i_0] [i_2] [i_0] [i_1]) <= var_4)))))) ? (((((arr_4 [i_1] [i_1]) > 1)))) : (9858850818590852680 * 16777215)));
                    var_16 = ((((((((1 + (arr_9 [i_1])))) ? -2861370425534236444 : (18446744073709551615 > 4194304)))) ? 1 : (((((-7538919245840437343 ? (arr_4 [i_1] [i_1]) : 16383))) ? 3968 : -1874973747))));
                    var_17 = 1;
                    var_18 = ((((15213026 ? (((arr_6 [i_1] [i_1]) / (arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [3]))) : (((arr_15 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) / var_6)))) & ((((var_9 >= var_7) * ((-6763577288318489919 ? var_9 : 1)))))));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_19 = (arr_15 [i_5] [i_1] [i_1] [8] [i_0] [i_0] [i_0]);
                    var_20 = (((((min(1, 0)))) ^ (arr_7 [i_0] [i_1] [i_5])));
                }
                var_21 = 137438953471;
                arr_22 [i_0] [8] &= (min(((max(var_8, -99057998))), (max((arr_19 [i_0]), (128 && 1)))));
            }
        }
    }
    #pragma endscop
}
