/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_0] [i_0 - 2] = max(((-((min(63, 242))))), var_0);
                arr_5 [i_0] [i_0] [i_0] = ((~((22447 ? var_2 : ((min(-2098202844, 48)))))));
            }
        }
    }
    var_14 = ((((min(43088, var_8) - (min(41517, 2884086875))))));
    #pragma endscop
}
