/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((((min(((max(2827397492, (arr_3 [i_0])))), (((arr_4 [1] [12]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_1])))))) ? (min(((0 ? var_5 : var_12)), (min((arr_1 [i_0] [i_1]), (arr_5 [i_1 + 1] [i_0] [i_0]))))) : ((min((!2827397492), 1467569794)))));
                arr_6 [i_0] = (((max((!1467569790), (var_15 | var_7))) <= ((max(((var_11 ? var_19 : var_3)), (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))))));
                var_21 *= var_14;
                var_22 |= (max(1467569804, (min((arr_1 [i_1 - 1] [i_1]), var_0))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_11 [1] [i_0] [i_1 - 1] [i_2 - 1] = (((-(arr_2 [i_2 + 1] [i_1 - 1]))));
                    arr_12 [i_0] [i_1] [i_0] = ((((16644816558412301830 - ((max(0, (arr_1 [1] [i_1])))))) == ((min(-16239, (max(-12, (arr_7 [i_0] [i_1] [i_0] [i_2]))))))));
                    var_23 = ((-((min((arr_10 [5] [i_2 - 1] [5]), (arr_10 [i_2] [i_2 - 1] [i_2]))))));
                    var_24 = (min((min((((!(arr_9 [i_2] [2])))), (arr_1 [i_0] [i_0]))), ((((arr_3 [i_0]) || ((((arr_10 [i_2 + 1] [i_1] [i_0]) ? (arr_10 [i_0] [1] [i_2]) : (arr_1 [i_2] [13])))))))));
                }
            }
        }
    }
    var_25 *= ((!(~var_2)));
    var_26 = var_19;
    var_27 = (max(152, -var_10));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_28 = (!((!(arr_16 [i_4] [i_3]))));

                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    arr_21 [i_3] [i_4] [i_3] [3] = 155;
                    arr_22 [i_3] [i_4] [i_5] [i_4] = ((((((arr_16 [i_5 + 3] [i_3 - 1]) + (arr_13 [22] [i_4])))) && ((min(var_15, (arr_20 [i_4] [i_4] [i_4] [0]))))));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        arr_25 [i_4] [i_4] = 59101;
                        var_29 = (((arr_19 [i_3 - 2] [i_4]) % 100));
                    }
                }
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    var_30 &= (max((arr_14 [i_4] [i_4]), var_12));
                    var_31 = (max(((~((var_14 ? (arr_19 [i_3] [i_4]) : (arr_23 [i_3 - 1] [i_4]))))), ((((min((arr_18 [i_4]), var_12))) ? (arr_20 [i_4] [i_4] [i_4] [i_7]) : var_18))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_32 = (max(((((((!(arr_32 [i_8] [5] [i_4] [i_3])))) + (arr_27 [i_3])))), (min(-var_15, (((var_3 >= (arr_26 [i_3] [i_4] [i_7] [i_8 + 2]))))))));
                                var_33 ^= (!(((-(var_7 - 2827397492)))));
                                arr_35 [i_9] [i_3] [i_7] [i_3] [i_3] &= min(4294967279, ((max((arr_23 [i_3 + 1] [i_3]), (arr_23 [i_3 + 1] [i_3])))));
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    var_34 = ((var_0 - -4611686018427387904) ? (((max((arr_19 [i_4] [i_4]), var_9)))) : ((-(arr_37 [i_3 - 2] [9] [i_4]))));
                    arr_38 [i_10] [i_4] [6] = ((((((((var_9 ? (arr_28 [16] [i_4]) : 2438113179985449379))) ? (arr_17 [i_4] [i_4] [i_10]) : ((max((arr_30 [21] [i_4] [i_10 + 1] [i_3 - 2]), var_8)))))) ? (6615 != -342951654) : (min((((~(arr_26 [i_3 - 1] [i_10 + 2] [i_10] [i_10 + 2])))), ((28482 ? (arr_13 [i_10] [i_3]) : (arr_29 [i_3] [i_10] [i_3] [i_3 - 2])))))));
                    var_35 = ((((((((arr_14 [i_3] [i_10]) > -1)))) * (var_1 | 0))));
                }
            }
        }
    }
    #pragma endscop
}
