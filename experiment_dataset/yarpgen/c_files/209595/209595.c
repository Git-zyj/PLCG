/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((min((((-1 ? 1 : 179)), 1452543174))));
                var_19 = -6;
                var_20 = ((((((((arr_1 [i_0] [i_1]) || var_11)) ? (arr_2 [i_0]) : (min(4019305617, (arr_0 [2])))))) ? ((min((arr_0 [6]), var_18))) : (max((arr_2 [i_0]), ((-(arr_1 [i_0] [3])))))));
            }
        }
    }
    var_21 = (min(var_0, ((32764 ? ((min(-31689, var_16))) : 262143))));
    #pragma endscop
}
