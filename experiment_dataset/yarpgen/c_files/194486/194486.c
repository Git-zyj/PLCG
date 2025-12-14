/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(var_11, ((min(var_8, 12059))))), ((((!12059) & var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_15 *= ((min(((~(arr_3 [i_0]))), 4294967295)) - (((((arr_2 [6] [i_1]) || ((((arr_4 [7] [i_1]) / (arr_4 [i_0] [i_1])))))))));
                var_16 = (1107221030 > ((((((10414210613305222694 <= (arr_1 [i_1])))) | -93))));
            }
        }
    }
    var_17 = (max(var_17, ((max(var_2, (((1697508877 ? 12048 : -1697508885))))))));
    #pragma endscop
}
