/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] &= (max((arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 2]), var_8));
                var_15 &= (+(min((arr_1 [6]), (((arr_1 [i_0]) ? (arr_5 [i_1] [i_0]) : 7717235470270364894)))));
            }
        }
    }
    var_16 = (max(var_16, (!-0)));
    var_17 = (109 < var_7);
    var_18 += ((((max(16675707685124743185, 0))) && (!-6869836333594101951)));
    #pragma endscop
}
