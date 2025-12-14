/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_12 += ((((min((30489 <= 1), (1 - 6921853242489740310)))) ? -65529 : 5614481475489093596));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (min(var_13, (((((arr_3 [i_0]) == (arr_7 [i_0] [i_1] [i_2] [i_3] [i_2]))) ? (((arr_6 [i_0] [i_1] [i_2] [i_1]) ? 1 : 1355787571)) : -1))));
                        var_14 = (arr_6 [i_0] [i_1] [i_2] [i_2]);
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_4] [i_4] = ((~(arr_2 [i_0] [i_0])));
                        arr_12 [i_0] [23] [i_1 - 1] [1] [i_4] [i_1 - 1] = 217;
                    }
                    arr_13 [i_0] [1] [i_2] [i_0] |= (((arr_5 [i_1 - 1] [i_2]) ? (arr_5 [1] [i_1 + 1]) : (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_15 = (min(var_15, (arr_7 [i_0] [i_1] [7] [i_2] [i_2])));
                    arr_14 [i_0] [i_1] = (arr_10 [i_1] [i_1] [i_1] [i_1 + 1]);
                }
                /* vectorizable */
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    var_16 ^= (((((65511 >> (-86 + 109)))) ? (!1) : (((-9223372036854775807 - 1) + 7739310583495715746))));
                    arr_19 [i_5] [i_1] [i_0] = (~65535);
                    var_17 += (((arr_17 [i_0] [i_0] [1]) ? ((37246 ? 496 : 20)) : (arr_10 [i_0] [i_1 - 1] [i_1] [i_0])));
                    var_18 = (max(var_18, -1));
                }
                var_19 = (max(var_19, (((-31764 & (min((1 | 35184372088831), (((arr_15 [i_0] [i_1]) ? 13192157817821949250 : 9)))))))));
            }
        }
    }
    var_20 = ((((min(var_4, -1))) != (((min(var_9, var_7)) - (((var_4 ? 249 : var_6)))))));
    #pragma endscop
}
