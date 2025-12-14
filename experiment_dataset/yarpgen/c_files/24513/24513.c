/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_10;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((-(max(52006, (((arr_0 [i_0]) ? 7787611174726875877 : -1294594560))))));
        var_21 = ((((arr_2 [i_0] [i_0 + 3]) % (arr_2 [i_0] [i_0 + 1]))));
        var_22 = min((arr_2 [i_0] [i_0]), (((arr_1 [i_0 + 1] [i_0]) ? var_4 : (arr_2 [i_0 - 1] [i_0 + 1]))));
        var_23 += (!(((((~(arr_0 [i_0]))) / 52006))));
        var_24 *= var_16;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_25 = ((((8055679550459306472 - (arr_8 [i_3 - 3] [i_1 - 1]))) - (arr_8 [i_3 - 3] [i_1 - 1])));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((((max(var_14, (arr_10 [i_3] [i_2] [i_3] [i_4]))))) ^ (((arr_7 [i_1 + 1] [i_3 + 1]) & (arr_7 [i_1 + 1] [i_3 + 1]))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_26 = ((((arr_15 [i_1] [i_5] [i_3] [i_4] [i_5]) ? (((max(3, var_16)))) : 8055679550459306472)) < 219231340);
                            var_27 -= (arr_5 [i_3 - 4]);
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_28 = ((min(10391064523250245144, 4401763045991815473)) ^ (arr_18 [i_1] [i_6]));
                        var_29 -= ((~((10986 ? var_4 : -947361990))));
                        var_30 = ((arr_12 [i_1] [i_1 - 1] [i_1 - 2]) * ((~(arr_12 [i_1] [i_1 - 1] [i_1 - 1]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
