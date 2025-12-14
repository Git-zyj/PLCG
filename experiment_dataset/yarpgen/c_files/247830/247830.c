/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_0] = (((max(((-(arr_4 [i_0] [i_0]))), (arr_0 [i_1]))) - ((min(var_9, ((max(var_12, var_12))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((var_3 ? 1 : (arr_3 [i_0] [i_0] [i_0]))));
                                arr_14 [i_0] [1] [i_3] = (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (((arr_9 [i_0 + 2] [i_0 + 2] [i_2 + 1]) ? (var_10 - -60) : ((max(1, (arr_5 [i_2])))))) : 1));
                                var_17 = (min(((((max((arr_1 [i_0] [i_0]), (arr_1 [i_1] [1])))) & ((var_14 ? (arr_4 [i_2] [i_0]) : var_11)))), var_3));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] = (((-((min(-105, var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 += var_3;
    var_19 &= ((((((((56 ? 0 : var_10))) ? 104 : ((max(var_13, var_4)))))) ? var_2 : (((((var_14 ? -113 : 84))) ? var_0 : -106))));
    var_20 = ((((((min(var_6, -122))) && ((max(var_8, var_10))))) ? var_11 : (((var_4 != var_1) ? ((min(var_13, 126))) : var_15))));
    #pragma endscop
}
