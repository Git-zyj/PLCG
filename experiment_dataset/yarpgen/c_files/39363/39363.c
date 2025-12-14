/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (420026724 >= 10122)));
    var_21 &= var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [8] [i_1] |= 3342034279;
                    arr_11 [i_0] [i_0] = var_14;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_22 = (((((((arr_13 [i_4]) ? (arr_13 [i_4]) : (arr_13 [i_3 + 2]))) + 2147483647)) << ((((var_4 ? var_6 : var_19)) - 11))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_23 = (max(var_23, ((((((arr_7 [1] [i_3 + 2] [i_3 + 2] [i_3]) + 9223372036854775807)) >> (((arr_7 [0] [i_7] [i_3 + 2] [i_3]) + 29666342236409156)))))));
                                var_24 = (((((((-127 - 1) + 2147483647)) >> (var_12 + 1515771033))) << (((arr_5 [i_3] [2]) - 8536))));
                                arr_26 [i_3] = (((((var_18 ? -1 : var_2))) ? ((var_7 ? var_4 : var_11)) : ((((-372340 + 2147483647) << var_2)))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_7] = (496 << 16);
                            }
                            arr_28 [i_3] [i_4] [1] [i_3] [i_3] = var_18;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                var_25 *= (((((((((31664 >= (arr_3 [i_9] [i_9]))))) >= var_8))) >= (((((-4 + 2147483647) << (524287 - 524287))) >> ((((-9 ? -1913814879 : var_14)) + 1913814904))))));
                arr_33 [i_8] = (((((11459237571838395577 + (arr_5 [i_8] [i_9])))) ? (((((241 >> (arr_6 [i_8] [12]))) == (arr_5 [5] [i_9])))) : (((((arr_3 [i_8] [11]) == (arr_6 [12] [12]))) ? ((var_1 << (var_8 - 3575993680))) : (var_18 >> var_6)))));
            }
        }
    }
    #pragma endscop
}
