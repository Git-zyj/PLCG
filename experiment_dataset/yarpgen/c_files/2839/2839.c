/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (min(var_5, (max((((arr_0 [i_1]) ? var_8 : -2049131939)), (max(4294967295, var_5))))));
                var_12 *= (arr_4 [i_1]);
                arr_5 [i_0] [i_0] [i_0] = (min((((var_10 ? var_6 : -16))), (max(var_6, (-9223372036854775807 - 1)))));
            }
        }
    }
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [17] = -2420272243468330025;
                    var_14 = ((3999957060 | (arr_8 [i_4 - 2] [i_2 - 2])));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_15 = max(2420272243468330026, (((var_10 >> (7353834099571882484 % 1)))));
                        var_16 = var_8;
                        var_17 = (arr_13 [18] [18]);
                        arr_19 [i_5] [i_3] [i_2] = ((~((((((var_3 + 2147483647) << (((var_5 + 31941) - 6))))) ^ (arr_12 [i_2 - 1] [i_2 - 2] [i_2 + 1])))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_22 [i_6] [i_6] = (((arr_21 [i_6] [i_6] [i_6] [i_4 - 2]) ? ((var_4 ? 31 : 1)) : (arr_21 [i_6] [i_4 + 1] [i_6] [i_4 + 1])));
                        var_18 = ((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]) > (arr_11 [i_4] [18] [i_4] [i_4 - 1]));
                        var_19 |= var_5;
                    }
                    var_20 = (min(var_8, (((-(arr_20 [i_2] [i_3] [i_4 - 1] [12] [i_3] [i_2]))))));
                }
            }
        }
    }
    var_21 = ((1 ^ ((1 ? 1 : 2420272243468330021))));
    #pragma endscop
}
