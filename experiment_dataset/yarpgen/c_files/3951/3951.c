/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_10 || (((((((var_1 + 9223372036854775807) >> (var_1 + 1159857353636722192)))) ? (max(var_2, var_10)) : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 *= var_11;
                            arr_10 [i_1] [i_1] [i_1] [i_1] = (arr_2 [i_3]);
                            var_16 = 32;
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1] = var_13;
                arr_12 [i_0] [i_1] = var_2;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                var_17 = (((((!((min((arr_16 [5] [i_4] [i_4]), (arr_18 [i_5] [i_5]))))))) != ((min((var_11 > -2072), 58506)))));
                arr_19 [i_4] [i_5] = (arr_16 [14] [i_5] [i_5]);
                var_18 = (((((((arr_4 [i_5]) ? (arr_9 [i_4] [i_4] [5] [i_4] [i_4] [20]) : var_2)) > ((var_2 ^ (arr_7 [i_4] [16] [i_4] [i_4]))))) ? ((-1126310795 ? (arr_18 [i_5] [i_5]) : ((max((arr_2 [i_4]), var_11))))) : (((((((var_6 ? var_8 : 12640))) && (arr_0 [i_4])))))));
            }
        }
    }
    #pragma endscop
}
