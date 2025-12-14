/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!15241861982219712880);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((55 < (arr_2 [i_0] [i_1])))) >= (arr_3 [i_0] [i_0] [i_0]))))));
                arr_4 [i_1] = (arr_3 [i_0] [i_1] [i_1]);
                arr_5 [i_1] = ((((((arr_1 [i_0] [i_0 + 1]) ? var_14 : (arr_2 [i_0 - 3] [i_0 - 1])))) ? (!var_1) : var_12));
                arr_6 [i_1] [i_1] = ((!((max((arr_2 [i_1] [i_0 + 2]), (!98054435))))));
            }
        }
    }
    #pragma endscop
}
