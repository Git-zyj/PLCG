/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (var_9 & 193)));
                var_17 = (min((min(var_3, var_7)), (((!((max(-32741, var_5))))))));
                var_18 = (max(((min(((min(-4, 26))), (-2002901379 ^ var_2)))), -7274582108366849337));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 6;i_4 += 1)
            {
                {
                    var_19 = 14409;
                    var_20 = (max(var_20, ((min(80, var_12)))));
                    var_21 = ((!((max(var_4, -32756)))));
                }
            }
        }
    }
    var_22 = (min((min((min(15888, 15216005317012422764)), ((max(var_12, var_5))))), -1));
    var_23 = (max(var_23, ((min(var_14, ((min(var_4, (min(var_5, var_6))))))))));
    #pragma endscop
}
