/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((!((max(-1183836312, ((32256 ? 233 : var_5)))))));
                    var_19 ^= ((~(arr_2 [i_1])));
                    var_20 = (arr_4 [i_0] [i_0] [i_2 - 1]);
                }
            }
        }
    }
    var_21 = ((-32257 ? 32276 : -32257));
    #pragma endscop
}
