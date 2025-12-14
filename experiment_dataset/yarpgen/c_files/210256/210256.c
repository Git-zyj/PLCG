/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((-((33 ? ((max(29102, 1216266999))) : 13186657164082083960))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 *= var_14;
                var_21 = (((arr_3 [i_1 - 1] [i_1]) >= (max((min(11859847300588570737, 5260086909627467663)), var_5))));
            }
        }
    }
    var_22 = (min(var_22, var_15));
    #pragma endscop
}
