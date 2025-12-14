/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((min(var_12, 11148946997274441918)))))));
                var_15 ^= (max((((((arr_1 [0] [i_1]) - (arr_2 [i_0] [i_0]))) ^ (((~(arr_2 [i_0 - 1] [i_1])))))), (arr_1 [i_0] [i_1])));

                for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
                {
                    var_16 *= (((~(max(var_11, var_10)))));
                    var_17 *= 11148946997274441918;

                    for (int i_3 = 3; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_18 += ((min(((var_11 ? 14 : 1), (((-5406339265016840294 ? (arr_2 [4] [i_1]) : var_6)))))));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_19 -= 1;
                            var_20 ^= ((-(((~1) & 0))));
                        }
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            var_21 += (max((min(-9223372036854775803, 4294967295)), (var_1 * var_5)));
                            var_22 += (~var_8);
                            var_23 = (max(var_23, 18251467595454425986));
                            var_24 -= ((-var_0 + (7297797076435109697 != 4294967295)));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_25 += -11148946997274441918;
                            var_26 &= ((((min((~1), (1656965457 ^ var_4)))) > (var_5 && 33554432)));
                        }
                    }
                    for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, var_10));
                        var_28 *= var_10;
                        var_29 = (max(var_29, 30274));
                    }
                    for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_30 = (-32767 - 1);
                        arr_24 [i_0 + 1] [i_1] [i_1] [1] [i_8 - 2] &= (min(127, 1));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_31 += ((((min(55, -1656965457))) ? var_0 : var_5));
                                var_32 = 479086549;
                            }
                        }
                    }
                }
                for (int i_11 = 1; i_11 < 8;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_33 += (((((var_12 ? ((min(var_10, var_5))) : (max(var_6, var_7))))) ? ((-((max(var_0, var_1))))) : (((((0 << (var_8 + 55))) != (arr_2 [i_0 + 2] [8]))))));
                                arr_39 [i_12] [i_12] [i_1] |= (((((arr_30 [i_0 + 2] [i_1] [i_12 + 2] [i_11 + 3]) / (min(var_12, (arr_15 [i_0] [i_12]))))) > (min((min(var_4, var_8)), ((((arr_26 [8] [i_12] [i_11] [i_1] [5] [i_0]) + 15)))))));
                                var_34 *= (-2147483647 - 1);
                                arr_40 [i_0 - 1] [0] [4] [i_12] [i_12] [i_12] &= (((~((var_1 ? var_11 : var_5)))));
                                var_35 *= (arr_34 [i_12]);
                            }
                        }
                    }
                    arr_41 [i_0] [i_1] [i_1] [8] |= 0;

                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        arr_44 [i_0] [0] [i_11 + 3] [i_14 - 1] &= ((184 ? -267177537 : (-2147483647 - 1)));
                        var_36 &= ((24641 ? -1867641892203772926 : var_4));
                    }
                    var_37 = (max(var_37, -3722704512));
                }
            }
        }
    }
    #pragma endscop
}
