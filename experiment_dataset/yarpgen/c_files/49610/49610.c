/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max(((max(81, 4196890122068752921))), (min(30, var_7)))), (min((max(var_10, 21326)), ((var_16 ? 7 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 ^= ((+((-1523890159 ? (((32767 << (((var_9 + 33) - 12))))) : -1154414788426082370))));
                arr_6 [i_0 + 1] [i_0] [i_0] = (((max((((arr_2 [i_0 - 2]) ^ 65408)), ((var_14 ? (arr_2 [i_0]) : 1455144673)))) - (arr_3 [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_22 = (((arr_13 [i_2 - 2] [i_2 - 2] [i_2 + 1]) - (((var_14 != (!-1932788348))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_23 = 245;
                                var_24 = (((arr_7 [i_2]) != (arr_9 [i_4])));
                            }
                        }
                    }
                    var_25 = ((((((arr_7 [i_2 - 2]) - var_2))) ? (((arr_15 [i_2 + 1] [i_2 - 2]) ? (-1523890159 & 898300561) : -9223372036854775805)) : (((+(((-472831435 + 2147483647) << (((arr_10 [i_2] [i_2] [i_4]) - 42658)))))))));
                    var_26 = (((max(4294967295, (((11862768796332707472 ? -2147483647 : var_11))))) <= ((min(var_11, ((~(arr_15 [i_2] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
