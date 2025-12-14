/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_10);
    var_20 = ((var_16 ? 30791 : ((var_13 ? (max(var_4, var_3)) : 27230))));
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 1] = (((((arr_4 [i_0] [i_0] [i_0]) > -28719))));
                arr_6 [i_1 + 2] [i_0] = (min((((min(2504, (arr_3 [i_0] [13] [i_0]))) << (-3511261911 - 783705382))), 17503232159931829839));
            }
        }
    }
    var_22 = ((~(max(79, (min(18033209566803391759, 127))))));
    #pragma endscop
}
