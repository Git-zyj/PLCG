/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -58;
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max((((((13917 ? (arr_4 [i_1] [i_1] [i_0]) : (arr_0 [i_1])))) ? (var_16 ^ 14308452090325499693) : ((((arr_4 [i_0] [i_0] [i_0]) ? (arr_5 [i_0]) : (arr_4 [i_1] [i_1] [i_0])))))), var_8));
                var_20 *= (max(-6980050301122715836, 28002));
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
