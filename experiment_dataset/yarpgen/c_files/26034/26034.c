/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!((min(8090996724180832964, var_4))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 = ((((var_0 > (arr_2 [i_0])))));
        var_16 = (max(var_16, (arr_1 [i_0])));
        arr_3 [i_0] = max(var_4, ((max(8090996724180832964, -79))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                var_17 = (min(31395, -107));
                arr_8 [6] |= (arr_5 [13] [13]);
                arr_9 [i_1] [i_2] = var_3;
            }
        }
    }
    #pragma endscop
}
