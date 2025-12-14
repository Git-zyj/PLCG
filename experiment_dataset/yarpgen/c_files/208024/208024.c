/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min((((!(arr_0 [i_1 - 3] [i_1 - 3])))), ((max(var_4, -7774872906741747782))))))));
                arr_4 [i_1] [i_1] = (min(var_8, (arr_0 [i_1 - 1] [i_1 - 3])));
            }
        }
    }
    var_17 = 1873150119;
    #pragma endscop
}
