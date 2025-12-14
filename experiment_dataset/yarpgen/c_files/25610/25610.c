/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = (((((((arr_6 [i_2] [i_1] [i_2]) ? -27214 : var_14)))) ? (arr_2 [i_0] [i_1] [i_2]) : (min((((arr_5 [i_0] [i_1] [i_0]) ? 1073741823 : 3346764212003025012)), (arr_3 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = ((var_12 ? ((var_7 ? ((-1278058806 ? 15099979861706526603 : var_12)) : 16268)) : ((((~13714069617368904745) ? ((13714069617368904738 ? 1725183652452862255 : 1)) : ((((!(arr_1 [i_3 - 3] [i_3 - 3]))))))))));
                                var_16 = (max(var_16, (((+(((((arr_5 [i_4] [i_2] [i_1]) >= var_12)) ? var_7 : ((-(arr_4 [i_1]))))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((min(var_8, 27228))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_13;
    var_18 = ((((((max(65535, var_4))) % (15099979861706526603 - 1371858487))) == var_1));
    #pragma endscop
}
