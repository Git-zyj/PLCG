/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 *= 65508;
                    arr_6 [3] [6] [1] [i_0] = (min(18446744073709551615, (((((min(var_1, (-9223372036854775807 - 1)))) && (!67106816))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [2] [i_0] [i_1] [i_0] [i_0] = ((var_10 & (-32767 - 1)));
                        arr_10 [i_0] [i_3] [i_2 - 1] [i_1] [i_0] = (((((((-17 + (arr_7 [11] [i_1] [i_2 + 1] [i_3])))) ? (arr_8 [i_3] [i_2] [13] [i_1] [i_1] [i_0]) : 18446744073709551615)) * (!var_15)));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_18 |= 5;
                            var_19 *= ((((var_12 / (arr_0 [i_3]))) == ((max(65535, (arr_0 [i_1]))))));
                        }
                        var_20 = ((~(((arr_14 [2] [i_0] [i_2 - 1] [6] [i_2]) + ((67106816 ? 17293822569102704640 : 0))))));
                        arr_15 [6] [3] [i_0] [i_3] = (~((((2249600790429696 & (arr_1 [7] [i_0]))) & (max(var_6, var_3)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
