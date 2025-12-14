/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] &= (arr_3 [i_0] [i_0]);
            arr_8 [i_1] = ((((min(1, (((arr_4 [i_0]) ? 6940245941340514463 : 1025022414))))) ? 28023 : (arr_2 [i_0 + 1] [i_0 - 1])));
            arr_9 [i_1] [i_1] [i_0] = 1025022401;
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_13 &= (min(-1027609248, ((((((arr_3 [i_0 + 1] [2]) >> (-1025022414 + 1025022436)))) ? var_2 : 0))));
            var_14 *= 2926286852;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    arr_19 [i_3] = (arr_12 [i_4 - 1] [i_4 - 1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_15 -= min((((((min(-1025022422, -1025022390))) && 141))), (((arr_4 [i_0 - 1]) ? (453113485 && 0) : 245)));
                                arr_25 [i_0] [i_3] [i_4] [i_3] [i_6] = ((!((min((arr_24 [i_3] [2] [i_4] [i_4 - 1] [i_3]), (arr_12 [i_4] [i_4 + 1] [i_3]))))));
                                var_16 = (max(var_16, (((((243 >= ((var_3 ? 249 : var_6)))) ? -1 : (((min((arr_3 [i_0 + 1] [i_0 + 1]), 1)) % (((-51 ? -26538 : 1025022405))))))))));
                                arr_26 [i_0] [i_3] [i_3] = (((((((min((arr_17 [5] [i_3]), (arr_5 [i_6] [i_4])))) ? -64 : 3018033550))) ? ((min(-99, (min((arr_5 [i_4] [i_6]), 111))))) : (min(2147483647, ((min(-103, 51)))))));
                                arr_27 [i_6] [i_3] [i_3] [i_0 - 1] = 2435967288;
                            }
                        }
                    }
                }
            }
        }
        var_17 *= (((105 || ((min(1, var_9))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    arr_33 [i_0 - 1] [10] [6] = ((min(0, 1)));
                    var_18 ^= (min(((((((arr_5 [i_0] [2]) ? 29971 : 1252))) ? (((min(6, var_1)))) : (min(var_5, 4270102556)))), ((-103 + (2 / 7)))));
                }
            }
        }
    }
    var_19 = var_11;
    #pragma endscop
}
