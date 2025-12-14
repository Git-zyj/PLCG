/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_16));
    var_18 = ((~(((var_10 <= var_10) ? (var_11 / var_10) : (var_16 ^ var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_3 [i_1] [i_1 + 3] [5])));
                arr_4 [i_1] = (((21060 ? 29 : 7802070871647128480)));
                arr_5 [i_1] [i_1] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_0] [i_1] [i_2] [i_3] = (arr_0 [i_0]);
                            var_20 = (((((arr_9 [i_0] [i_0 - 1] [i_2] [i_2] [i_2 - 4]) - (arr_9 [i_0 - 1] [i_0 - 2] [i_2] [1] [i_2 - 1]))) / ((((!(4334560411307371792 && 0)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
