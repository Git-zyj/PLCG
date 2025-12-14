/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((min(31, 37))), (((min(var_2, var_3)) & var_3))));
    var_11 = ((var_6 >> (var_9 - 1591832416324408890)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = -24370;
                arr_5 [i_0] = (((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]) ? (min(46, -1)) : -45));
                var_13 = (max(var_13, -1));
                var_14 = (((((var_3 ? (arr_0 [i_0 + 1]) : var_4))) ? (arr_0 [i_0 + 1]) : ((-(arr_0 [21])))));
            }
        }
    }
    var_15 *= (min(54, 255));
    #pragma endscop
}
