/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((1 == 0) >= var_15)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = (((((((var_10 ? var_4 : (arr_4 [1] [1])))) && ((var_19 && (arr_3 [i_2] [i_1] [i_0]))))) ? (arr_4 [i_0] [i_2]) : ((((((arr_2 [i_0] [i_0]) ? var_8 : (arr_0 [i_0]))) == (!18446744073709551608))))));
                    arr_10 [i_0] [i_0] [i_2] [0] = (~14040238784549059775);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((((min(1, -31743))) ? (arr_2 [i_0] [i_3]) : var_16)))));
                                arr_15 [i_0] = ((14040238784549059794 ? 1 : 242869790079284870));
                                arr_16 [i_0] [i_3] [i_2] [i_0] [i_0] = ((((~(arr_13 [i_0] [i_3] [i_1])))) / (arr_12 [i_0] [i_1] [i_2] [i_0] [i_4]));
                                arr_17 [22] [i_1] [22] [i_1] [i_0] &= 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_11, ((((248 / var_8) || (((var_8 ? 3341232466217749507 : var_0))))))));
    var_23 ^= (min(((var_7 >> ((((max(var_11, 1))) - 110)))), (((((var_4 ? var_16 : var_3))) ? ((var_6 ? var_7 : var_10)) : var_16))));
    var_24 *= ((!((((((15105511607491802098 >> (var_4 - 12763337668672972570)))) ? (var_13 <= 402653184) : ((var_5 ? var_7 : var_3)))))));
    #pragma endscop
}
