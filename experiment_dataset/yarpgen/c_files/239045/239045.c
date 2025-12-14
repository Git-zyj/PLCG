/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [2] [i_3] [i_4] [i_4] = var_10;
                                arr_17 [13] [i_1 - 3] [i_2] [i_4] = ((22258331 / (min(22258331, var_4))));
                                arr_18 [i_0] [i_1 - 2] [2] [i_3] [i_0] [i_0] = 1070163791;
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_3] = ((((((var_4 + 9223372036854775807) >> (var_12 - 69)))) || (arr_14 [i_4] [i_3] [1] [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_0] = (((((12964 ? 18446744073709551615 : -3037807248827615516))) + ((((max(4272708953, var_13))) ? (var_7 / var_2) : ((min(0, 2147483647)))))));
                arr_21 [i_0] [i_1 + 1] = ((max((min(0, 39309)), ((((-822476173 + 2147483647) >> (var_9 - 1082658803)))))) & var_15);
                arr_22 [3] [3] = var_15;
            }
        }
    }
    #pragma endscop
}
