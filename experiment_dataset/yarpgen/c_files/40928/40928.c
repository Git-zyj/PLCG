/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [12] [i_1] = (~var_0);
                var_11 -= var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [1] [i_0] [i_2] [i_3] = 2826261003;
                            arr_14 [i_2] = (max(2826261003, ((((var_2 ? 0 : 4294967295)) >> var_1))));
                        }
                    }
                }
                var_12 = (max(var_12, ((((((var_0 / (arr_4 [i_0] [i_1])))) ? 79 : (var_9 / 1468706292))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_4] [i_4] = var_2;

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_24 [i_4] [i_5] [i_6] = ((~((~(arr_1 [i_4])))));
                    var_13 &= -8368891058403248606;
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_14 = ((((max(((max(var_8, (arr_3 [1] [1] [i_4])))), (((-73 + 2147483647) >> 13))))) ? ((((max((arr_12 [1] [1] [1] [1] [i_7] [i_7]), var_7))) ? -8368891058403248606 : (arr_26 [i_5] [i_4]))) : (((var_6 ? (arr_4 [i_4] [i_5]) : var_3)))));
                    var_15 = -var_6;
                    var_16 = var_7;
                    var_17 *= (-8368891058403248606 ? (max(1468706293, -107)) : 2225555747);
                    arr_28 [i_4] [i_4] [i_4] [i_4] = (max((max((((arr_15 [i_4]) / var_4)), -22)), var_9));
                }
            }
        }
    }
    var_18 = (!var_6);
    #pragma endscop
}
