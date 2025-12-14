/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = arr_1 [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 = (arr_0 [1]);
                            arr_8 [3] [6] [14] [1] = ((((((arr_4 [14] [1] [i_3 + 1] [8]) & var_8))) & 14959928192575659285));
                            var_14 = ((((var_7 ^ (1157392332 ^ -32748))) ^ var_5));
                        }
                    }
                }
                arr_9 [10] = var_5;
                arr_10 [i_0] [4] [9] = 14959928192575659306;
            }
        }
    }
    var_15 = -13;
    var_16 = 21882;
    #pragma endscop
}
