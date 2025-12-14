/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    var_21 = (min(var_21, (2423145398 ^ 12915)));
    var_22 &= max((((2409283279 ? 12918 : 2151594986))), 2576532234);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_23 |= ((-12901 || (-9223372036854775807 - 1)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_24 = -2305843009213693952;
                            var_25 += -32756;
                            var_26 = ((((max(238794798, 2305843009213693952))) ? (max((arr_2 [12]), (arr_5 [i_0] [i_0]))) : (arr_2 [i_0])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_27 = (min(var_27, (((!(-9223372036854775807 - 1))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_22 [i_8] [i_5] [i_6] [i_5] = ((!(((1871821894 % (arr_10 [i_7]))))));
                                var_28 += (max(-var_9, (max((max(-4956267187377990516, -12904)), var_0))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
