/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 3] [i_0] = max((-608877945 | 608877946), 5365395671555086999);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = (min((max((min((arr_1 [i_0]), (arr_9 [i_0] [i_2]))), ((min((arr_9 [i_1] [i_3]), var_16))))), (min((arr_4 [i_1 - 1] [i_0 - 1]), (arr_8 [i_0 + 1] [i_1 - 2] [4] [i_1 - 2])))));
                            var_21 = (min((((((~(arr_0 [i_2])))) >= (min(var_17, (arr_7 [i_3] [0] [i_3]))))), (!var_1)));
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, var_14));
    #pragma endscop
}
