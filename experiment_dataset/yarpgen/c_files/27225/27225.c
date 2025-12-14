/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (17270 || -2052810625);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((~((((-1567135350 < var_6) || ((min(17263, (-127 - 1)))))))));
                var_14 -= (((((((((arr_3 [i_0] [i_1] [i_0]) & (arr_4 [i_1])))) ? (~4718680940676440051) : ((((-127 - 1) ? 0 : 127)))))) || ((((~127) ? 17256 : (min(237, (arr_3 [1] [i_1] [i_0]))))))));
                var_15 = (min(((2113929216 ? 2147483648 : 2147483617)), (((1314885060 < (((~(arr_4 [i_1])))))))));
                var_16 = ((((max(-152139048084876068, 2147483620))) || (((min(0, var_0))))));
            }
        }
    }
    var_17 = (max(var_17, (((2021468775 || (1164741831 || 14692))))));
    var_18 |= -661738980;
    #pragma endscop
}
