/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (-((1360351644 * (min(16141728710025998063, -1360351661)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_13 = (max(var_13, (((2557388398 * (arr_10 [i_2 - 1] [i_2] [i_3 + 1]))))));
                        var_14 = (max((min((max(18446744073709551602, var_0)), var_3)), ((-1737578925 ? 70 : -5))));
                        var_15 = (max(var_15, (((min(var_1, 1669706830365265844))))));
                        var_16 = 23521;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((-(((arr_17 [i_4] [i_2] [i_1] [i_0]) ? 2557388401 : 125))))) ? -1 : (max((((arr_11 [i_5] [i_4] [i_2] [i_1 + 1] [i_0]) ? 19724 : 27)), var_4)))))));
                                var_18 = var_9;
                                arr_21 [i_0] [i_1] [i_2] [i_4] [i_5] = (((~var_1) ? ((max((!891132547), ((-(arr_20 [i_0] [i_1] [i_2] [i_0] [i_5])))))) : (((~var_8) ? (arr_11 [i_0] [i_4 + 1] [i_2] [i_4 - 3] [i_2 - 1]) : (arr_6 [i_4 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, var_10));
    #pragma endscop
}
