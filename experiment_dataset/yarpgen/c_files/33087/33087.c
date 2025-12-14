/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0 + 2] [1] [i_0] = (min((((-(arr_0 [i_0])))), (min(1, 4343651479679282937))));
                    arr_9 [i_0] [i_1] [i_0] = ((~((~(arr_1 [i_0] [i_0 + 1])))));
                    var_17 -= (!10091869104249629775);
                    var_18 = (((arr_0 [i_0]) ? (((arr_0 [i_0]) * (arr_0 [i_0]))) : (arr_7 [i_0 + 3] [i_0] [i_0])));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, ((((arr_7 [i_0 - 1] [i_1] [i_3]) ? 1 : (min(((-1 ? 22 : 127)), (((~(arr_13 [i_0] [i_3] [i_3])))))))))));
                    var_20 = (min((((arr_5 [i_0 - 1] [i_0 + 2]) ? (arr_0 [i_0]) : (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1]))), ((min(49125, (min(1, 31)))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_21 = (min(var_21, 15718948067515080922));
                    var_22 |= (((((-1 ? 60913 : 255))) ? (((arr_2 [i_4]) ? 31 : (arr_3 [i_0 - 1] [i_0]))) : (arr_14 [i_0 + 2])));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_19 [i_5] [i_1] [i_0] = 0;
                    var_23 = (((min(127, (arr_3 [i_0 + 2] [i_1])))) ? ((-(arr_3 [i_0 + 2] [i_1]))) : (min(3205609311310998435, (arr_3 [i_0 - 1] [i_1]))));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        var_24 = ((arr_15 [i_0] [i_5] [i_0]) ? (((arr_1 [i_6] [i_0]) ? (arr_12 [i_0] [i_1] [i_5] [i_0]) : 223)) : -1);
                        var_25 ^= 65535;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_29 [1] [i_1] [i_1] [i_0] [i_1] = 26614;
                                var_26 = ((((arr_4 [i_0] [i_8 - 1]) ? (arr_26 [i_0] [i_1] [i_0 + 1] [i_7]) : 0)));
                                arr_30 [i_5] [i_1] [i_5] [i_7 - 3] [i_0] [i_7 - 3] = (((((arr_21 [i_7 + 1] [i_8 - 1] [i_7 - 1] [i_7 - 3] [i_8] [i_0]) ? (arr_21 [i_7 - 2] [i_8 - 1] [i_1] [i_0 - 1] [i_8] [i_1]) : (arr_21 [i_7 - 3] [i_8 - 1] [i_5] [i_7] [6] [i_7 + 1]))) == (((((arr_21 [i_7 + 1] [i_8 - 1] [i_5] [i_7] [i_8] [i_7]) + 2147483647)) >> (((arr_21 [i_7 - 2] [i_8 - 1] [i_5] [i_7] [i_8 - 1] [i_0 + 1]) + 50))))));
                                var_27 &= (min((min((((arr_15 [i_1] [4] [i_1]) + 32767)), ((max(65535, 1))))), ((((6653610184235215079 ? (arr_3 [i_0] [i_1]) : (arr_13 [i_8 - 1] [i_1] [i_0])))))));
                                arr_31 [i_0] [i_0] [i_7 + 1] [i_7 + 1] = ((~(((((((arr_26 [i_0 + 1] [i_0 + 3] [i_0] [i_0]) ? 1 : -367165931))) > ((30162 ^ (arr_3 [i_8] [i_1]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_28 = (arr_17 [i_0] [i_1] [i_5]);
                                var_29 = (max((((~(min(-32767, (arr_33 [i_0 + 1] [i_10 - 1] [i_1] [i_9] [i_1])))))), (min(-7363, 1079783210))));
                                arr_36 [i_1] [i_1] [i_1] [i_0] [i_0] [i_9] [i_9] = (((arr_26 [i_5] [i_10 - 1] [i_5] [i_9]) != (arr_26 [i_0] [i_5] [1] [i_9])));
                                arr_37 [i_0] [i_0] [i_0] [i_0 + 2] [11] [i_0] = 30344;
                            }
                        }
                    }
                }
                var_30 += (min((max((arr_15 [i_0] [i_0] [i_1]), (((arr_7 [i_0] [i_1] [i_0]) ? (arr_32 [i_1] [i_0]) : (arr_5 [i_1] [i_1]))))), ((((arr_28 [i_0 + 3] [5] [i_0] [10] [i_0]) <= ((6381 << (((((arr_23 [i_0] [1] [i_0] [6] [i_0 - 1]) + 1445655579)) - 22)))))))));
                var_31 = (max(var_31, (((~((min(-121, 52858))))))));
            }
        }
    }
    var_32 = ((var_2 ? (var_8 >= var_5) : ((var_12 / ((var_9 ? var_1 : var_12))))));
    #pragma endscop
}
