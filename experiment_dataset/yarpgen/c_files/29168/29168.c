/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((73 ? (~var_17) : (~12)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = var_13;
        var_22 += (((((1 ? -73 : 0))) ? ((min((arr_0 [i_0] [i_0]), -117))) : ((min(0, 0)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = 1;
            var_23 = 1;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_24 = (((!var_12) >> 0));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_25 -= (~var_5);
                var_26 = (((arr_8 [i_2] [i_3]) ? 1 : 48));
                var_27 -= ((((((arr_7 [i_3] [0] [i_3]) * (!1)))) ? (!0) : (((arr_7 [i_0] [i_0] [i_0]) ? var_19 : (!1)))));
                var_28 ^= var_13;
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_2] [1] [1] [i_5] = var_13;
                            var_29 = (((((0 ? -109 : (!var_6)))) ? ((((max((arr_2 [i_0] [i_0]), var_1))) >> (127 - 96))) : (min((arr_20 [i_0] [i_0] [i_5] [i_4] [i_5] [i_6]), ((0 ? (arr_8 [i_0] [i_0]) : var_15))))));
                            var_30 ^= (((((1 ? 1 : (54 - 1)))) ? (((54 >> 1) >> ((1 ? 1 : 87)))) : (((!(((-(arr_19 [i_5] [i_2])))))))));
                        }
                    }
                }
                var_31 = (max(var_31, ((max((min((1 >> 1), 25)), ((0 ? 0 : var_10)))))));
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_24 [1] [i_7] = 52;
            var_32 *= var_15;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_33 -= (((0 ? (arr_15 [1] [i_0] [i_8] [i_8]) : (arr_15 [i_8] [i_8] [i_0] [i_0]))));
            arr_28 [i_0] [i_0] [i_8] = (min((((((arr_27 [i_0] [i_8]) ? -122 : var_1)) - (~-87))), ((-0 * (arr_12 [i_0])))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_34 ^= arr_18 [1] [i_9] [i_8] [i_8] [1];
                        var_35 = (min((1 * 1), ((~((min(101, var_9)))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    {
                        var_36 -= ((-((min(0, (min(var_2, (arr_38 [i_0] [i_11] [i_12]))))))));
                        var_37 *= (min((max((((arr_35 [i_11] [i_11] [i_11] [i_11]) ? var_8 : -50)), ((19 ? 1 : var_18)))), ((max(1, 127)))));
                    }
                }
            }
        }
        var_38 = -59;
    }
    var_39 = (((max(1, var_8))));
    #pragma endscop
}
