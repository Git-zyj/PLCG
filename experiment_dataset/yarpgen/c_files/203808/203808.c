/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = min(18446744073709551615, 14179652652609454041);
        var_13 = (((arr_0 [i_0]) ? 4267091421100097567 : (((-39 + (arr_2 [21]))))));
        arr_3 [i_0] [i_0] = ((((-2038134795 >= (max(14179652652609454041, (arr_0 [i_0]))))) ? (((!(!var_0)))) : ((max((arr_1 [i_0] [i_0]), (arr_1 [21] [i_0]))))));
        arr_4 [i_0] [i_0] = ((((((!(((arr_0 [i_0]) && (arr_2 [i_0]))))))) ^ 0));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_8 [i_1]);
        var_14 = (min(var_14, (((((((arr_7 [8]) ? -3863605602245026022 : -5212077055595727708))) ? -5212077055595727708 : 1766714463)))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_15 *= (((arr_5 [i_2] [i_2]) == var_10));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = (~(arr_15 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 1]));
                                arr_23 [i_3] = (((-(arr_15 [i_2 - 1] [i_2 + 2] [10] [10]))));
                                arr_24 [i_3] [i_3] [i_4 + 1] [i_5] [i_6] = (((~(arr_14 [2] [2] [3] [12]))));
                                var_17 = (max(var_17, (((16194395591740901613 ? 0 : (arr_6 [14]))))));
                            }
                        }
                    }
                    var_18 = var_9;
                }
            }
        }
        arr_25 [i_2] [10] = (arr_19 [i_2] [i_2] [16] [i_2 - 1] [6] [4]);
        arr_26 [i_2] = ((!(948502048 * var_8)));
    }
    var_19 += var_0;
    var_20 = -40;
    #pragma endscop
}
