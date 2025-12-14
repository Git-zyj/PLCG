/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_12, 6917529027641081856));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 ^= min(9223372036854775807, (arr_1 [i_1]));
                var_19 += (arr_2 [14]);
                arr_6 [i_0] = ((-6091136361104779234 ? 1465126016800115312 : (-9223372036854775807 - 1)));
            }
        }
    }
    #pragma endscop
}
