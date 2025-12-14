/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((-(((arr_3 [i_2 - 1] [i_1]) ? 2267132288296250170 : (arr_3 [i_2 - 3] [i_0])))));
                    arr_8 [i_0] [i_1] [i_0] = 2267132288296250172;
                    arr_9 [i_2] [i_0] = ((-(((((max(var_15, 549755813760))) || -7820658881281577027)))));
                    arr_10 [i_1] [6] = (min(549755813742, (16179611785413301449 && 60222)));
                }
            }
        }
    }
    var_16 = (max((var_4 || var_13), (var_0 / -1)));
    var_17 = var_10;
    var_18 = ((16179611785413301443 ? -549755813751 : (2144775222356413674 * 549755813742)));
    #pragma endscop
}
