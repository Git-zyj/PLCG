/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((((((var_0 ? var_0 : var_1))) ? -var_4 : var_7))) ? (((-4770774153739024343 ? -4770774153739024321 : 605592600))) : ((var_6 ? (((238 ? 12275 : 0))) : ((var_2 ? var_1 : var_4)))))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((var_9 ? ((var_13 ? var_11 : var_9)) : -var_1))) ? (((((var_0 ? var_3 : var_4))) ? (~var_11) : ((var_10 ? var_12 : var_6)))) : var_10);
        var_16 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((var_0 ? (((var_3 ? var_3 : var_3))) : var_3));
                    var_18 = ((-var_1 ? (~1110848335235091505) : (((-((4613761826919761933 ? 1 : 13541)))))));
                    var_19 = ((((((((-39 ? 5 : var_1))) ? -1 : ((-792385080463963789 ? 4770774153739024322 : -8222))))) ? (((((1 ? 4294967295 : 181))) ? var_12 : var_1)) : -var_10));
                }
            }
        }
    }
    var_20 = (var_13 ? (((((var_0 ? var_13 : var_1))) ? var_7 : var_4)) : -var_11);
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_21 = (((((var_12 ? ((var_6 ? var_13 : var_5)) : (~var_10)))) ? (!var_8) : (((~var_8) ? ((var_1 ? 15 : 255)) : ((var_11 ? 29062 : 9))))));
                                var_22 = (((((var_5 ? var_10 : ((-34 ? 2450833657655463277 : 1))))) ? ((-((var_8 ? var_5 : var_6)))) : ((((((var_12 ? var_11 : var_12))) ? var_10 : ((1 ? var_10 : var_3)))))));
                                var_23 *= ((((((((var_3 ? var_11 : var_13))) ? ((var_5 ? var_4 : var_10)) : (((var_6 ? var_11 : var_11)))))) ? var_7 : var_11));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_24 += ((var_4 ? ((-var_1 ? ((var_10 ? var_4 : var_12)) : var_1)) : (((~(~var_3))))));
                                var_25 = ((-((29071 ? 18473 : 1))));
                                var_26 = ((-180 ? ((((((var_4 ? var_7 : var_11))) ? -var_8 : ((var_3 ? var_0 : var_8))))) : ((var_4 ? var_4 : (((var_4 ? var_1 : var_6)))))));
                                var_27 = (((((var_6 ? ((var_4 ? var_5 : var_2)) : (!var_2)))) ? (!var_3) : ((-var_10 ? (((var_1 ? var_10 : var_11))) : ((var_0 ? var_0 : var_13))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
