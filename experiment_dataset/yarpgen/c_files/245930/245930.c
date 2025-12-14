/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((8127 || 38381) % ((min(57409, 63417)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (max(((min((arr_5 [i_2 - 1] [i_2 - 1]), var_0))), ((~(arr_1 [i_2 + 1])))));
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 1] = (((var_11 + var_9) | ((~(arr_5 [i_2 - 2] [i_2 - 1])))));
                }
            }
        }
    }
    var_18 &= min(var_2, (((!(((63677 ? 6612 : 21472)))))));
    #pragma endscop
}
