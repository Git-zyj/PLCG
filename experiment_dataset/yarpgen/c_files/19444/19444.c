/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_2 < 248) ? (!var_18) : 255));
    var_20 = ((var_1 ^ (~var_13)));
    var_21 -= max(var_16, (((-138570731203758144 ^ var_12) ? (((var_10 ? 163 : var_16))) : (max(var_14, 691294912)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] [i_1] [7] = ((~((1 / ((~(arr_0 [i_0])))))));
                arr_5 [i_1] [i_0] [i_0] = ((-var_11 ? (((arr_2 [i_1 + 2] [i_0 - 1]) | -7367)) : ((min((arr_1 [i_0 - 2]), (arr_1 [i_0 + 2]))))));
                var_22 = ((max(((152 ? var_3 : 1844358518897794029)), (129 - 3370969749139203927))));
            }
        }
    }
    #pragma endscop
}
