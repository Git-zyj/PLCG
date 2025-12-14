/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((61 * (103 <= 50)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 ^= (+(((~0) / 4294967295)));
                var_18 = 81;
                arr_8 [i_1] [i_1] &= (max((max(((min(-29121, 21573))), ((0 ? 2097136 : 92)))), -104));
            }
        }
    }
    var_19 = (((((61 ? 3 : 117))) != ((min(var_15, 2577516510)))));
    var_20 = var_10;
    var_21 = 1;
    #pragma endscop
}
