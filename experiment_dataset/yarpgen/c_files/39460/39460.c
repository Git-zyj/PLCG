/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((+(((arr_4 [5] [i_0] [i_0]) ? (arr_4 [i_0] [3] [i_0]) : 1))));
                    var_16 += (arr_5 [i_2] [i_2]);
                    var_17 -= ((-9032144642118020474 ? (((min(53404, 9032144642118020474)) / (arr_4 [i_0] [1] [i_1]))) : 7671285648640921391));
                }
            }
        }
    }
    var_18 = ((((var_6 ? ((var_7 ? var_15 : var_9)) : var_5)) | ((((((-7671285648640921388 ? -7671285648640921396 : -7671285648640921391))) ? var_1 : 188)))));
    #pragma endscop
}
