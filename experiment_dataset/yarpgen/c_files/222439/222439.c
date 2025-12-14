/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((var_3 ? ((((var_1 * var_8) ? var_8 : var_8))) : var_5));
    var_12 = var_9;
    var_13 = ((-var_10 ? var_9 : (((~(9223369837831520256 < var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (max((((arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2]) ? (arr_7 [i_1 - 1] [i_1]) : 9223369837831520256)), (!41922)));
                            var_15 = 9223374235878031360;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] [i_1] [8] [i_5] = var_1;
                            var_16 = ((var_5 >= ((((!(arr_7 [i_1 + 1] [i_1 + 1])))))));
                        }
                    }
                }
                var_17 = var_3;
            }
        }
    }
    #pragma endscop
}
