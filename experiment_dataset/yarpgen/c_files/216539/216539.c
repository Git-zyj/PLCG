/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (!36610);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_1] = ((~((var_13 ? (arr_8 [i_0] [i_0] [i_2]) : -2008177697))));
                    var_15 |= var_9;
                    arr_11 [i_0] [i_0] [i_2] = 2040;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_1 - 3] [6] = (((((arr_4 [i_0] [i_0] [i_3]) ? ((2008177696 ? var_4 : (arr_2 [i_3]))) : ((((arr_9 [i_0]) ? 4292063823 : 1))))) & (((~(min(0, -118)))))));
                    var_16 = (arr_3 [i_3] [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [i_4] = (min(33554432, 65531));
                                var_17 = (max((((arr_16 [i_0] [i_1 - 3] [i_1 - 1] [i_5 - 1]) ? (((1370518981 ? 252 : 1))) : (min(2710837354009342456, 17370888060314983977)))), (((~(!var_6))))));
                                arr_20 [i_0] [i_0] [i_0] [0] [i_0] = ((((~(arr_4 [i_0] [i_0] [i_0]))) == (!0)));
                                var_18 = (min(var_18, (arr_4 [i_0] [i_1] [i_3])));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] [i_4] = (((arr_12 [i_5 - 1] [i_5 - 1] [13] [i_5 - 1]) == var_12));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_6] = (~var_2);
                    var_19 = (max(((((arr_1 [i_1 - 3]) ? var_1 : (arr_23 [i_0] [i_6])))), (((((max((arr_6 [i_0] [i_1 - 2] [i_0]), -98)))) - (min(-1102, (arr_2 [i_1])))))));
                    arr_25 [i_0] [i_0] [i_1] [i_6] = -107;
                    arr_26 [i_6] [1] [i_1] [i_0] = var_10;
                    var_20 = (min(var_20, (arr_16 [i_0] [i_1 - 3] [i_6] [1])));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_21 = (~125);
                        var_22 *= (((arr_16 [i_1] [i_1 + 1] [i_1 - 1] [i_1]) ? var_11 : var_7));
                        arr_33 [i_0] [i_0] [i_7] [i_8] |= ((2776074324232564440 ^ (arr_13 [i_1] [i_1] [i_1] [i_1 - 2])));
                    }
                    arr_34 [i_0] [i_1] [i_1] [i_7] = (max((((var_1 && (arr_27 [i_0] [10] [i_1 - 3])))), (arr_1 [i_1])));
                    var_23 = (min(var_23, (((((((arr_3 [i_0] [i_1]) & 59))) ? (((((arr_27 [i_0] [i_1] [i_1]) ? (arr_15 [i_0] [i_1] [i_1] [i_7]) : (arr_5 [i_0] [4] [i_7]))))) : 36610)))));
                    var_24 = (min(var_24, (arr_27 [i_7] [i_1] [i_0])));
                    var_25 = (min((((!(arr_3 [i_1 - 2] [i_1 - 2])))), ((((((arr_4 [i_0] [i_1] [i_1]) ? (arr_18 [9] [i_7] [i_0] [15] [i_7] [16]) : (arr_18 [i_0] [i_0] [i_0] [8] [i_1] [i_7])))) ? (arr_30 [i_1] [i_1] [i_0]) : 1))));
                }
                arr_35 [i_1] = (((min((arr_0 [i_0]), var_12))) ? ((max((arr_7 [i_0] [i_0] [i_0] [i_1 - 2]), var_7))) : 15670669749476987183);
                var_26 = ((((max(var_10, ((var_11 ? (arr_23 [i_0] [6]) : 3752932099))))) | (max(((8190 ? 8064 : (arr_27 [i_1 + 1] [i_1] [i_0]))), (arr_28 [i_0] [i_1 - 2] [i_0] [i_0])))));
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
