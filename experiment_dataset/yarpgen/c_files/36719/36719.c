/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (!var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_21 = ((((((15433933856351262519 ? var_17 : (arr_5 [i_0] [8])))) ? var_8 : var_5)));
                arr_6 [i_1] [i_0] = (arr_4 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = (((((arr_2 [i_1]) ? ((2013540823 ? 15433933856351262519 : (arr_9 [i_1] [i_0]))) : (arr_4 [i_0] [i_0 - 2]))) < ((((!(arr_8 [i_3 + 2] [i_1] [i_0] [i_3])))))));
                                var_23 = 4294967293;
                            }
                        }
                    }
                    var_24 = ((-4853 ? (((arr_9 [i_0 + 1] [i_0]) / 569185311)) : (((!(var_11 != var_6))))));
                }
                arr_13 [i_0] [1] [i_0] = ((max((var_12 & var_4), ((var_12 % (arr_8 [i_1] [i_1] [i_0] [i_0]))))) % (min(65535, (max(13878555484399516796, var_14)))));
                var_25 = (max((((arr_11 [i_0 - 3]) ? (arr_3 [i_0] [i_1] [13]) : (arr_3 [i_0] [i_0] [i_1]))), var_12));
            }
        }
    }
    #pragma endscop
}
