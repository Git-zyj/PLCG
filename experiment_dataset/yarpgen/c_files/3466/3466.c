/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [6] [i_2] = (((4294967295 * 4294967295) ? (((0 || (arr_2 [i_2 + 1] [i_2 - 1] [1])))) : ((~(arr_2 [i_2 + 1] [i_2 - 1] [1])))));
                    arr_8 [4] [4] = (((((~(min(1867516037, 20446))))) ? ((((min(4294967295, 20228))) ? (arr_6 [i_2] [2] [i_2]) : (max(20446, 16430035402203245380)))) : ((((arr_2 [0] [i_2 + 1] [0]) & 18305485480671963935)))));
                }
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
