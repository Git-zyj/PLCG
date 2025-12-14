/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((1 ? var_10 : var_2))) ? var_7 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((((max(0, 18446744073709551591)) * (arr_1 [i_1]))) <= (((~(arr_0 [i_0]))))));

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_20 = (((((~var_11) ? (((arr_1 [i_2 - 1]) << (((arr_1 [i_0]) - 69)))) : (((arr_0 [i_2]) ? (arr_2 [i_0] [i_2 - 2]) : (arr_3 [i_1]))))) ^ (((!var_10) ? ((var_11 ? (arr_3 [i_1]) : (arr_5 [i_0] [i_2]))) : ((var_15 * (arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                    var_21 = (arr_6 [i_0] [i_1] [i_2] [i_2 + 1]);
                    var_22 = (min(var_22, (((((((((var_6 ? var_1 : var_10))) ? ((((arr_1 [i_0]) != (arr_6 [i_0] [i_1] [i_2] [i_1])))) : (((arr_2 [i_2] [i_1]) | (arr_0 [i_0])))))) ? (((var_16 || (arr_5 [i_2] [i_2 - 2])))) : ((+(((arr_2 [i_2] [i_1]) >> (((arr_0 [i_0]) - 526593648)))))))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_23 = ((+((-(min((arr_8 [i_4] [i_3 + 1] [i_1] [i_0]), var_2))))));
                            var_24 = ((+(((((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_1] [i_0] [i_4])))) || (((arr_0 [i_0]) || (arr_11 [i_4] [i_3] [i_3] [i_1] [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_12 ? ((~((var_9 ? var_9 : var_12)))) : (((var_11 ? var_17 : (var_8 ^ var_6))))));
    var_26 = (((((((var_15 ? var_9 : var_3))) ? (((var_13 ? var_0 : var_11))) : (1 | 0))) == (((-((var_9 ? var_8 : var_4)))))));
    #pragma endscop
}
