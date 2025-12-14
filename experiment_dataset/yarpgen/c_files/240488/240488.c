/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (min(((6285982883690606634 ? (((var_13 >> (((arr_3 [i_0]) - 14342703547547959003))))) : (arr_3 [i_0]))), (min((arr_3 [i_1]), var_8))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_3] [1] &= (((min(var_16, var_4))) ? ((~(arr_1 [i_0]))) : (((!(12160761190018944960 ^ -79)))));
                                arr_13 [i_4] [i_4] [i_2] [i_2] [i_4] [i_4] [i_4] = ((var_15 ? (((max(var_16, (arr_8 [i_2] [i_1]))))) : ((12160761190018944970 ? (arr_9 [i_0] [i_0] [i_2] [i_3] [i_3]) : (arr_9 [i_0] [i_1] [5] [i_3] [i_4])))));
                            }
                            var_20 = (var_6 & var_7);
                        }
                    }
                }
                arr_14 [i_0] = ((~(var_0 || var_11)));
            }
        }
    }
    var_21 = (max(var_21, var_17));
    #pragma endscop
}
