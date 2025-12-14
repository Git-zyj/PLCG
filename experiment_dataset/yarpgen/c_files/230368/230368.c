/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (max((((((arr_1 [i_0]) & 478947285)))), (min((min(3816019998, 213)), ((min(var_4, (arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = (max((((~((var_1 ^ (arr_0 [i_0])))))), var_12));
    }
    var_16 += (min(var_13, (1 & 43254)));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [16] [i_1] [i_1] [i_1] = ((((~(arr_15 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]))) - ((min(-7, 1)))));
                                var_17 = (((((!(arr_15 [i_2 + 1] [i_2 - 1] [17] [i_2 - 1] [i_3])))) & (3641241541 > 20)));
                                var_18 = var_6;
                            }
                        }
                    }
                    var_19 ^= ((+(max((arr_5 [i_2] [i_2]), (arr_12 [i_1] [i_2] [i_3] [i_2 - 1])))));
                    arr_18 [2] [i_2] &= ((((~(arr_10 [14] [i_2 - 1]))) != (min((min(-6194764131633701549, 1267371608)), 3065735708186241763))));
                    var_20 += (((2068885308 ? 0 : 3816020005)));
                    var_21 = ((!((min((arr_15 [i_1] [9] [i_2] [i_2] [i_3]), ((min(1, 43254))))))));
                }
            }
        }
    }
    var_22 = var_1;
    var_23 *= (max(var_4, ((((30 ? 23414773 : var_14)) % (~var_4)))));
    #pragma endscop
}
