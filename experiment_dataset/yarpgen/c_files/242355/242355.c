/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_16 ^= ((((min(4783357914599064348, (min(13663386159110487263, 262143))))) || (4783357914599064356 | 12087)));
                arr_5 [8] [i_1 + 2] [i_1] = (8 >> 1);
            }
        }
    }
    var_17 = (min(((((-262143 + 35184372088831) > var_11))), (((53456 || 18446744073709551609) - 1))));
    #pragma endscop
}
