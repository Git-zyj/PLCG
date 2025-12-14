/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((~(min(12641874410523679955, 81)))) > var_12));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = (((arr_2 [i_0 + 1]) ? (min((max(14285107767383141879, -32751)), ((((arr_5 [i_0] [i_1] [i_1]) ? 0 : 5))))) : ((((arr_5 [i_0 + 1] [i_0 + 1] [i_1]) ? (min(56330, 132120576)) : ((min(11805, 17))))))));
                arr_8 [i_1] [i_1] = var_8;
                var_16 = (((arr_6 [i_1] [i_0] [i_1]) % ((max(128, -23)))));
                arr_9 [i_1] [i_1] = (((var_10 ? (arr_4 [i_0] [i_1 - 3] [i_0 - 2]) : (arr_4 [i_0] [i_1 + 2] [i_0 + 3]))));
            }
        }
    }
    #pragma endscop
}
