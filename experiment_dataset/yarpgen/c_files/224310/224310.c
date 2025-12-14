/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = 8043869349468296137;
                var_13 = (arr_1 [i_0]);
            }
        }
    }
    var_14 = (((+-72057585447993344) | (-var_2 * -var_4)));
    var_15 = var_11;
    #pragma endscop
}
