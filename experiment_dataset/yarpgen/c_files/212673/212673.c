/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 35));
    var_13 = ((16252 != 1) ? var_7 : (max(((1 ? var_1 : 1)), (1 < var_1))));
    var_14 &= ((-var_7 ? var_3 : (((var_5 || var_10) / var_2))));
    var_15 = (--1);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 -= ((177 ? (arr_4 [i_0 + 2] [i_0 - 2]) : 1));
                    arr_7 [i_0] [i_2] [i_0] [i_0] &= (min(1, (((!var_2) < ((((arr_6 [i_2]) || var_9)))))));
                }
            }
        }
    }
    #pragma endscop
}
