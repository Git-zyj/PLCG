/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((10591987779333226301 + 4294967295) & 7854756294376325330)), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 += var_7;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [1] [8] = ((((((var_5 ? 576828524 : (arr_7 [i_0] [i_1] [i_2 + 2] [i_4]))) | var_11))));
                                arr_13 [7] [i_2] [i_2] [i_2] [7] = ((var_1 / (((11509734549488716985 != ((8796093022207 ? (arr_8 [i_1] [i_2]) : (arr_7 [i_1] [1] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                var_16 |= (((((~(~7678)))) ? (((4294967283 ^ 27757) << (((~var_9) - 2143128058)))) : (((((~(arr_3 [i_0])))) ? (~24) : (~4294967283)))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_20 [i_5] |= 2147483643;
                                var_17 = (max((~var_10), ((-(arr_16 [i_1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, ((((((((var_2 <= (arr_2 [i_0] [i_0])))))) / ((10591987779333226307 >> (var_11 - 6356765273954894864))))))));
            }
        }
    }
    #pragma endscop
}
