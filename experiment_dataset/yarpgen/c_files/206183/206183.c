/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((((arr_5 [i_0 + 1]) | 1085654934)));
                var_12 *= ((((54805 ? var_9 : 240)) < (0 == 2)));
                var_13 = (min(var_13, ((((((~((((-9223372036854775807 - 1) <= var_10)))))) > (max((-9223372036854775807 - 1), 0)))))));
            }
        }
    }
    var_14 = (max(var_14, 175));
    #pragma endscop
}
