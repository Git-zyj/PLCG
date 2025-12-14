/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 195;
    var_17 |= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (((max(0, var_8))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = ((-((max(var_7, (arr_8 [i_0] [i_1 - 3] [i_2] [i_3]))))));
                            var_19 = (max(var_19, (arr_10 [i_1 - 3] [i_1 + 1] [i_1 - 3])));
                            var_20 = (min(var_20, var_7));
                            arr_12 [0] [i_1] [i_1 - 3] [11] [i_1] [6] |= ((!((min(((var_4 ? (arr_5 [i_1]) : 1966080)), (arr_10 [i_1] [i_1] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_21 -= (var_4 * (var_11 <= var_12));
    #pragma endscop
}
