/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((6160980267508978352 | var_6) | (((-6160980267508978338 ? 1613120267 : 798286666))))) != 6160980267508978352);
    var_18 = (max(var_18, var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((var_5 ? 6160980267508978352 : var_6));
                arr_5 [i_1] [10] &= -6160980267508978353;
                var_20 = -1841033233;
                arr_6 [i_0] = 6160980267508978353;
            }
        }
    }
    #pragma endscop
}
