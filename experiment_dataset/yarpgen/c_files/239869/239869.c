/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((((-2052979533 ? 2052979532 : -2052979533))), var_5))) ? (~64) : (max(11224129478641314782, (~var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = ((arr_4 [i_1 - 4] [i_1 - 2] [i_1 - 4]) | (arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 4]));
                arr_5 [17] = (((((~(arr_1 [i_1 + 1] [i_1 - 4])))) ? (~var_1) : ((((max((arr_3 [i_1]), (arr_4 [i_0] [i_0] [i_0])))) ? (arr_4 [i_1] [i_1 + 1] [i_0]) : ((-(arr_2 [i_0])))))));
                var_15 *= (((arr_4 [i_0] [i_1] [i_1]) == (((arr_4 [i_1 - 3] [i_1 - 4] [i_1 - 2]) & var_4))));
            }
        }
    }
    var_16 -= (max(896, ((var_9 ? var_10 : var_5))));
    #pragma endscop
}
