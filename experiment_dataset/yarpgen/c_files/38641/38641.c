/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(((var_11 ? var_4 : var_12)), var_10))) ? ((((min(var_7, var_16))) ? (max(var_9, var_16)) : var_10)) : (((-((max(var_5, var_5))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max(((((!var_7) ? (!var_5) : ((var_13 ? var_19 : var_10))))), (((((var_15 ? var_9 : var_2))) ? var_9 : ((var_0 ? var_17 : var_15))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, var_3));
                    var_22 = ((var_2 ? ((((((-9925 ? -4391 : -20367))) ? var_8 : var_13))) : ((var_15 ? ((var_5 ? var_15 : var_11)) : (max(var_18, var_8))))));
                    var_23 = (max(var_23, (((~(((var_12 ? var_9 : var_17))))))));
                    arr_9 [i_0] [i_0] = max(var_0, (min(var_3, var_19)));
                    var_24 = var_5;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] |= var_14;
        var_25 = (max(var_25, var_1));
        var_26 = (((~var_0) ? var_9 : (((var_2 ? var_13 : var_7)))));

        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_27 = var_18;
            arr_17 [i_3] [i_3] = var_17;

            for (int i_5 = 4; i_5 < 19;i_5 += 1)
            {
                arr_20 [i_3] [i_4] [i_5] = var_4;
                arr_21 [1] [1] [10] = var_2;
                var_28 -= ((var_13 ? ((var_17 ? var_0 : var_3)) : ((var_19 ? var_10 : var_1))));
            }
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_29 = (((((var_18 ? var_11 : var_18))) ? -var_5 : (!var_16)));
            arr_25 [10] [i_6] [1] = (((~var_4) ? (~var_12) : (~1)));
            var_30 = (min(var_30, ((((!var_3) ? (((var_1 ? var_16 : var_15))) : ((var_10 ? var_18 : var_4)))))));
            var_31 = (max(var_31, (((-0 ? var_13 : ((var_2 ? var_11 : var_9)))))));
            arr_26 [i_6] [i_3] [i_3] = ((var_14 ? var_10 : var_7));
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = ((var_7 ? ((-((var_1 ? var_8 : var_19)))) : var_14));
        var_32 = (max(var_32, ((((((((max(var_17, var_16))) ? var_17 : (~var_7)))) ? var_14 : (max(((var_18 ? var_16 : var_0)), ((var_7 ? var_12 : var_19)))))))));
        var_33 = ((~(~var_16)));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_33 [i_8] = ((var_13 ? (((((var_4 ? var_4 : var_19))) ? var_9 : var_10)) : ((max(((var_7 ? var_7 : var_14)), ((var_10 ? var_4 : var_3)))))));

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_34 = ((241 ? -1 : 1));
            var_35 = ((((min((!var_18), ((var_13 ? var_19 : var_11))))) ? var_17 : var_8));
            var_36 = (((((((max(var_9, var_4))) ? var_14 : (!var_8)))) ? (((var_12 ? ((3584 ? 1216063072 : -20383)) : 3078904224))) : (((((var_8 ? var_19 : var_11))) ? var_3 : var_9))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_37 = (max(var_37, var_17));
            var_38 = (min(var_38, (~var_4)));
            arr_41 [i_8] [i_8] [i_8] = (((((var_17 ? var_18 : var_10))) ? var_14 : ((var_7 ? 100 : 968789783))));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_39 = var_9;
                arr_46 [i_8] [i_11] [7] [i_8] = (((((var_15 ? (max(var_6, var_14)) : ((var_11 ? var_16 : var_14))))) ? var_4 : (max(((var_1 ? var_9 : var_10)), var_6))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_40 = max(-3584, 1);
                var_41 = (min(var_41, -var_16));
                var_42 = ((-((9992 ? ((max(var_4, 25719))) : 12417))));
            }
            arr_50 [i_8] [i_11] = ((((((((9110 ? -7478037837515189977 : 1))) ? var_19 : ((var_6 ? var_12 : var_19))))) ? (((((var_9 ? var_3 : var_13))) ? var_5 : ((var_17 ? var_17 : var_19)))) : ((((((var_0 ? var_15 : var_9))) ? ((max(var_10, var_1))) : (~var_13))))));
        }
        var_43 = ((((((~var_17) ? ((var_19 ? var_9 : var_13)) : (((max(var_0, var_19))))))) ? (max(((var_3 ? var_6 : var_12)), ((max(var_5, var_5))))) : (((!(~var_4))))));
        var_44 = ((var_16 ? var_7 : (min((((var_2 ? var_1 : var_0))), ((0 ? 1 : 3078904202))))));
        var_45 = (min(var_45, var_0));
    }
    #pragma endscop
}
