/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 += ((7 ? 24759 : ((1565616412155892073 ? -1 : 4))));
                var_16 = (((((26 ? 4 : 1))) ? (((((-24371 ? 0 : -1))) ? 239 : ((-15 ? 9714530071176259913 : 30506)))) : -1503826521483852409));
                var_17 = ((-24371 ? 18446744073709551614 : 2));
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
