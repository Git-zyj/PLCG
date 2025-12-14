/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max((((~(~var_5)))), (min(-18446744073709551615, var_7))));
                arr_8 [3] [3] [13] = (((((!var_6) || 18446744073709551615)) || (((-((~(arr_3 [i_0]))))))));
                var_16 |= var_3;
            }
        }
    }
    var_17 = (max(var_17, (~var_13)));
    var_18 = var_12;
    var_19 = ((-(!-var_14)));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_20 = (max(var_20, ((((((~(~var_14)))) ? (((((~(arr_9 [i_2])))) ? (!4294967295) : (arr_9 [i_3]))) : (((!(~18446744073709551615)))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [12] [i_3] [i_3] [i_5] = ((~(min(((((arr_18 [i_2] [i_3] [i_4] [i_5]) && var_2))), (max((arr_12 [i_2] [i_2] [i_4]), (arr_18 [i_2 + 2] [i_3] [i_4] [i_5 - 2])))))));
                            var_21 |= ((-((((max(var_7, 18446744073709551615))) ? (min(var_5, 1632375850)) : (~var_1)))));
                            var_22 = ((~(min(1, (!var_5)))));
                            var_23 = ((-var_5 ? ((((((arr_13 [i_2] [i_3] [1]) ? var_5 : var_5))) ? (max((arr_12 [i_3] [i_3] [i_3]), var_15)) : ((((!(arr_13 [i_2] [i_4] [i_5]))))))) : (min(18446744073709551615, -1665632762))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
