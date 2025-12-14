/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_0 > var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((12468 ? ((((((arr_0 [i_0] [i_1]) ? -32759 : -32759))) ? var_3 : -32759)) : (arr_4 [i_0]))))));
                var_19 &= (((arr_3 [4] [i_1]) ? (((max((var_9 != var_11), ((!(arr_2 [4] [i_0]))))))) : ((var_13 ? ((-576089902 ? 3341450991 : 0)) : (((var_1 ? var_16 : var_9)))))));
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
