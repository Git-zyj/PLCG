/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_6 & 55789);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 1] [i_1] = ((var_2 > ((max((arr_1 [1]), (((arr_0 [i_1]) * 9747)))))));
                var_11 = (((arr_0 [i_1]) % 2626));
                var_12 += var_8;
            }
        }
    }
    #pragma endscop
}
