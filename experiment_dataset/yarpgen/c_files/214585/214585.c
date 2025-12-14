/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? var_1 : var_2));
    var_16 -= (((((1 * (1 >= 3716526747)))) && var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 ^= (arr_1 [i_0] [2]);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 -= ((-(((!(arr_7 [12]))))));
                                var_19 = ((((((((arr_5 [i_0] [i_1] [i_3]) || 96)) || ((min((arr_1 [i_1] [i_0]), 26268)))))) < (5881 || -30)));
                            }
                        }
                    }
                }
                var_20 = (max(((max(677334867, (arr_9 [i_0])))), (arr_2 [i_0] [i_0])));
            }
        }
    }
    var_21 = (!255);
    #pragma endscop
}
