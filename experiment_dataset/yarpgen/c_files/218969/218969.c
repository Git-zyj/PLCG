/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= max((((154 > var_2) ? var_0 : -752700011)), ((((var_6 == 17378336949720696418) ? (~var_10) : var_11))));
    var_13 *= ((924094067 || (((1 ? var_4 : var_5)))));
    var_14 *= var_9;
    var_15 = (max(58, 439548918));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    arr_8 [6] [i_1] = ((128 ? (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? -8498479594356228270 : var_9)) : ((((arr_4 [i_0 - 1] [i_0 + 2] [i_0 - 1]) ? -28296 : var_5)))));
                    var_16 = ((-(max((!1125406143), (min(var_7, var_2))))));
                    arr_9 [i_0] [4] [i_2] [4] = (((((+((-4629385409361036102 ? (arr_2 [i_1]) : 1))))) ? 42585 : (arr_1 [i_0 + 1])));
                    var_17 += 2539929076960323158;
                }
                arr_10 [i_0] [i_1] [i_1] &= ((-(~-96)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_18 &= var_3;
                            var_19 = (min(var_19, ((((max(var_9, 187)))))));
                            var_20 += (((!64) ? 27645 : 152));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
