/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((27990 - ((min(var_13, (min(var_2, -17337)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (max((max(((max(var_12, -1))), ((28 ? -4 : -1)))), (arr_4 [i_0 + 1])));
                var_19 = (min((!var_4), (arr_0 [i_0 + 1])));
            }
        }
    }
    var_20 |= var_13;
    #pragma endscop
}
