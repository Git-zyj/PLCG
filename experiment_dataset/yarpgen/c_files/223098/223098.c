/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((767460447 ? var_7 : var_18)) == var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = ((var_16 ? (arr_7 [i_3]) : ((83 ? 163 : -1363155934))));
                                arr_14 [i_3] = ((-(min(-1179295978, (max(-2543429834737792175, 159))))));
                                var_21 -= ((((549109032337307719 ? (-32767 - 1) : 99))) || -var_1);
                                var_22 -= ((~(~250211697)));
                            }
                        }
                    }
                    arr_15 [1] [i_1] [i_2] = -2335087583711083365;
                }
            }
        }
    }
    var_23 = (!(((100 >> (var_13 - 551973567)))));
    var_24 = (min(((((5 ? var_8 : var_15)))), (max((min(328958591, var_7)), (3915243959 || var_4)))));
    #pragma endscop
}
