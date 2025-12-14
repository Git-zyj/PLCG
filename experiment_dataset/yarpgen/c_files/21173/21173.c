/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] |= ((~(~18446744073709551615)));
                    var_13 = ((-((8386560 ? (arr_6 [4] [i_1 + 2] [i_2] [i_2]) : 306953290))));
                }
            }
        }
    }
    var_14 = ((-((-4294967295 ? 8386544 : -var_8))));
    #pragma endscop
}
