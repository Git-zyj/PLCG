/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 -= ((3732793263 ? (((arr_3 [i_0] [i_1]) ? var_12 : 1)) : (((arr_1 [i_0]) ? ((3336755563755622782 ? (arr_1 [5]) : 2833975902709176872)) : 16108090223771558298))));
                arr_4 [i_0] = (arr_3 [8] [i_0]);
                arr_5 [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_1]) | (((~(min(-2833975902709176890, 32752)))))));
            }
        }
    }
    #pragma endscop
}
