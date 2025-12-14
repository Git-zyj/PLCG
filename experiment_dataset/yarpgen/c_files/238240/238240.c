/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = ((((((arr_5 [i_1 + 2] [i_1 + 2] [i_1]) & (arr_8 [i_1 + 2] [i_1] [i_1 + 1])))) ? 161 : (((-7996 * ((~(arr_2 [i_0]))))))));
                    var_16 = ((((7996 ? var_2 : (arr_7 [i_1] [i_1 + 1] [i_2] [i_2]))) % ((8014 ? var_11 : 6834))));
                    var_17 = (((((-124 ? (arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 2]) : -8014))) ? ((((min((arr_5 [i_1] [i_1 - 1] [i_1]), 7975))) ? ((((0 < (arr_3 [i_0] [i_0]))))) : 0)) : (((7975 ? (((var_0 ? var_3 : var_10))) : var_2)))));
                }
            }
        }
    }
    var_18 &= 34;
    var_19 = (max((~-550747948), (4294967283 | 30310)));
    #pragma endscop
}
