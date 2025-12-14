/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(((((max(3452931217469644140, var_8))) ? var_17 : ((var_15 ? var_7 : var_12)))), ((((var_2 ? var_9 : var_8)))))))));
    var_19 *= ((((!((min(25, -839480817647332440))))) ? var_15 : (((((max(var_12, var_6))) / (var_3 < 23))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? ((min(65533, var_6))) : ((((arr_0 [i_0] [i_0]) <= var_13))))))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_21 = (max(var_21, (((((arr_0 [i_1 - 1] [i_1]) != (arr_0 [i_1 + 1] [7])))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_22 *= (((((141 ? var_10 : -3452931217469644140))) + (((((arr_1 [i_2]) / var_5)) - -0))));
                        var_23 = (min(var_23, ((max((((-14789 ? (arr_8 [i_1 + 2] [i_1 - 2]) : (arr_8 [i_1 - 2] [i_1 + 2])))), (min(235, -3452931217469644135)))))));
                    }
                }
            }
            var_24 = var_5;
            var_25 |= (((((min(18794, -3452931217469644152))) && var_15)) || (((8 || 1) && 8388607)));
            var_26 = (min(var_26, (~var_13)));
        }
        arr_9 [8] [i_0] = (min(((((((1 >= (arr_2 [i_0])))) == 1))), ((var_4 ? ((((!(arr_8 [i_0] [i_0]))))) : (~var_5)))));
        var_27 = (((var_15 ? (arr_0 [3] [i_0]) : (arr_0 [i_0] [1]))) % (((4107089176575010369 ? 4286578689 : 0))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4] = (((((arr_4 [i_4]) ? (arr_4 [i_4]) : (arr_4 [i_4])))) && ((((arr_4 [i_4]) ? var_7 : (arr_4 [i_4])))));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_17 [i_4] = ((!((((max(var_6, (arr_12 [10] [i_4]))) / ((8558665425978372564 << (((-32016 + 32045) - 29)))))))));
            var_28 *= (((((1 < 905417775122434923) ? ((((arr_8 [i_4] [i_5]) || 22))) : (min(var_13, 224)))) - (((arr_6 [i_5] [i_4]) << (((arr_1 [i_4]) + 101))))));
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_29 = (((!17541326298587116696) ? 0 : -28347));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [i_8] [i_8] = var_9;
                        var_30 -= ((~(!1)));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_31 = (min(var_31, var_5));
            var_32 *= (max((min(-2097152, (max(0, 4286578717)))), ((min((arr_26 [i_10]), (arr_23 [i_6] [i_10]))))));
        }
        var_33 = (min((min(((var_7 >> (((arr_21 [i_6] [i_6]) - 153)))), (arr_15 [i_6]))), (-1255532071 || var_6)));
    }
    #pragma endscop
}
