/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((var_9 & (min(-1722916835658928210, 255)))), 167));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((!1721205631), (130944 != 1))))));
        var_14 = (max((((!(!65)))), ((-1721205640 ? ((((arr_2 [i_0]) && (-127 - 1)))) : (arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = (arr_2 [i_0]);
            var_16 |= 179;
        }
        var_17 = (arr_4 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_18 = min(((1 & (arr_5 [i_4] [i_4] [i_4]))), ((((arr_13 [i_3] [i_4]) ? (arr_1 [i_0] [i_0]) : 2105926240))));
                        var_19 = ((1949236774 >= (max((-2147483647 - 1), 2147483647))));
                        var_20 = (min(1564383109, -370633200));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_21 = ((!((((arr_0 [i_5]) ^ (min(212014236344959032, (arr_12 [i_0] [i_2] [i_0] [i_5] [i_5]))))))));
                        var_22 = (((((var_5 ? var_2 : ((-48 ? (-2147483647 - 1) : 2147483645))))) ? var_1 : ((min((arr_6 [i_2 + 1]), 1956752594)))));
                        var_23 += (max((!12), 487122595));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_24 = (arr_8 [i_6]);
                        var_25 |= ((!(arr_7 [i_0] [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_26 = ((~(((3 && (arr_4 [i_2] [i_2 + 2]))))));

                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_27 = (max(var_4, ((-(arr_9 [i_3 + 2] [i_3 + 2])))));
                            var_28 = (arr_5 [i_2] [i_2] [15]);
                            var_29 = (((!var_0) > ((((arr_7 [i_8 + 1] [i_2 + 2]) || 2591721952)))));
                            var_30 = -212014236344959042;
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_31 |= ((((max((var_8 ^ var_7), 1703245343))) || (arr_3 [i_3 + 1] [i_2 + 1] [i_2 - 3])));
                            var_32 = (min(var_32, (((+(max((~-1), ((2909831616 ? var_1 : var_6)))))))));
                        }
                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            var_33 = (min(var_33, ((max(4294967295, -177709638)))));
                            var_34 = (arr_28 [i_2] [i_2 - 1] [i_10 + 2] [i_3 + 2]);
                            var_35 -= (arr_6 [i_0]);
                        }
                        var_36 = (((1721205631 ? 58481 : ((var_0 << (((((-2147483647 - 1) - -2147483617)) + 49)))))));
                        var_37 = (((((min(var_2, (arr_29 [i_7] [i_3] [i_3 + 2] [i_2] [i_0] [i_0] [i_0]))))) ? -1 : (((arr_9 [i_3 + 2] [i_2 - 2]) ? (arr_18 [i_3 - 1] [i_2 - 2] [i_2 - 2]) : (arr_9 [i_3 + 2] [i_2 + 1])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        var_38 = ((!-1440601762) < (arr_1 [i_2 - 1] [i_2 + 1]));

                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            var_39 = (((arr_15 [i_2 - 3] [i_2 - 1] [3]) && 1));
                            var_40 = (max(var_40, (((-((var_11 ? var_7 : 2134488295)))))));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_41 = arr_0 [i_2];
                            var_42 = (-(arr_5 [i_3 + 2] [i_0] [i_0]));
                        }
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_43 = (max(var_43, (arr_28 [i_0] [i_0] [2] [i_0])));
                        var_44 = (min(var_44, (((91 ? var_2 : ((1 & (var_2 < 9223372036854775807))))))));
                    }
                    var_45 = 115;
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 0;i_15 += 1)
    {
        var_46 = ((((((var_0 >= var_3) <= ((var_1 ? 1 : 847585999))))) ^ var_6));
        var_47 = var_3;
        var_48 = max(((min(((3914735308 == (arr_20 [i_15 + 1] [i_15] [i_15] [i_15]))), (arr_33 [i_15 + 1])))), var_4);
    }
    #pragma endscop
}
