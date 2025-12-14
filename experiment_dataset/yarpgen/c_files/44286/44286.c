/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((((((max(-118, var_4)) >> (((max(70368744177663, 5324061035899480431)) - 5324061035899480407))))) ? (~209) : (min(-9223372036854775806, 18446744073709551615))));
                    var_17 |= (!121);
                    var_18 = ((((min(((16995375250261491853 ? 0 : 1)), 60656))) * ((-(1340599875 / -5994393146573377898)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            {
                var_19 &= (((65535 & ((-19972 ? 144 : 7671224403157484650)))) / var_3);
                arr_10 [i_4] [8] = ((((((var_10 ? 29 : var_12))) ? ((15179 ? 1923143045 : 4150416723)) : -19242)));
                var_20 = (max(var_20, 1451368823448059763));
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_19 [i_5] = ((-(min(var_2, (((127 ? 30 : 2048)))))));
                                var_21 = ((~(((!(~16995375250261491853))))));
                                var_22 = ((var_2 ? ((1451368823448059747 ? 2 : var_15)) : (((var_3 == (91 == -19))))));
                                arr_20 [i_3] [i_4] [i_4] [i_4] [i_4] [i_7] = ((~((var_11 ? var_15 : var_14))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 *= (((536870911 | var_4) ? 64 : (2665677186 && -3532605267967835380)));
    var_24 = 1;
    #pragma endscop
}
