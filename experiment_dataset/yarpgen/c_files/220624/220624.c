/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~-763743351933269771) ? var_3 : (((max(10702015240532961784, var_7)) & (~var_1))));
    var_21 = (~763743351933269760);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = (((((arr_0 [i_1 + 3]) | (arr_0 [i_1 + 1])))) ? (763743351933269788 ^ -763743351933269788) : ((763743351933269796 ? 135107988821114880 : 763743351933269787)));
                var_23 = (arr_3 [i_0] [i_1]);
                var_24 = (((~1614864356855457834) ? (arr_6 [i_1]) : ((+(((arr_1 [i_0]) ? 0 : -9223372036854775800))))));
            }
        }
    }
    var_25 -= ((~((~(min(547776654515479111, 763743351933269787))))));
    #pragma endscop
}
