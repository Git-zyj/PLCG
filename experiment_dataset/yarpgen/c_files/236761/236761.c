/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (var_7 + var_2)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 -= 10633789455152630104;
                    var_22 *= ((87 ? 248 : 17227));
                    var_23 = var_0;
                    var_24 ^= (arr_9 [14] [14] [i_1]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 += ((var_8 ? (arr_1 [0]) : ((-13 - (var_2 - 4094)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_26 = (max(var_26, 78));
                    var_27 = (min((((arr_13 [i_3] [i_5 - 1] [i_3]) ? (arr_13 [i_3] [i_5 - 1] [i_3]) : var_5)), (((-928779432 ? (arr_13 [i_3] [i_5 + 1] [i_3]) : (arr_13 [i_3] [i_5 + 1] [i_3]))))));
                }
            }
        }

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_28 = (((arr_17 [i_3] [i_6] [i_3]) ? var_4 : ((min((arr_17 [1] [i_6] [i_3]), (arr_17 [i_3] [i_3] [i_3]))))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_29 &= 1;
                        var_30 = (~(~138));
                    }
                }
            }
            var_31 += (arr_11 [i_3]);
        }
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            var_32 -= var_9;
            var_33 = ((((32767 ? var_9 : (arr_11 [i_9 - 2]))) / (arr_22 [i_9 - 1] [i_9 + 2])));
            var_34 = ((+(min((arr_17 [i_3] [i_3] [i_3]), ((-(arr_3 [i_9 - 1] [19] [i_3])))))));
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_35 -= (min(((min(var_11, var_15))), ((1 ? 30270 : 56))));

        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_36 = ((+(((arr_34 [i_10] [i_10] [i_10]) ? 4294967276 : 2442))));
            var_37 = ((((((arr_33 [i_11]) ? ((((-9223372036854775807 - 1) || 4076166691538896329))) : var_0))) ? (min((min((arr_31 [i_11]), -3933156421154611404)), (arr_34 [i_10] [i_10] [i_11]))) : (((arr_30 [i_11]) / var_7))));
            var_38 = (var_16 && var_13);
            var_39 &= ((((((arr_32 [i_10]) ? (arr_32 [i_10]) : (arr_32 [i_11])))) ? (((arr_32 [i_10]) ? (arr_32 [i_10]) : (arr_32 [i_10]))) : 9223372036854775807));
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_40 = (15116506237645223617 && 9223372036854775781);
            var_41 += (min(((((arr_35 [i_12] [i_10]) < (arr_35 [i_10] [i_12])))), (1 * 9909699851632695196)));
            var_42 &= (arr_30 [1]);
        }
        var_43 = -230;
    }
    #pragma endscop
}
