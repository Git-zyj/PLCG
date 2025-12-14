/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 ^= (((max((arr_1 [2] [2]), (arr_1 [i_0] [14]))) % (max((arr_1 [i_0] [16]), ((min(-32743, (arr_4 [i_0] [i_1] [i_1]))))))));
                var_13 = (min(var_13, (((+(((arr_1 [14] [14]) ? (arr_1 [14] [0]) : 59375)))))));
                arr_5 [i_0] = ((((((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : -1))) ? (6169 != 59399) : ((-(arr_0 [12])))))) ? (((arr_1 [i_0] [i_0]) + (((arr_0 [i_1]) & -27209)))) : ((min(((-(arr_3 [i_0] [17]))), (((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_4 [8] [i_1] [1])))))));
                arr_6 [11] [i_0] [i_1] = (min(((+(((arr_4 [i_0] [i_1] [i_0]) & (arr_3 [i_0] [i_1]))))), (arr_3 [i_0] [i_0])));
            }
        }
    }
    var_14 = var_8;
    var_15 ^= ((var_11 & (((var_6 >= var_4) ? ((max(59375, 59375))) : ((6160 << (2024169634767401820 - 2024169634767401802)))))));
    #pragma endscop
}
