/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(9 * -32752)));
    var_18 &= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((var_7 + (((arr_2 [i_0] [i_0] [i_0]) ? var_13 : (arr_2 [i_0] [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((min(((min(11936, 5258))), ((45577 ? 19959 : 5858)))))));
                            arr_11 [i_1] [i_1] = (i_1 % 2 == zero) ? (max(((((arr_6 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1]) >> (((arr_6 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1]) - 98))))), (min((arr_3 [i_1] [i_0] [i_1 + 1]), var_9)))) : (max(((((arr_6 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1]) >> (((((arr_6 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1]) - 98)) - 122))))), (min((arr_3 [i_1] [i_0] [i_1 + 1]), var_9))));
                        }
                    }
                }
            }
        }
    }
    var_21 |= ((-(max((max(var_1, var_6)), (~32767)))));
    var_22 = (min(3711759710, 2032));
    #pragma endscop
}
