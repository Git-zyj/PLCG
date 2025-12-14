/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-3117412739428977205 || (((498021049 ? var_11 : 1996557476))))) && 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (arr_4 [i_0] [i_0] [i_0]);
                arr_5 [i_0] [i_1] = (((((2 ? var_7 : var_9))) ? 2516 : ((((1996557476 ? var_7 : 4124051812976447609))))));
            }
        }
    }
    var_14 = ((var_6 << (4267677626 - 4267677625)));
    var_15 &= ((var_8 ? var_6 : (((-1050678715 ? var_7 : (0 > 1996557476))))));
    #pragma endscop
}
