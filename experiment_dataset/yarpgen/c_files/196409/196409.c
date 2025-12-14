/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((arr_3 [i_1] [i_1] [i_0]) + (min(((13214086854417775395 ? -7098942236835265093 : -21576)), (((13214086854417775396 ? 69 : -49)))))));
                var_18 = ((((!(arr_1 [i_0] [i_1]))) ? var_7 : ((~(arr_2 [i_1])))));
                var_19 = -4179382651852684439;
            }
        }
    }
    var_20 = (min(var_20, var_4));
    #pragma endscop
}
