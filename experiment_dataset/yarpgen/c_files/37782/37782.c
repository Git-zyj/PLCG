/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (min((((arr_11 [i_3] [i_1] [i_0]) ? (arr_11 [i_3] [i_3] [i_2]) : (arr_7 [i_0] [i_1] [14] [i_1]))), ((~(arr_7 [i_0] [i_1] [i_2] [11])))));
                                var_19 = ((((1998782110 || (5 & 1998782110))) ? (min(var_0, (arr_9 [i_2] [i_1]))) : (((arr_0 [i_3]) ? (2296185186 >> 0) : (max(var_16, var_9))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_0] = ((((max(var_10, (var_4 || 2296185185)))) ? 0 : (((min((((arr_3 [i_0] [i_0]) < 2296185185)), 1))))));
            }
        }
    }
    var_20 = max(0, var_9);
    #pragma endscop
}
