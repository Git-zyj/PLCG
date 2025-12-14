/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 &= ((((((arr_5 [i_1]) ? var_3 : var_11))) ? ((min(var_12, var_11))) : 1073740800));
                    arr_7 [i_1] = ((-(min(0, (-1 + -1499377994)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [7] = var_5;
        arr_12 [i_3] = 1538156368;
        arr_13 [i_3] = (min((((~(arr_10 [i_3])))), (max(((-(arr_8 [i_3]))), 254))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_3] [1] [i_5] [i_6] [i_7] [i_5] [1] = (~var_12);
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] [i_3] [i_3] = 0;
                            var_15 *= (((~(arr_15 [i_3]))));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_3] [i_4] [i_5] [0] [i_8] = 1;
                            var_16 |= var_5;
                            arr_30 [i_8] [i_6] [i_4] [i_3] = (max((max((((var_9 + 9223372036854775807) << (((arr_18 [i_3] [i_5] [i_5]) - 26350)))), var_5)), (((((~(arr_8 [i_3])))) ? (max(0, var_9)) : (arr_22 [i_3] [i_4] [i_5] [i_4])))));
                            var_17 *= (((~var_8) ? (arr_16 [i_3]) : ((-(min(-588690772, -1973910369))))));
                        }
                        arr_31 [i_3] [i_3] [i_3] [i_5] [i_5] [i_6] = var_5;
                    }
                }
            }
        }
    }
    var_18 = ((((((!var_1) ? 0 : ((-1073740800 ? var_0 : var_7))))) == var_9));
    var_19 = ((var_2 >> (var_3 + 531817618478864077)));
    var_20 = var_13;
    #pragma endscop
}
