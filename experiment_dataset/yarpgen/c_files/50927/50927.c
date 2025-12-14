/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -30337));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = ((((!(7081337314075094280 >> var_11))) ? ((8373587269477510512 ^ (arr_0 [i_1 - 1]))) : ((((((arr_0 [i_1]) - var_0)))))));
                var_15 = (max(var_15, ((((((0 ? (arr_4 [i_1 - 2]) : 626335066520081341))) ? (((((arr_3 [i_1 + 1] [i_0]) & (arr_4 [i_1]))) - (arr_2 [i_1] [i_0] [i_0]))) : ((min((29424 * 0), (arr_0 [i_1 - 1])))))))));
            }
        }
    }
    var_16 = (((!((min(65011712, -1491885170391851803))))));
    #pragma endscop
}
