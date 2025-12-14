/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (14015669058378446610 ? ((-((var_10 ? (arr_1 [i_0 + 2] [i_1]) : 14404799221183614959)))) : 5443953246041286369);
                var_20 = (((7594515074524475481 >= 12589105712021740518) != var_5));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_21 ^= (12082669254598394915 ^ 16290122788924785869);
                        arr_15 [i_2] = (-((6364074819111156730 << (7594515074524475474 - 7594515074524475448))));
                        var_22 = (max(var_22, var_0));
                        arr_16 [i_5] [i_2] [i_2] [i_2] = ((max(0, 10852228999185076134)) * ((12082669254598394915 ? (arr_11 [i_4 - 1] [i_2] [i_2] [i_4 - 2]) : (arr_11 [i_4 + 2] [i_2] [i_2] [i_4 - 1]))));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        var_23 = (16142845431406818785 ? 6 : 15871290783542972762);
                        var_24 = (arr_17 [i_4 - 1] [i_4 + 4] [i_2] [i_4 - 2]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_26 [i_2] [i_4 + 1] [i_2] = var_10;
                                var_25 = (min(var_25, (max(((var_13 ? 12589105712021740523 : 7594515074524475481)), ((var_18 ? (((arr_19 [i_8] [i_7] [i_4 - 1] [i_2]) ? 1445137156422997409 : 1998514886289030662)) : (((arr_13 [i_2]) ? 5857638361687811098 : (arr_24 [i_2] [i_3] [i_4 + 2] [i_4] [i_8])))))))));
                                var_26 ^= (arr_18 [i_2] [i_3] [i_3] [i_4 + 2] [i_7] [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 -= (var_16 || var_13);
    var_28 = (!var_6);
    #pragma endscop
}
