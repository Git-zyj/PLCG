/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min((~var_11), var_7));
    var_21 = -var_17;
    var_22 = (~var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_23 = (((arr_2 [i_1]) ? ((-(arr_0 [i_1 + 1]))) : ((((arr_3 [i_1] [i_1 - 1]) ? (arr_3 [i_1] [i_1 + 2]) : (arr_3 [i_1] [i_1 + 3]))))));
                arr_4 [i_1] = (!(!var_10));
                var_24 *= ((+((~(((arr_3 [16] [16]) ? var_17 : 63))))));
            }
        }
    }
    #pragma endscop
}
