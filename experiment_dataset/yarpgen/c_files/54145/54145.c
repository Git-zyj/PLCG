/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(127, ((var_6 ? (max(var_11, 2322448155019604033)) : (~1556511550))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [22] = ((((((120 && (arr_0 [i_0] [i_0]))))) > ((min((arr_0 [16] [i_1]), var_2)))));
                arr_5 [i_0] [16] = ((min(((((arr_0 [i_0] [i_1]) || 18446744073709551596))), (min(-1735370069, 16)))));
                var_17 -= min((((((((arr_2 [i_0] [i_1 - 3]) < (arr_0 [i_0] [i_0])))) == (((arr_0 [i_0] [i_1]) ? var_13 : 140))))), (((~125) ? ((0 ? 473689740 : var_11)) : ((((arr_1 [i_0] [i_1]) ? 3 : (arr_3 [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 -= -64;
                                var_19 = (arr_16 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_6 + 3]);
                            }
                        }
                    }
                    arr_21 [i_2] [11] [22] [i_2] = (max((max((((arr_16 [i_2] [i_2] [i_3 + 2] [i_4]) ? var_10 : 11497776918655514764)), ((min((arr_10 [i_2]), 1539477845))))), ((((((-118 ? 9205357638345293824 : (arr_11 [i_3] [17])))) && ((((arr_18 [i_2] [i_2] [i_3 - 1] [i_4] [5]) ^ (arr_15 [i_2] [i_2] [i_3 - 1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 -= var_13;
                                arr_27 [18] [i_7] [i_4] [i_4] [i_4] [i_4] [i_4] = 1138901193;
                                var_21 = (min(var_21, (38 >= 85)));
                                arr_28 [i_7] [i_8] [i_8] [i_8] [i_8] [1] = (((((max(4294967292, 63)) > (((-99 ? (arr_11 [i_4] [i_3 - 1]) : (arr_12 [23] [13])))))) && (arr_15 [i_3 - 1] [i_8] [i_8] [18])));
                            }
                        }
                    }
                    var_22 -= (((arr_25 [i_2] [6] [i_3 + 2] [22]) ? (~var_2) : -120));
                }
            }
        }
    }
    var_23 = var_6;
    var_24 &= (((--5) ? var_13 : -47));
    #pragma endscop
}
