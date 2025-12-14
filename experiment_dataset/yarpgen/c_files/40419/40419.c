/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_8 ? var_11 : var_10))) ? var_0 : -var_8));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_13 = (min(((min((arr_7 [i_0] [i_1 + 1] [i_2]), (arr_7 [i_2] [i_1 - 1] [i_0])))), (((arr_7 [i_0] [i_1] [i_2]) ? var_9 : var_1))));
                        var_14 = ((!(((~(arr_5 [i_1 + 1] [i_1 + 1] [i_0 - 1]))))));
                        var_15 = (((((arr_7 [13] [i_0 - 1] [i_0 - 1]) * ((67100672 + (arr_9 [i_0] [i_0]))))) & 23313));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4] = (((16 | 51) ? (((arr_11 [i_0 - 1] [i_1 + 1] [i_4]) ? (arr_4 [i_1]) : (arr_11 [i_0 - 1] [i_1 + 3] [i_2]))) : (((min((arr_11 [i_1] [i_1] [i_1 - 1]), (arr_11 [i_4] [i_4] [i_1 - 1])))))));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = var_10;
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_16 [i_1] [i_1 - 1] [7] [i_1 - 1] = ((29720 && ((((min((arr_1 [i_0]), (arr_0 [9] [7]))) % (arr_11 [i_0] [i_0] [i_1 - 1]))))));
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_1] = ((-(((arr_2 [i_1 + 2]) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 3])))));
                    }
                    var_16 = ((185 ? 18446744073709551615 : 1159871399));
                }
            }
        }
    }
    var_17 = ((((((~var_9) + 2147483647)) << var_6)));
    var_18 = ((~(((255 >> 2) % 179))));
    var_19 = (max(2130706432, 7936));
    #pragma endscop
}
