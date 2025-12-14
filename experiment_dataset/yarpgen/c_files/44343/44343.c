/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 += (((min(((var_12 ? (arr_2 [i_0] [i_1]) : (arr_0 [i_0 - 1] [i_1]))), (arr_4 [i_0] [i_0] [i_1]))) & (((((((arr_4 [9] [i_1] [i_0]) ? 3441455512 : (arr_0 [i_0] [i_0])))) ? -2147483631 : ((~(arr_1 [i_0] [i_0 - 1]))))))));
                var_21 = (min(var_21, (((702915072 < (min(((0 ? -1 : (arr_3 [6] [i_0 - 1]))), (arr_0 [i_0] [i_0]))))))));
            }
        }
    }
    var_22 = (min(var_17, 13));
    var_23 |= (max((var_8 && var_7), var_4));
    #pragma endscop
}
