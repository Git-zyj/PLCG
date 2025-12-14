/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = ((((min(-4021694784430663989, ((3498979227 ? 7230105301337514375 : 3498979223))))) ? (((var_14 ^ -117) ? ((1 ? 4955717678973377270 : 63)) : ((min(-1932084975, var_5))))) : ((((22531 | var_0) - ((116 ? 1 : 166)))))));
                    arr_6 [i_0] |= 0;
                }
            }
        }
    }
    var_16 = ((-(((var_1 + 795988085) ? var_11 : ((min(795988093, var_4)))))));
    var_17 = (((((min(26707, 1))) - var_5)) * 0);
    #pragma endscop
}
