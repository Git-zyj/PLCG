/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (976804673 ? (4034110532 + var_6) : var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((4231556991 ? 3040936364 : 1889060912));
                var_12 = (2405906388 < 2494763873);
                var_13 = (max(var_13, ((((((arr_0 [i_1]) ? (arr_1 [i_1]) : ((3318162622 ? 2405906374 : 3139959787))))) ? (arr_2 [i_0]) : (((arr_2 [i_1]) ? (arr_1 [i_1]) : 1800203423))))));
            }
        }
    }
    #pragma endscop
}
