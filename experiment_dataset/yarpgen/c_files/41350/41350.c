/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(122, 7794));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 2] = (max((arr_4 [i_1 + 1]), ((((min(0, (arr_0 [i_1]))) > ((min(21, (arr_1 [i_1] [i_1])))))))));
                arr_7 [6] [i_1] &= ((((((arr_5 [i_1 - 3]) ? (max(36046, (arr_4 [i_0]))) : (((arr_4 [i_0]) << (var_3 - 5324171452301180778)))))) ? ((var_9 << (((arr_1 [i_0] [i_1 - 3]) - 186)))) : (max((!-20153), (0 * 0)))));
                var_12 = 42;
            }
        }
    }
    var_13 |= ((((max(var_4, (var_10 > var_8)))) < var_8));
    #pragma endscop
}
