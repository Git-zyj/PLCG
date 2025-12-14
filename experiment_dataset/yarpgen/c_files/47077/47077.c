/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((arr_0 [i_0]) ? (max(9223372036854775807, 0)) : (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_21 = (((-(arr_6 [i_2] [i_2] [8]))));
                            arr_9 [i_0] [i_1] [i_1] [i_0] = (1735861220484928703 * var_1);
                            arr_10 [i_0] [i_1] [0] [i_3] = 27379;
                        }
                    }
                }
                arr_11 [i_0] [i_1] [i_0] = (min(((~((~(arr_4 [i_0]))))), -var_8));
            }
        }
    }
    var_22 = 58618;
    #pragma endscop
}
