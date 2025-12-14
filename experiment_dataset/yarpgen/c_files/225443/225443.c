/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = ((var_2 ? ((1 ? ((max(38315, 65535))) : ((1923900821 ? 262143 : 1)))) : -1));
                arr_6 [i_1] = ((var_10 >> ((((-18142 ? ((max(90, -18142))) : 0)) - 68))));
            }
        }
    }
    var_12 |= (((((~((-1 ? 65535 : 18446744073709551610))))) ? var_1 : ((230 ? (0 <= var_5) : (26506 * var_4)))));
    var_13 = (18446744073709551610 ? -1 : (max((var_6 % 10), -9)));
    #pragma endscop
}
