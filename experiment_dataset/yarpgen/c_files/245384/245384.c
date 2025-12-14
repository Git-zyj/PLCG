/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = (max(var_16, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = var_4;
                    var_17 = (((((var_2 || var_8) || ((max(var_10, var_3))))) ? (((!(32767 && 32785)))) : (!var_12)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_18 = ((((-32780 ? ((min((arr_9 [i_3]), var_9))) : (((arr_14 [i_7 - 1] [1] [i_3]) * 32768)))) | (0 % 584263860)));
                                arr_20 [i_3] = var_6;
                                arr_21 [9] [i_3] [i_5] [i_6] [i_6] [i_4] [1] = var_6;
                                var_19 = ((((~(32768 | 32767)))) | ((~(-230978233 ^ 6341296258307711367))));
                            }
                        }
                    }
                    var_20 = ((((((max(var_14, var_9)) % 32768))) ? (((var_10 / var_10) ? var_4 : (32768 % 2601790398))) : ((((!(arr_17 [10] [i_4] [i_5] [9] [i_3])))))));
                }
            }
        }
    }
    #pragma endscop
}
