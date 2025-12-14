/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 18446744073709551609;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = min(((min(16519937691831140075, var_14))), (max((arr_9 [i_0] [i_0] [i_2] [i_2] [i_2] [i_4] [i_4 + 1]), 5730771531053713133)));
                                arr_11 [i_0] [i_3] [4] [i_1] [i_0] = (min((arr_6 [i_0] [i_0] [i_0 + 1] [i_1]), 133));
                                arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = ((!((((!(arr_1 [12] [i_1]))) && ((var_8 && (arr_8 [i_0] [i_0] [i_1] [i_2] [14] [i_0])))))));
                                arr_13 [i_0] [i_0] [i_0] [i_4] = ((!((var_2 || (((var_6 ? 11831573724567617164 : 55633)))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = var_4;
                arr_15 [i_0] [i_0] = (((((var_5 + (arr_0 [i_0] [i_1]))) ? (((max(2, 185)))) : ((var_13 ? (arr_9 [i_0] [i_0 + 2] [13] [i_0] [i_1] [i_1] [i_1]) : 13)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            {
                arr_23 [i_6] = ((~((((max(138, 2))) ? 4648076478074561556 : (((24 ? 2 : 88)))))));
                var_17 = var_8;
            }
        }
    }
    #pragma endscop
}
