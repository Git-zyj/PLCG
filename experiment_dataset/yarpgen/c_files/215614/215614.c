/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(5954281878391748812, (((!(((var_1 << (var_3 - 395272328)))))))));
    var_12 = (max(((-((var_5 ? var_1 : -1532850339)))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(211, 25));
                var_14 = (((((32759 << (((arr_1 [i_1]) + 98))))) || (((17595920796303069753 & (arr_1 [i_0]))))));
                var_15 = 31;
                var_16 = (max(var_16, (((((((var_3 ^ -26) >> (((arr_0 [i_0] [i_1]) + 13471))))) & (((arr_4 [10]) ^ (min(27, 8368900719352156825)))))))));
            }
        }
    }
    #pragma endscop
}
