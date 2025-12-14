/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!var_11) >> ((((~591206308) || ((min(573411006, var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((~(((arr_1 [i_0] [i_1]) ? 1023040372 : (arr_1 [i_1] [i_0]))))));
                var_17 = (!var_3);
                var_18 = (max(573411006, 189));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 ^= (((((2150104054976420669 ? 2601881541 : 1567387253))) & var_11));
                            var_20 = ((-((max((arr_8 [2]), -1)))));
                            var_21 ^= 16296640018733130932;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_22 &= (min(-5852, (((-2 / 1180173796) ? (max(0, (-9223372036854775807 - 1))) : var_12))));
                            var_23 = ((((var_11 ? 0 : (min(-1180173796, var_0)))) ^ (arr_8 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_24 = (((~-26508) | ((~((-1 ? 16160887159400623768 : -17712))))));
    #pragma endscop
}
