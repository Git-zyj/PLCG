/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [5] [i_0] [i_0] [i_0] = 1;
                        arr_11 [i_0] [i_1] [i_3] [10] [i_3] [i_3] |= (((((((arr_2 [i_0]) || var_16)))) & ((-1 ? -1703988415 : -3369369936242965355))));
                        var_20 *= (min(173, 4294967295));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_21 = (min(1872956537, (arr_12 [i_0] [i_0] [i_2] [i_3] [i_3])));
                            var_22 += ((-90 ? ((~(arr_13 [i_0]))) : ((max((arr_4 [i_2]), (arr_4 [i_2]))))));
                            var_23 = var_5;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_24 *= ((var_3 || (((~(arr_8 [i_5] [i_3] [i_0] [i_1] [i_0]))))));
                            var_25 = ((+((((arr_15 [i_0] [i_1] [i_2] [i_1] [i_0]) == (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                            var_26 = (arr_15 [i_2] [i_1] [i_2] [i_3] [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_27 = (~-75);
                            var_28 ^= var_15;
                            var_29 &= ((((max((arr_12 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6]), var_7))) ? 60 : 3));
                            var_30 = ((!(((1 << (arr_16 [i_2] [i_6 + 1] [i_6 + 1] [i_6] [6]))))));
                        }
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            var_31 &= var_15;
                            var_32 = ((!((max(2508540923, -8660455574643843821)))));
                            var_33 ^= 3611409726;
                        }
                    }
                    var_34 = (arr_14 [i_0] [i_1] [i_2] [i_1] [i_2]);
                }
            }
        }
    }
    var_35 ^= ((-(min(var_7, (15450 + var_1)))));
    var_36 -= ((max(65535, var_1)));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_36 [i_8] [i_8] [i_10] [i_8] [i_8] = min((((arr_31 [i_11 - 3] [i_11 - 3] [i_10] [i_11 - 2] [i_11]) ? (arr_22 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_10] [i_11 - 1]) : (arr_7 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_11 - 2] [i_10]))), (((arr_22 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_10] [i_11 - 1]) | (arr_29 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_11 - 2]))));
                                var_37 = -114947972;
                                var_38 *= ((!(((var_14 + 0) != ((max(var_1, 102)))))));
                            }
                        }
                    }
                    var_39 = (max(-5988009779358789115, 252));
                }
            }
        }
    }
    #pragma endscop
}
