/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (arr_1 [i_1])));
                var_18 -= (!4294967295);
                arr_5 [i_1] = ((!((min((((arr_0 [i_0]) ? -1 : var_15)), -1)))));
                var_19 = 18446744073709551615;
                var_20 = (max(((min(0, -1))), ((0 ? 3608399405 : 72057594037796864))));
            }
        }
    }
    #pragma endscop
}
