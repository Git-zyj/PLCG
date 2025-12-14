/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max((max(20, 20960)), (-20961 >= 201828435))) & ((((((max(var_10, var_15))) >= ((max(var_5, var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [9] = (max((min(((var_5 / (arr_6 [i_0]))), (((var_2 / (arr_2 [i_0] [i_0])))))), ((max((((arr_0 [i_0]) + var_15)), ((max(36532, var_10))))))));
                var_17 = (((((4093138861 + (max(55521, 4093138855))))) == (min((((arr_6 [12]) << (((arr_3 [i_0]) - 2811475072)))), (201828409 > 65516)))));
                var_18 = (max(((((min(65524, 1114064175)) ^ ((((var_9 == (arr_3 [5])))))))), (max((max(4294967289, 4611677222334365696)), (((arr_6 [10]) * var_7))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [13] [13] [13] [i_3] = (((20949 != 13223) > (((((max(27063, 251)))) * (min(0, 9223372036854775807))))));
                            var_19 -= (((16 <= 65535) * ((((max(-1, 63106))) % (94 != var_6)))));
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (max(11697832640910216393, ((max((69 ^ 13), ((2147483647 << (2 - 2))))))));
            }
        }
    }
    #pragma endscop
}
