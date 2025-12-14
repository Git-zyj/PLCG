/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((var_11 || (((var_8 ? (var_14 < 4288733201) : var_11)))));
    var_16 += 4080;
    var_17 ^= 61451;
    var_18 = ((61487 ? var_6 : 4080));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 ^= (min((min((arr_2 [i_0]), var_3)), (((-((-(arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = (arr_5 [i_0] [i_1]);
                                var_21 += (max((((((arr_2 [i_0]) ? (arr_6 [i_0] [9]) : var_0)) - 4096)), ((((61439 ? 61456 : (arr_5 [i_0] [i_0]))) | ((max(var_14, 61447)))))));
                                var_22 += (((arr_7 [6] [i_1 - 1] [i_2]) >> ((((max(4080, 61439))) - 61437))));
                                var_23 = ((!(!4088)));
                            }
                        }
                    }
                }
                var_24 = (((arr_4 [i_0 + 1] [i_1 - 1]) / ((61461 * (arr_4 [i_0 + 2] [i_1 + 2])))));
                arr_14 [i_0 + 1] [i_1] = (((((arr_12 [1]) % (arr_12 [4]))) > (((61437 ? 4106 : 4089)))));
            }
        }
    }
    #pragma endscop
}
