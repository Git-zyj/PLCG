/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= -1;
    var_21 |= var_17;
    var_22 += (((((var_6 ? -21 : (var_11 * 0)))) == ((var_14 ? var_18 : ((var_13 >> (var_0 - 3856973410)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_23 ^= (arr_0 [i_1] [i_0 - 2]);
                var_24 = (min(var_24, ((max(((-((min(-5, -24449))))), (!var_5))))));
                arr_6 [i_0] [i_1] = (arr_2 [i_0]);
                arr_7 [i_1] = ((!(arr_1 [i_0] [i_1])));
                var_25 = (min(var_25, (((var_17 == (((((-24455 ? (arr_4 [i_0]) : (arr_3 [8] [i_0]))) >= (arr_0 [i_0] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
