/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((var_9 ? (min(55763, 16155473309598092591)) : var_0)), var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 &= ((((~(arr_5 [i_1 + 1])))) ? (min((arr_2 [i_2]), var_9)) : (((arr_0 [i_1 + 2]) ? var_1 : var_3)));
                    var_14 ^= var_8;

                    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_2] [i_3] = ((1 ? 16155473309598092591 : ((var_11 ? 1 : ((var_0 ? var_5 : 16155473309598092591))))));
                        var_15 = ((((var_1 ? 127 : (arr_4 [i_0])))) ? ((max((var_4 / 1), var_4))) : ((-(min(var_10, var_5)))));
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_16 ^= ((((((min(var_11, 2291270764111459025))) ? (max((arr_5 [i_0]), (arr_0 [i_0]))) : (65408 || 2291270764111459002)))) ? ((var_4 ? (4269040230 * var_3) : ((0 ? var_5 : var_8)))) : var_6);
                        var_17 = (arr_3 [i_2]);
                    }
                }
            }
        }
    }
    var_18 = 1;
    #pragma endscop
}
