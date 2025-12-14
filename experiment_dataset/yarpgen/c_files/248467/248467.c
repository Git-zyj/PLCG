/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((min((!var_1), var_0))), (min((((var_9 ? var_2 : 23145))), (min(var_6, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((max(var_1, (min(26, var_1)))));
                var_18 *= (min((((((((arr_1 [i_0] [i_0]) ? var_14 : (arr_2 [0])))) && (arr_6 [i_1] [1])))), ((-(arr_4 [0])))));
            }
        }
    }
    var_19 &= 25;
    #pragma endscop
}
