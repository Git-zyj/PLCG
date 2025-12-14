/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [7] [i_0] = max(((((min(var_5, var_15))) ? ((var_14 ? (arr_1 [i_0]) : var_8)) : (!var_7))), ((((((arr_1 [i_0]) ? 1304150184 : var_10))) ? (-5960333477906908992 + var_2) : (arr_2 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = (((2786908478455195813 && 0) ? ((((((var_6 ? (arr_3 [i_0] [i_2] [i_3]) : var_2))) ? (arr_1 [i_1]) : 4294967295))) : (((arr_4 [i_0] [i_2] [i_2]) ? var_13 : (var_12 - -6875256008963529689)))));
                            var_17 = ((((var_6 >= var_6) ? (((arr_6 [i_0] [i_1] [i_0] [i_3]) ? var_7 : var_11)) : var_9)));
                            arr_11 [i_2] [i_2] [i_3] |= ((!var_5) ? var_5 : var_2);
                        }
                    }
                }
                arr_12 [i_0] [i_0] [2] = var_10;
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_17 [i_4] = arr_15 [i_4];
        var_18 *= (((~var_11) ? (((~(arr_14 [i_4])))) : ((var_14 ? var_10 : var_0))));
        var_19 = (min(((var_6 || (arr_14 [i_4]))), (arr_14 [i_4])));
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        arr_21 [i_5 + 4] [i_5] = ((var_15 ? 544999748830522371 : 18446744073709551615));
        var_20 = ((-((var_11 ? var_2 : var_11))));
        var_21 ^= (max((((-(arr_9 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2])))), (max(var_6, var_1))));
    }
    #pragma endscop
}
