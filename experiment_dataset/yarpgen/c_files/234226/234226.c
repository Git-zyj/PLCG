/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_13 - var_19) - (var_12 - var_4))) >= (((15516 + var_16) - (9223372036854775807 - var_17)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 |= (((((var_0 ^ -18334) ^ (10 | 0))) >> ((((((arr_6 [i_1] [1]) << (var_11 + 2023464014371687761))) >= ((50021 / (arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = (((((((var_0 + 2147483647) << (3546496181 - 3546496181))) << (var_13 & var_17))) * ((((15504 > var_6) >= (var_14 != var_2))))));
                                var_23 = (max(var_23, (((((((((arr_8 [i_0 + 1] [1] [i_3] [1]) | (arr_3 [i_1]))) <= ((((arr_0 [i_0 - 1]) != (arr_4 [i_0] [i_1] [i_2]))))))) ^ (((50019 & var_5) >> ((((var_8 << (((arr_1 [1]) + 22873)))) - 51430)))))))));
                                var_24 += (((((((15506 + (arr_5 [i_0]))) / (((var_16 + (arr_1 [i_0 - 1]))))))) + (((((64683 + (arr_0 [i_4])))) - ((1 - (arr_9 [9] [1] [i_2] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((((3546496181 > var_1) >= (50029 || 15502))))) - (((var_4 & 3546496181) | (var_15 & -1)))));
    #pragma endscop
}
