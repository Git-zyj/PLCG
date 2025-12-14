/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(-2 ^ -6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [0] [i_0] = (max(((+((max((arr_4 [i_0] [i_0] [10]), var_8))))), (((arr_1 [i_1] [i_0]) ? -6 : (((!(arr_2 [i_0] [6]))))))));
                arr_8 [i_1] |= (arr_0 [i_1]);
            }
        }
    }
    #pragma endscop
}
