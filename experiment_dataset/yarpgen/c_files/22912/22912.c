/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] = var_2;
                        var_11 ^= ((((var_3 & (max(255, 9223372036854775795)))) | (~-9223372036854775795)));
                        var_12 ^= (((58656 ? -9223372036854775795 : 65535)));
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [17] [i_0] = (min(((min(((var_0 ? (arr_16 [i_0 + 1] [0] [i_2 + 3] [i_4 + 1] [i_0 + 1] [i_2 + 1]) : -365871489)), ((87 ? var_0 : var_10))))), (arr_12 [11])));

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_20 [i_5] [i_0] [i_2] [i_0] [i_0 + 1] = max((max(-274743689216, (arr_19 [i_2 + 2] [i_2 + 1] [i_2 + 2]))), (((((arr_6 [i_0] [i_2 + 2]) ? 65518 : (arr_14 [i_4 + 1]))))));
                            arr_21 [i_5] [i_5] [i_0] [i_4] [i_5] [i_2] [i_0 - 1] = var_3;
                        }
                        var_13 -= (((arr_1 [i_0 + 1]) && 9180839774005051987));
                        var_14 = ((((max((arr_14 [i_0 - 1]), ((var_8 ? (arr_0 [i_4] [i_0 + 1]) : (arr_8 [i_1])))))) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (82 != 9180839774005051987)));
                        var_15 = (max(var_7, (((((65535 ? 65508 : -9223372036854775781))) ? 255 : 1))));
                    }
                    var_16 = (max(var_16, (((+((169 ? (((min((arr_3 [i_1] [i_1] [i_1]), var_5)))) : (~3708464305))))))));
                    var_17 ^= (arr_14 [i_0]);
                }
            }
        }
    }
    var_18 = var_10;
    var_19 = ((var_9 ? var_9 : ((9223372036854775795 | ((var_9 ? var_7 : var_8))))));
    #pragma endscop
}
