/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((((((6039287163043768599 ? var_2 : var_5))) && (var_8 ^ var_11))) || (((-(-6039287163043768620 / -11687617))))));
    var_19 |= ((var_1 ? var_15 : ((3857557022 ? -574412123 : 11))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (+-262143);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 |= max(((min(1522359211, 4294967285))), (((arr_3 [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_3 [i_2] [i_2] [i_2 - 1]) : 262137)));
                            var_22 -= (max((((-(1 < 1522359211)))), 0));
                            var_23 = (arr_2 [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_24 ^= (!var_0);
    #pragma endscop
}
