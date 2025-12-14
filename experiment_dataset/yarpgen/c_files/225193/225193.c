/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 -= ((((max((arr_5 [i_2] [i_1 + 1]), 1117435300))) ? (max(-var_5, (((2655242485785370344 ? 511 : 65025))))) : var_6));
                    arr_8 [i_0] [i_0] [i_2] = ((((((max(var_8, var_0))))) & ((131072 ? (~131072) : 0))));
                }
            }
        }
    }
    var_12 += ((-var_0 ? ((var_6 ? ((118 ? 7412203934314791556 : 0)) : ((var_9 ? 15791501587924181271 : var_4)))) : ((((14 ? var_2 : var_0)) + var_7))));
    var_13 ^= (min(-10659, ((255 ? (max(var_2, var_5)) : var_7))));
    var_14 = (min(var_14, (((((((3177531995 ? -10659 : 21304)))) ? (((var_6 | var_0) ? 2086028897 : 57065)) : (9019642259456074972 >= var_10))))));
    var_15 = (max(((max(2086028897, 28655))), (((var_8 ? 255 : var_4)))));
    #pragma endscop
}
