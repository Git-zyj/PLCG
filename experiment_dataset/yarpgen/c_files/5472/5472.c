/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = 27238;
                            var_17 -= ((((((!-462105038) != var_0))) << (((((var_3 | (arr_7 [i_0]))) >= 21615)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((((arr_5 [i_5]) / (arr_10 [i_0] [i_5] [i_4] [i_5])))))));
                            arr_17 [i_0] [i_5] [i_4] [12] [2] [2] = ((+((21593 ? (((arr_9 [i_5] [6] [16] [12] [i_0]) % -648012304)) : var_8))));
                            arr_18 [i_0] [i_0] = (arr_11 [3] [i_4] [i_1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_19 = (var_11 > 21609);
    var_20 -= (var_9 * 0);
    #pragma endscop
}
