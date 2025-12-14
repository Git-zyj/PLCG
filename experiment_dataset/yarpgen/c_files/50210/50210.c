/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min((max(var_0, var_0)), -0)), (((1206 ? 9527 : 47)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((arr_1 [i_0]) ? (((3458880669321830061 ? 41 : 9527))) : ((6 ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_20 = (min(var_20, var_13));
        var_21 = (max(var_21, var_7));
        var_22 = 124;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (arr_4 [i_1] [10])));
        var_24 = (max((max((var_12 + var_9), (arr_5 [i_1] [i_1]))), ((((((arr_5 [13] [i_1]) / (arr_4 [i_1] [i_1]))) != (2579129420037096324 < 31744))))));
        var_25 = (min(((((((9223372036854775807 ? 1738794657 : var_15))) ? (arr_4 [i_1] [i_1]) : var_14))), (min((var_7 | 0), (arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_26 -= ((-((min((arr_6 [i_3]), var_1)))));
            var_27 = (((((min(var_16, (arr_9 [i_2] [i_3]))) + 9223372036854775807)) >> (((((arr_9 [i_2] [i_3]) | -1)) + 33))));
            var_28 += var_5;
            var_29 = (max(var_29, ((((1 && 4294967295) <= (((arr_5 [i_2] [4]) ? var_6 : 1)))))));
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
        {
            arr_14 [i_4] = (((min(6622382862028926983, (arr_12 [i_4]))) >= (arr_5 [i_2] [i_4])));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_30 ^= (max(4294967295, ((184 ? 7 : 0))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_31 = (max(var_31, (arr_12 [i_7])));
                            arr_22 [1] [i_4] [i_5] [7] [i_2] [i_6] [i_2] = ((-((((arr_9 [i_2] [i_4]) && -1325308499070539572)))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_32 = (max(var_32, (max(((((arr_10 [2] [i_8 + 1] [i_9]) > var_8))), (((((29 ? 56009 : 2907327030))) ? (min(var_2, var_16)) : (arr_18 [i_10] [i_8 + 1])))))));

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_33 [i_2] [i_2] [i_9] [i_10] [i_2] = (((((max(36384, (arr_31 [i_8]))))) ? ((+(((-9223372036854775807 - 1) + 33554431)))) : ((((arr_7 [i_8 + 1]) ? var_17 : (arr_7 [i_8 + 1]))))));
                            var_33 = (min((((3127332400 && (arr_10 [i_8 + 1] [0] [i_8])))), (arr_29 [2] [i_8] [1] [1])));
                        }
                    }
                }
            }
            var_34 = (min(var_34, (arr_25 [i_2] [1] [i_2] [6])));
            var_35 -= ((var_2 - (((((-3958134937780015636 + 576460735123554304) >= (((var_8 ? 3696979325 : 1)))))))));
        }
        var_36 -= (((((max(var_14, ((!(arr_25 [i_2] [i_2] [i_2] [i_2]))))))) != var_2));
        var_37 = (max(var_37, ((((min((((1 ? 193 : var_8))), var_5)) == (arr_32 [i_2] [i_2] [i_2] [i_2]))))));
    }
    var_38 = (max(var_38, (((var_9 <= ((min(var_7, var_2))))))));
    var_39 *= (max(var_7, var_16));
    #pragma endscop
}
