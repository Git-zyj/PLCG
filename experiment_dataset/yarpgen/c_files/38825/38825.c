/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] [i_0 - 1] = 594192974;
                arr_8 [i_1] = (((max(var_11, 1)) <= -1));
                var_19 = (max(var_19, ((((1 ^ (((arr_1 [i_0] [i_1]) & 4)))) & (((arr_2 [i_0 + 3]) ^ ((4007178540 ? 209544488 : 4))))))));
            }
        }
    }
    var_20 ^= ((max((1854789914 << 1), (1952242566 | var_9))));
    #pragma endscop
}
