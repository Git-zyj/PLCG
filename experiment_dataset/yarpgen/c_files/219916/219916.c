/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -113;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [15] = (arr_4 [i_2]);
                    var_12 = (((arr_4 [i_1]) && (((((15804 ? (arr_2 [i_2]) : 4093327421))) && ((max((arr_1 [i_2]), 4093327440)))))));
                }
            }
        }
    }
    var_13 = ((min((3017233080 == var_8), (3017233097 && var_7))) ? var_8 : ((((((5335181456687616357 ? 3017233092 : (-32767 - 1))) == (((var_4 ? var_0 : var_1))))))));
    #pragma endscop
}
