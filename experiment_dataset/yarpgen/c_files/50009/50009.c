/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((((var_1 || (arr_0 [5]))) || var_7)) ? (((((min(-1724827466, 8967887886343605902))) || (arr_0 [i_0])))) : ((((arr_4 [i_1]) || (arr_4 [i_1]))))));
                var_11 = (min(var_11, (arr_1 [i_0])));
            }
        }
    }
    var_12 = (max(var_12, var_9));
    #pragma endscop
}
