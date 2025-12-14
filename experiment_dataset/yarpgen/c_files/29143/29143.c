/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_6));
        var_11 ^= (((((((min(4294967295, -602382980)) < var_0)))) <= (max(var_10, (((var_0 ? 936289351 : (arr_1 [8]))))))));
        var_12 &= ((((min((~602383002), (1966082652 != 66)))) * -250));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 = (min(var_13, ((max(var_3, (((~(arr_3 [i_1])))))))));
        arr_7 [i_1] [i_1] = ((((((arr_5 [i_1] [i_1]) * 28046))) && ((min(var_4, (arr_6 [i_1] [i_1]))))));
        var_14 -= ((~((0 >> (81 - 53)))));
        var_15 = (max(var_15, (((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_3 [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {
                var_16 = (1821010259 ? ((((((9223372036854775807 ? 2538042625 : 3633955273)) == ((max(15208, 602383002))))))) : var_2);
                arr_13 [i_3] [i_3] = -4376032252445095016;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_4] [i_3] = (arr_8 [i_2]);
                            var_17 -= ((10 && (((((!(arr_9 [i_2]))) ? (min(var_9, 4)) : (((((arr_9 [0]) != (arr_12 [i_2]))))))))));
                        }
                    }
                }
                arr_19 [i_3] [i_3] [i_3] = ((~(arr_17 [i_3])));
            }
        }
    }
    #pragma endscop
}
