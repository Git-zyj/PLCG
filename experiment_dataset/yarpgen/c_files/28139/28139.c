/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_14 = -1;
                        var_15 = (min((30029371 / 18323447600890706671), 18323447600890706681));
                        var_16 = var_6;
                        var_17 ^= max((max((arr_4 [i_1]), (~123296472818844956))), (~var_8));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        var_18 ^= ((354873867073001527 ^ (arr_1 [i_4] [i_4])));
                        var_19 = 104;
                        var_20 = var_3;
                    }
                    arr_11 [i_0] [i_2] [i_2] [i_0] = ((+((((min((arr_2 [i_0]), var_4))) ? (~var_5) : ((((arr_8 [i_0] [i_1] [i_2]) ? var_4 : (arr_2 [i_0]))))))));
                    var_21 = ((24062 ? 1 : 3));
                    var_22 = (max(var_22, (((((123296472818844945 * (((var_9 ? (arr_0 [i_1]) : 1))))) <= ((var_4 + (min(18446744073709551605, 6342799614821649619)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_23 = ((!(((var_6 ? 1 : ((max(var_6, var_8))))))));
                                var_24 = (arr_7 [i_0 - 1] [i_0] [i_0] [i_2] [i_0] [i_0]);
                                var_25 += 8507444236239451560;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
