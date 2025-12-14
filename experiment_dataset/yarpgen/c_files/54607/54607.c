/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = min(var_10, (arr_2 [i_0]));
                        var_11 = (((min(((var_8 % (arr_4 [i_0] [i_1] [i_2]))), (arr_9 [i_1]))) << (4588298213860561519 - 4588298213860561500)));
                        var_12 = (i_1 % 2 == zero) ? (min(((var_7 << (((((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 + 1]) + 1214367044)) - 4)))), ((((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 - 1]) ^ var_8))))) : (min(((var_7 << (((((((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 + 1]) + 1214367044)) - 4)) - 1095492193)))), ((((arr_11 [i_0 - 1] [i_1] [i_0 + 1] [i_0 - 1]) ^ var_8)))));
                    }
                }
            }
        }
        arr_14 [i_0] = (max((arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]), var_0));
        var_13 = (min(var_13, var_2));
        var_14 = (min(17061765706101401771, (arr_12 [i_0] [i_0] [i_0 - 1] [12] [i_0])));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_15 *= ((((((((max(var_6, var_0))) > var_3)))) <= ((18127748210189338416 << (((arr_5 [i_4 + 1] [8]) - 125465199))))));
        var_16 ^= ((var_6 + (((((arr_7 [i_4] [i_4 + 1] [i_4 + 1]) + (arr_15 [8] [i_4]))) + (min(763754927210523290, (arr_5 [i_4 + 1] [i_4 + 1])))))));
    }
    var_17 = (min(var_17, (((~var_10) ? (min((min(var_4, var_3)), var_9)) : (max(((min(var_7, -6))), (max(var_7, var_9))))))));
    var_18 = (max(var_1, (var_9 / 4893939003723084851)));
    #pragma endscop
}
