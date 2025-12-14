/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!((min((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]), -904189852)))));
                arr_6 [i_0] = ((((((min((arr_4 [i_0] [i_0]), (arr_3 [5] [5]))) >= (arr_3 [i_1] [i_0 - 1])))) << ((((~(((arr_0 [i_1]) & -904189852)))) - 15595570396047333265))));
            }
        }
    }
    var_18 = ((((max(904189851, (min(-904189851, -904189851))))) ? -904189858 : -904189880));
    var_19 = 904189851;
    var_20 = (min(((var_12 ? ((-904189851 ? var_2 : var_3)) : (var_13 & -904189849))), var_0));
    var_21 = var_13;
    #pragma endscop
}
