/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((-7107 ? (max(18446744073709551615, var_6)) : 154))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(((((-(arr_0 [i_0]))))), (((arr_0 [i_0]) ? ((1197237628 ? 3097729658 : 3097729668)) : (((arr_2 [i_1]) ? (arr_3 [i_0] [i_1] [i_0]) : var_10))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = (var_10 ? (arr_8 [i_1] [i_3] [i_2 - 1]) : (arr_8 [i_0] [i_3] [i_2 - 1]));
                            var_18 = (min(var_18, (((!((max(((((arr_0 [7]) < 3097729679))), (arr_1 [i_0])))))))));
                        }
                    }
                }
                arr_9 [i_0] [i_1] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_19 = (((arr_13 [i_4] [i_5] [i_5]) ? ((13997 ? (arr_13 [i_5] [i_5] [i_4]) : 2660251700)) : (((arr_13 [i_4] [i_4] [i_5]) ? (arr_13 [i_4] [i_5] [i_5]) : (arr_13 [i_5] [i_5] [i_5])))));
                var_20 = (((~(((1634715595 != (arr_13 [i_4] [i_4] [i_5])))))));
                var_21 = (max(var_21, ((((((arr_10 [i_5]) == 1197237628)) ? ((1197237628 ? 3097729667 : (arr_13 [i_4] [i_5] [i_4]))) : (((286512350 ? (arr_12 [i_4] [i_4]) : (arr_11 [i_4] [i_4])))))))));
            }
        }
    }
    var_22 = 34;
    var_23 = var_7;
    #pragma endscop
}
