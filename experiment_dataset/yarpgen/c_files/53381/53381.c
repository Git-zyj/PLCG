/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((-999642146 & (((min(0, 3732024275809795921)) >> (1 == 0)))));
                    var_16 = (max(var_16, (((((max(((1 ? 8388607 : -1)), 32767))) ? (-2147483647 - 1) : 1)))));
                    var_17 = (min(((min((1532616587 || 12052862632959989062), (1752484906 > 32)))), (28 + -972326300)));
                }
            }
        }
    }
    var_18 = (((((4294967279 & ((4771 ? 212 : 2017612633061982208))))) ? (((((0 ? 223 : 16429131440647569408))) ? (((1 ? 81 : 1527969039))) : ((32738 ? -32758 : -3921881907928097574)))) : var_11));
    #pragma endscop
}
