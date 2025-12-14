/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_2;
    var_12 |= (!43615);
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_1 [i_0]);
                var_14 -= (((arr_2 [5]) ? (arr_3 [i_0 + 1] [i_1] [i_1]) : ((~(arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 2])))));
                var_15 += ((((((arr_1 [i_0 + 1]) / var_4))) ? 724371984761466187 : -12615));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 = (((((!(arr_2 [i_0 + 1])))) != ((-(min(var_4, (arr_5 [i_0])))))));
                            var_17 = var_5;

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_18 += ((((-var_7 || (arr_7 [i_0] [i_0]))) ? ((~(arr_1 [i_4]))) : var_5));
                                var_19 = (12615 / 2520);
                                var_20 = (max(var_20, var_10));
                                var_21 = (arr_8 [i_0] [7] [i_2] [i_1] [i_0]);
                            }
                            var_22 = ((((max(((((arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [10] [i_3]) ? (arr_6 [i_0]) : (arr_6 [i_0])))), (max((arr_6 [i_0]), var_2))))) ? (~var_4) : (arr_6 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((+(((~33554424) & var_3))));
    #pragma endscop
}
