/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_11, var_1))) ? ((~(max(8137039306198550483, 0)))) : ((min(var_13, 2147483647)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (((min(9110937461005051952, var_7))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 ^= (min((((!(!10)))), (min((!103), -1256813780))));
                    var_17 = (((((var_7 ? (min(var_9, var_3)) : 1))) ? 134 : ((~(min(var_4, 1))))));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_18 -= (max(((min(122, -618343042))), var_2));
                        var_19 = ((max(143, ((var_3 ? var_6 : -1)))));
                    }

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_20 |= (min((min(-262143, ((120 ? 3489918020108943388 : 20963)))), var_6));
                        var_21 = ((-((-(min(var_13, 9396243198429841789))))));
                        var_22 = var_10;
                        var_23 = (min(var_23, var_10));
                        var_24 = 12975801241560786218;
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_25 = ((-((var_1 ? (9396243198429841789 | 2) : var_5))));
                        var_26 = (((((~((min(71, -31860)))))) ? var_11 : (min(var_2, ((min(135, 22)))))));
                        var_27 = -126;
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        var_28 = 1558096656;

                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            var_29 = ((!(!var_0)));
                            var_30 = var_2;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_31 = ((-(!3453497846)));
                            var_32 &= (((~var_8) ? (~262149) : (~249)));
                            var_33 = ((4294967295 >> (-12154 + 12170)));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_34 = -86;
                            var_35 = 5470942832148765398;
                        }
                        var_36 = (~8485976236109341911);
                        var_37 = ((var_0 ? ((var_13 ? var_13 : var_8)) : 5470942832148765398));
                        var_38 = ((-(!1845317583)));
                    }
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        var_39 = ((-((min(var_9, 4194303)))));
                        var_40 = (min(((-10368 ? (min(var_8, 16322028)) : (max(var_7, 3373451854891439950)))), -var_5));
                        var_41 = ((min(12975801241560786225, (((1 ? 20954 : 182))))));
                    }
                    var_42 = (min(((min(((var_13 ? var_3 : 126)), (!12975801241560786247)))), (max((!var_1), (min(262143, -3003855901821559424))))));
                }
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_43 = ((-var_2 ? -var_0 : (min(var_7, 529618647863973741))));
                                var_44 = (max(var_44, (((((max(((min(var_5, var_6))), ((32767 ? 65535 : var_7))))) ? ((min(79032731, -8))) : ((min(-20963, ((min(1, 65531)))))))))));
                                var_45 = (min((((~3279434755) ? var_2 : ((min(0, 1))))), 256257361));
                            }
                        }
                    }
                }
                var_46 = (max(var_46, ((max(2193499591, 224)))));
            }
        }
    }
    #pragma endscop
}
