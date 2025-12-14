/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = ((1065353216 > (((((127 ? 10942 : 10934))) * 4294967295))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(((36 ? -35 : 3993406996)), ((var_8 ? var_11 : (-1143690452 & var_12)))));
                var_20 = (max(((max((max(99, var_2)), 27))), ((-1 ? (max(127, -232731718396153021)) : (!1023)))));
                var_21 = ((-10948 ? ((-19 ? -35 : (arr_0 [i_0 - 1]))) : (((arr_0 [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_1 - 2]) : (arr_4 [i_0 + 2] [i_1 + 1])))));
                var_22 = ((((((max(10930, 10930))))) > 54593));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    var_23 |= var_16;
                    var_24 = (max(var_24, ((((-60 ? (arr_0 [i_4]) : 3))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 17;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, (((var_4 ? var_2 : -37)))));
                            var_26 ^= (((var_9 ? -14298 : var_6)));
                            var_27 |= var_1;
                        }
                        for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_28 = ((var_3 ? var_10 : ((620056330 ? var_10 : 56))));
                            var_29 = (((((var_0 ? var_15 : var_1))) + -var_2));
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_30 -= var_2;
                            var_31 &= ((10958 ? -3 : -3771));
                            var_32 = var_1;
                            var_33 = ((var_15 + ((1143690467 ? 65532 : var_16))));
                        }
                        var_34 = (((arr_3 [i_2] [i_5 + 1] [i_2]) || -81));
                        var_35 = (((arr_1 [i_2 + 1]) < 65535));
                        var_36 += arr_7 [i_6];
                    }
                }
            }
        }
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1)
    {
        var_37 = (arr_32 [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 24;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_38 = var_9;
                                var_39 = (((max(-1521320536, (max(4294967295, 10930))))) ? (--2) : ((((var_3 ? var_3 : var_13)) + var_10)));
                                var_40 = (max(var_40, 565358890));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 21;i_17 += 1)
                        {
                            {
                                var_41 = 20905;
                                var_42 = ((((((arr_47 [i_11] [i_11] [i_11]) ? 4294967287 : 16318))) < (((254 ? var_1 : var_16)))));
                                var_43 = (arr_34 [i_11]);
                            }
                        }
                    }
                    var_44 ^= ((!((((10930 < 57101) ? ((46849 ? 357373847 : 65535)) : var_1)))));
                }
            }
        }
    }
    var_45 = 1748983713;
    #pragma endscop
}
