/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_6, var_5))) ? (((min(var_12, (var_3 == var_6))))) : (((((3397440750 ? 1888668289 : var_12))) % (((var_11 + 9223372036854775807) >> (933870903924624533 - 933870903924624504)))))));
    var_16 = ((((-(var_9 / 50674))) + ((((897526540 + var_10) ? var_4 : (min(var_12, 1888668287)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((max(var_3, ((2406299006 & (arr_4 [i_1] [i_0]))))) << ((((2406299008 ? -1 : ((4972862225155256034 ? -4972862225155256022 : -7799)))) + 8)));
                var_17 |= max((((arr_1 [i_0]) ? (arr_0 [i_1]) : ((var_3 ? (arr_2 [i_0]) : (arr_4 [12] [i_0]))))), (arr_0 [i_0]));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((3029179901990794307 ? -3168 : 10688));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = ((((-(arr_2 [i_3 - 2])))) ? (arr_10 [i_2] [i_2]) : -var_9);
                                var_19 -= ((((var_12 * 0) / (min((arr_2 [i_0]), 1)))) + (((((min(0, var_8)))) & (arr_0 [i_3]))));
                                arr_15 [i_0] [i_0] [i_2] [i_2 - 2] [i_3] [i_3] [i_3] = (max(((1888668273 ? -10689 : (var_14 / 1821))), ((1977521140 ? (arr_13 [i_0] [11] [i_2] [11] [i_2] [i_2 - 2] [i_3 - 2]) : (max(var_3, var_10))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    var_20 = -45;
                    var_21 = (2050752409 - -13748);
                }
                arr_18 [i_0] [i_1] &= (min((((((var_3 == (arr_13 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_0] [i_0])))))), (~-7725937248700236726)));
            }
        }
    }
    #pragma endscop
}
