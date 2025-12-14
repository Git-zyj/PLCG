/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 += (((((15 ? 1 : 15))) ^ (((!((max(26, 7))))))));
                    var_17 += (arr_4 [i_0] [i_0] [i_0 + 4]);
                    var_18 *= (arr_5 [i_1]);
                    var_19 ^= (min(var_4, 1));
                    var_20 = max(1, 2020733659);
                }
            }
        }
    }
    var_21 = 1;
    #pragma endscop
}
