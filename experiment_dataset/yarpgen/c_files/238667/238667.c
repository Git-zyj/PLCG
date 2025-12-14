/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_4;
    var_11 = ((23806 ? (!var_1) : var_8));
    var_12 = (min((((var_3 ? ((2003782940 ? var_6 : -10826)) : -10826))), ((310651628 ? (((min(var_9, var_2)))) : 3153936512))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = (((arr_1 [i_1 - 2]) ? ((var_7 ? (arr_1 [i_1 - 1]) : 4)) : ((4294967285 ? 906269013 : (arr_1 [i_1 + 2])))));
                arr_9 [i_0 + 3] [i_0] [i_0] = ((var_9 == ((var_9 ? (!var_6) : -var_8))));
            }
        }
    }
    #pragma endscop
}
