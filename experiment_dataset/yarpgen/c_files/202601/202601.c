/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = ((((var_7 ? (arr_0 [i_0 - 1]) : (arr_2 [i_0]))) % 1));
                var_11 = (((var_4 <= var_8) ? ((max((max((arr_4 [i_0] [i_0]), (arr_0 [i_0]))), var_0))) : (max(-2947008011033843063, 0))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 += max(115, (max((arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 2]), -6233094395788611300)));
                                var_13 += ((max(((var_2 ? 2147483648 : var_1), (arr_11 [i_0] [14] [i_2] [10] [i_4])))));
                            }
                        }
                    }
                }
                var_14 = 14782816163544689884;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                arr_20 [i_5] = (((var_3 ? (-16 <= 4294967292) : ((min(104, -67))))));
                arr_21 [i_6 + 1] = ((((min(var_9, var_5))) >> (((arr_1 [12] [12]) / 9936272755685806570))));

                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        var_15 += (((-(66 || var_4))));
                        var_16 |= ((max(var_9, 15499736062675708552)));
                        arr_27 [i_5 - 4] [i_6] [i_7 + 1] [i_8] [i_7] [i_8] = (arr_18 [i_5] [i_5]);
                    }
                    var_17 += (((((arr_3 [i_5 - 2] [1] [i_7]) <= (arr_10 [i_7] [i_6 + 1] [i_5 - 2]))) ? ((max(0, var_7))) : (max(8510471318023745046, 9223372036854775807))));
                }
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_34 [i_5 + 1] [i_5] [i_5] [i_5] = ((~(max(((0 ? 2147483642 : var_3)), var_4))));
                            var_18 = (max(var_18, (max((arr_9 [18]), (max((arr_9 [8]), (arr_9 [2])))))));
                            var_19 += ((((min(2147483653, ((min(var_1, var_9)))))) ? -7710483836885155571 : (arr_24 [3] [i_9 + 1] [i_9 + 2] [i_5])));
                            var_20 = var_4;
                        }
                    }
                }
            }
        }
    }
    var_21 = (((((min(var_7, var_9))) * ((var_9 >> (8510471318023745045 - 8510471318023745037))))));
    var_22 *= (((((-(max(var_3, (-2147483647 - 1)))))) ? var_1 : ((((var_3 ? var_9 : -21)) >> (var_5 - 1981221456)))));
    #pragma endscop
}
