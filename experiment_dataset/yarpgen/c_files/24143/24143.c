/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((~0), 1))) ? ((-var_0 * (max(124, var_8)))) : 126);
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [22] [1] [9] [13] = 1;
                    var_12 = -449391370;
                    arr_8 [16] [i_1] [i_1] = min((max((max(947258477, 138)), (((arr_4 [10] [i_1]) % var_3)))), 0);
                    arr_9 [1] [1] = (((arr_5 [18] [i_1] [i_0]) ? (max((((arr_1 [4] [1]) | (arr_2 [i_1]))), ((248 ? 127 : (arr_3 [i_0] [i_1] [i_0]))))) : ((((((arr_5 [i_2] [i_1] [i_0]) || (arr_2 [i_1])))) * (((!(arr_5 [i_0] [11] [i_2]))))))));
                }
            }
        }
    }
    var_13 = ((~(-2147483647 - 1)));
    #pragma endscop
}
