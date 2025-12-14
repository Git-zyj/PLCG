/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max((((51622 ? -5 : 65532))), ((((max(13888, 51626))) ? (32767 * var_14) : ((-1 ? var_16 : var_15)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 -= (arr_5 [i_0] [i_0] [11]);
                    arr_6 [i_0] [i_0] [i_0] [i_0] = (((min(65512, ((var_15 ? 111 : (arr_0 [i_0] [i_0]))))) << (min(var_17, (((arr_3 [i_0] [i_1] [i_2]) & 1))))));
                }
            }
        }
    }
    var_21 = 2097024;
    #pragma endscop
}
