/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = 1048575;
                var_18 = (max((min((min(-2294690502207710690, 274546784)), 6614141408395342826)), (((~(arr_5 [0] [i_1] [i_0]))))));
                var_19 |= ((((13744006076197158653 & (arr_6 [i_0])))) ? -1285891536 : ((~(arr_3 [i_0] [10]))));
                arr_7 [i_0] [i_0] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_20 *= 2720255666744896334;
    var_21 = var_16;
    #pragma endscop
}
