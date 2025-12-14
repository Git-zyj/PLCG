/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = 23642;
                arr_6 [i_0] = (((arr_1 [i_1]) ? (+-1690086318) : (min((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 2]), -18545))));
                arr_7 [i_0 - 2] [i_0 - 2] &= (max((min(-1690086317, (arr_1 [i_0]))), (arr_4 [i_0 - 2] [i_0 - 2])));
                var_11 = (arr_1 [i_0]);
            }
        }
    }
    var_12 = ((-((-21445 ? (~9175376029453776335) : var_10))));
    #pragma endscop
}
