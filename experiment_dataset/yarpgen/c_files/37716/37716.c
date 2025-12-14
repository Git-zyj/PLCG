/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 || var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(5, ((((arr_4 [i_0] [i_0]) > var_11)))));
                var_14 = (min(var_1, (~var_8)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_1] [i_2] = 1;
                            var_15 = (max(var_15, ((((!(arr_9 [i_3 + 1] [i_3] [i_3 + 1] [i_3])))))));
                            arr_13 [i_2] [i_2] [i_0] [i_0] = (((((209 * (arr_8 [0] [i_1] [i_2] [i_3 - 1]))) ? (arr_10 [i_2] [9] [i_2] [i_3 - 1] [i_2]) : var_1)));
                            var_16 = (209 <= 47);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                            {
                                var_17 = ((((((((209 ? 53 : (arr_10 [i_0] [i_5 - 1] [i_4] [i_1] [i_0])))) > (max(var_4, (arr_8 [i_6] [i_5] [i_4] [i_1]))))))) > (~var_1));
                                arr_22 [i_0] [i_1] [i_4] [i_5] [i_6] = ((95 + (min((min((arr_11 [i_6] [i_0] [i_4] [i_0]), -7532013847784615869)), ((((arr_0 [i_5 - 1]) ? var_9 : (arr_8 [i_0] [i_1] [i_4] [i_4]))))))));
                                arr_23 [i_0] [i_5] [i_4] [i_5] [i_5] = ((~((var_10 | (arr_3 [i_0] [i_1] [i_0])))));
                            }
                            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_7] [i_5] [i_1] [i_1] [i_1] [i_0] &= 4294967294;
                                arr_28 [i_0] [i_1] [i_5 - 1] [i_5 - 1] [i_7] [i_5] = ((130 ? (arr_2 [i_0]) : (min(((((arr_7 [i_7] [i_5] [2] [i_0]) ? 0 : (arr_17 [i_0] [i_4] [i_0])))), (((-16 + 9223372036854775807) << (((var_6 + 16537) - 22))))))));
                            }
                            var_18 = -var_7;
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_19 += (!109);
                        var_20 *= arr_26 [i_8] [0] [i_0] [i_9] [i_9];
                        var_21 = (((arr_31 [i_8]) + (arr_32 [i_9] [i_8] [i_1] [i_1] [i_0] [i_0])));
                        var_22 = ((-var_9 % (arr_20 [i_9] [i_1])));
                        var_23 = (arr_5 [i_0] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_24 *= ((~(arr_21 [i_11] [i_1] [i_11 - 1] [i_1] [i_10 - 3])));
                                var_25 = var_7;
                                var_26 &= (((~-1) ? (var_0 && -7532013847784615888) : var_4));
                            }
                        }
                    }
                    var_27 = ((-85 ? 15 : (var_6 < 2144617092612082141)));
                    var_28 = (max(var_28, 32767));
                    var_29 &= 0;
                }
            }
        }
    }
    #pragma endscop
}
