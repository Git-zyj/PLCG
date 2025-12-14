/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (-(~3330986030541782390));
        var_13 |= ((28348 >> (((!(0 > 17592186044415))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (min(var_14, var_12));
        var_15 = (((max(9223372036854775807, 127)) == ((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_16 = min(var_10, ((-14057254178692903 ? (33804 / -8277135399853952466) : var_3)));
        var_17 = (-127 - 1);
        var_18 = ((var_9 * ((min(65535, 7434)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_19 = var_7;
                    var_20 = (max(var_20, (((-2710001210326502526 - (((65535 + var_7) - var_1)))))));
                    arr_20 [i_3] [i_4] [0] |= (-5129960994785448651 - 33804);
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_21 = ((59249 <= (arr_26 [4] [i_3 + 1] [i_7] [i_7])));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_22 = ((8 ? ((((arr_26 [i_3] [i_4] [14] [i_4 + 1]) <= var_4))) : (((12 || (arr_28 [i_6] [i_7] [i_6]))))));
                            arr_30 [i_3] [i_3] [i_3] [i_7] [i_3] = (!-var_3);
                            arr_31 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7] = 65527;
                            var_23 = ((var_8 ? 14149 : var_1));
                            var_24 = ((-(arr_28 [i_4 + 1] [i_4 + 1] [i_4 - 2])));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_25 = (((((3186 ? 9794 : var_10))) ? ((var_7 ? (arr_6 [i_6] [i_7]) : var_8)) : ((((var_6 >= (arr_23 [i_3])))))));
                            var_26 = ((29689 == (arr_16 [i_4 - 1] [i_7])));
                            var_27 = arr_10 [i_3 - 1];
                            var_28 = (max(var_28, (!31725)));
                        }
                    }
                    var_29 += (arr_32 [i_4] [i_4]);
                    var_30 = (max(var_30, ((((((44616 << (((((arr_18 [14] [i_4 - 1]) + 5532884130210219062)) - 28)))) / -var_12))))));
                }
                arr_36 [i_3] [i_3 - 1] = (((!-17592186042368) == var_0));
                arr_37 [i_4] = ((-(min(var_8, var_5))));
            }
        }
    }
    #pragma endscop
}
