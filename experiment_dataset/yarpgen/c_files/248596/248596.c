/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [4] |= ((~(min(58, 579925857))));
                var_15 = 22982;
                var_16 ^= max(((((9250692434192847705 ? (arr_3 [i_0]) : (arr_6 [18]))) % (max(var_8, 65535)))), var_2);
            }
        }
    }
    var_17 += (min(var_12, ((min(var_0, (-32767 - 1))))));
    #pragma endscop
}
