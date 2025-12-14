/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = ((61705 ? -31359 : -2048));
        var_11 = ((-((max(10697, 2056)))));
        var_12 = (min(var_12, ((min((min((arr_1 [i_0]), 2081)), (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = (((((arr_1 [i_0]) ? (arr_0 [i_0]) : ((var_6 ? var_8 : 527765581332480))))) ? (arr_1 [i_0]) : (arr_1 [i_0]));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_13 *= var_1;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = max((max((arr_10 [i_1] [i_2 + 2] [i_1]), (arr_10 [i_1] [i_2 + 2] [i_1]))), ((-2027 ? (arr_10 [i_3] [i_2 + 1] [i_1]) : (arr_10 [i_1 - 2] [i_2 + 3] [i_1]))));
                        var_15 = (max(var_15, ((((!var_7) ? 1 : ((~(arr_7 [i_2 + 3] [i_3] [i_4]))))))));
                        arr_13 [i_2] [i_1] = ((((((19351 * var_9) ? (var_5 + 12463) : (arr_4 [i_1 + 2] [i_1 - 2])))) ? 166 : (arr_6 [i_3] [i_3] [10])));
                        arr_14 [i_1] [17] [4] [i_3] [i_1] = ((20 ? 0 : ((~(var_1 && 1292204489)))));
                    }
                }
            }
            arr_15 [14] [i_1] [i_2] = 2081;
            var_16 ^= 71;

            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                arr_19 [i_1] [i_5 + 2] = (((((max((arr_9 [i_2] [i_1]), var_6))) ? ((((arr_7 [i_1] [i_2] [i_5]) / 143))) : (18402412822286807491 * -2057))));
                var_17 = (max(var_17, (((1 ? -2250396250453729493 : (((((max((arr_9 [i_1] [12]), 17493))) ? -1 : 10697))))))));
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                var_18 = ((10697 ? 4096 : -2034));
                arr_23 [i_1] [i_6] [i_6] |= (((((9223372036854775807 ? (arr_17 [i_1] [i_6] [i_1] [i_1]) : (arr_17 [i_1] [i_6] [i_1] [i_1])))) || -695534765));
                arr_24 [i_6] |= var_3;
            }
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            arr_28 [i_1] [i_1] = (((arr_10 [i_1] [i_1 - 2] [i_1]) || (arr_10 [i_1] [i_1 - 2] [i_1])));
            arr_29 [i_1] [i_1] [10] = ((1292204489 ? var_3 : (arr_22 [i_1 - 1])));
            arr_30 [i_7] [i_1] = (((((var_5 ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : var_8));
            var_19 = (min(var_19, var_1));
        }
        arr_31 [i_1] = ((!(arr_26 [i_1])));
        var_20 = (min(var_20, ((max(((((((arr_8 [i_1] [i_1]) + 4053868955)) - (arr_10 [i_1] [i_1] [4])))), ((((((arr_27 [22]) ? var_7 : (arr_18 [i_1] [i_1] [12])))) ? (arr_26 [12]) : (arr_11 [i_1] [8] [8] [i_1]))))))));
    }
    for (int i_8 = 4; i_8 < 19;i_8 += 1)
    {
        var_21 = (var_5 - var_9);
        arr_35 [1] = (min((arr_11 [i_8 - 1] [i_8] [i_8] [i_8]), ((max(-2081, (arr_7 [i_8] [i_8] [i_8 + 2]))))));
        var_22 = 0;
    }
    for (int i_9 = 3; i_9 < 13;i_9 += 1)
    {
        var_23 = (arr_36 [i_9 + 2]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                {
                    var_24 = var_3;
                    var_25 = ((max((2081 - 4169844517238114938), (~var_3))));
                }
            }
        }
        arr_43 [i_9] [i_9] = ((((((arr_18 [i_9] [i_9] [8]) ? var_9 : (arr_21 [i_9] [i_9 - 3])))) ? (arr_16 [0]) : (((arr_41 [i_9] [i_9]) ? 1239011340 : (arr_8 [i_9] [i_9])))));
    }
    var_26 -= var_4;
    var_27 = var_1;
    var_28 = (min(2098, (((2097151 ? var_2 : var_8)))));
    var_29 = (var_7 + var_8);
    #pragma endscop
}
