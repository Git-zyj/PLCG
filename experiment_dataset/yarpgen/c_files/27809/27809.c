/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 |= (((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] |= var_0;
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3 + 2] = (((arr_10 [i_3 + 4] [i_1] [i_3 + 4] [i_3] [i_1] [i_2]) ? (arr_10 [i_3 - 1] [7] [i_2] [i_3 + 3] [i_2] [i_3]) : var_2));
                        arr_13 [6] [6] [i_1] [i_2] [6] [i_3] |= (((((-114 ? 228 : 2097151))) ? ((194 ? var_2 : (arr_2 [i_1]))) : 1043));
                        arr_14 [i_0] [20] [i_1] [i_2] [5] [i_0] = ((var_3 || (!-1025)));
                    }
                    var_14 = (max(var_14, ((((arr_3 [22] [i_1]) * (max((arr_5 [i_1] [i_1]), (var_4 * 208003528))))))));
                }
                var_15 = (max(var_15, (arr_6 [6] [6] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            {
                var_16 &= (((max((arr_17 [i_5]), (arr_18 [i_4 - 1] [i_5]))) << ((((((1043 ? -1023 : -114)) + 1086)) - 62))));
                var_17 |= ((+(((arr_7 [i_4 + 1] [18]) & 0))));
            }
        }
    }
    var_18 = (max(((((var_5 % var_9) != var_9))), var_0));
    #pragma endscop
}
