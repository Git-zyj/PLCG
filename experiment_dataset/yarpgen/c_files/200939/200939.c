/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((-3549330361508105626 ? 254 : -3549330361508105648))) ? var_1 : var_13)) ^ ((min(((var_0 ? -91 : 3549330361508105625)), var_0)))));
    var_15 += (((~135) ? var_10 : (max((max(14302888493720145470, -8016517456573289084)), 4143855579989406146))));
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 += (((min(var_12, (36440602 || var_13))) && ((4143855579989406146 && (((var_2 ? var_11 : -6162154548284963882)))))));
                    var_18 -= ((-((24 ? 5785978577966448877 : var_5))));
                }
            }
        }
    }
    var_19 = (max(((((min(14302888493720145468, var_11))) ? 1309053951221823268 : -5785978577966448877)), (((var_8 ? (max(0, var_2)) : var_10)))));
    #pragma endscop
}
