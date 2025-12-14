/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = var_11;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((((((18446744073709551615 ? 214 : 4))) ? var_3 : (((var_5 ? var_4 : var_0))))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (((((32 ? var_8 : 1461884207))) ? var_4 : ((var_12 ? var_10 : var_4))));
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] [i_2] = (((((var_3 ? var_5 : var_10))) ? var_2 : ((var_12 ? var_3 : var_7))));
                        arr_14 [i_2] [i_1] [i_2] [i_4] [i_1] [i_2] = var_0;
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] = (((((-3865446074727958877 ? 32 : 1))) ? var_2 : ((var_7 ? var_8 : var_8))));
                        arr_20 [i_1] [i_2] = (((((var_11 ? var_4 : var_9))) ? (((var_5 ? var_5 : var_10))) : ((var_7 ? var_8 : var_3))));
                        var_14 = (((((var_1 ? var_2 : var_12))) ? ((var_3 ? var_10 : var_8)) : ((var_5 ? var_1 : var_11))));
                    }
                }
            }
        }
        var_15 = var_4;
        var_16 = (max(var_16, (((var_6 ? var_7 : ((var_11 ? var_12 : var_3)))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (max(((max((min(var_11, var_9)), (max(41, -60))))), ((((max(var_8, var_11))) ? (((var_5 ? var_10 : var_12))) : var_6))));
        var_17 = (max((max(var_4, (min(var_3, var_3)))), ((max(((max(var_1, var_4))), (min(var_9, var_7)))))));
        arr_24 [i_6] = ((((min(var_9, (min(var_7, var_0))))) ? var_1 : (min((min(var_9, var_6)), (((var_9 ? var_1 : var_4)))))));
        var_18 = var_1;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_19 = var_5;
            var_20 = var_7;
            arr_29 [i_7] = var_4;
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_33 [i_6] [i_6] [i_6] = (max(((max(((var_10 ? var_6 : var_10)), (((3865446074727958876 ? 780747034 : -2117884665)))))), ((((max(var_7, var_4))) ? (((var_7 ? var_2 : var_9))) : (max(var_10, var_3))))));
            arr_34 [i_6] [i_8] = (min((min((max(0, 12989064027596715040)), 12989064027596715033)), 214));
            var_21 |= max(var_1, (max((min(var_4, var_10)), (max(var_11, var_10)))));

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_38 [i_6] [i_6] [i_6] [i_6] = var_11;
                arr_39 [i_6] [i_6] [i_6] [i_6] = (min((max(((var_2 ? var_8 : var_7)), ((min(var_10, var_11))))), (max(((min(var_10, var_7))), ((var_3 ? var_8 : var_7))))));
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 24;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_22 = var_2;
                    var_23 = (((((var_8 ? var_8 : var_7))) ? ((216 ? -3865446074727958877 : 32)) : var_11));
                    var_24 = (min(var_24, ((((((42 ? -780747027 : 29))) ? var_6 : ((3057092631315663106 ? var_9 : var_6)))))));
                    var_25 = (min(var_25, ((((((var_4 ? var_1 : var_1))) ? ((var_9 ? var_7 : var_6)) : (((var_12 ? var_4 : var_8))))))));
                    arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = var_1;
                }
                var_26 = var_7;
                var_27 = var_12;
                var_28 = var_7;
            }
            for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_53 [i_12] [i_6] [i_12] [i_13] [i_6] [i_6] [i_6] = var_3;
                            var_29 = (max(((((max(var_6, var_6))) ? (((var_12 ? var_5 : var_5))) : (max(var_8, var_3)))), ((min(0, 1)))));
                            var_30 += var_10;
                        }
                    }
                }
                var_31 = (min((max((max(var_8, var_3)), (((var_5 ? var_12 : var_9))))), ((max(((var_5 ? var_0 : var_5)), ((max(-13, 213))))))));
                arr_54 [i_8] [i_6] [i_12] [i_8] = (max(((max(((min(var_11, var_11))), ((var_8 ? var_2 : var_4))))), (max((min(var_3, var_7)), (((var_6 ? var_8 : var_5)))))));
            }
            for (int i_15 = 1; i_15 < 23;i_15 += 1) /* same iter space */
            {
                var_32 = ((var_11 ? (((max(((max(var_1, var_5))), var_10)))) : (max(var_1, (max(-3024649296114553066, 184))))));
                var_33 = max((max(var_3, ((min(var_9, var_9))))), var_8);
                arr_59 [i_6] [i_6] [i_6] = (max((max(((min(1, var_1))), (max(var_9, var_6)))), ((min(((max(var_12, var_1))), ((var_1 ? var_4 : var_12)))))));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            var_34 = ((((((((780747034 ? 42 : 27651))) ? (max(var_10, var_3)) : ((max(var_6, var_9)))))) ? ((((((var_11 ? var_8 : var_11))) ? ((max(var_4, var_7))) : ((var_3 ? var_5 : var_12))))) : (max((max(var_9, var_3)), (max(5457680046112836576, 2072446218))))));
                            var_35 = ((((max((max(var_4, var_0)), (min(var_11, var_0))))) ? ((((max(37884, 212))) ? var_6 : var_10)) : var_1));
                            var_36 = (min(((((max(var_7, var_12))) ? (min(var_6, var_1)) : var_4)), ((((max(var_7, var_10))) ? (((max(var_8, var_12)))) : ((var_12 ? var_6 : var_6))))));
                            var_37 = (min((min(((max(var_11, var_1))), (max(2270902994065660212, -3057092631315663106)))), ((max((min(var_5, var_7)), var_2)))));
                        }
                    }
                }
                var_38 = (max(var_38, (((((max(var_0, ((min(var_7, var_12)))))) ? ((min(((max(var_7, var_10))), (max(var_0, var_10))))) : ((((max(var_3, var_2))) ? (max(1, 9007199246352384)) : (((max(var_12, var_2)))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            {
                var_39 = var_12;
                var_40 = (max(17215880277764938041, 72057589742960640));
                var_41 *= (max(((max(((max(var_2, var_5))), (min(240, 223))))), (min((min(3057092631315663106, 0)), ((18446744073709551610 ? -2493068390460046098 : -3057092631315663106))))));
                arr_72 [i_18] [i_18] = (min((((((var_7 ? var_12 : var_1))) ? (max(var_3, var_12)) : (max(var_9, var_3)))), var_9));
            }
        }
    }
    #pragma endscop
}
