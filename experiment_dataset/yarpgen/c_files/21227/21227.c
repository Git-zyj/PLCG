/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min((arr_5 [i_0] [i_1]), (min((((arr_5 [i_1] [i_0]) & 10)), (~30019)))));
                var_18 = (max(1, -6872));
                var_19 = (arr_3 [i_0]);
                arr_6 [i_0] = ((!((min(((((arr_2 [i_1 + 1]) ? 4294967295 : 65521))), (max(13505, var_11)))))));
            }
        }
    }
    var_20 = (!var_15);
    var_21 = (min(var_21, (((var_12 ? 496 : var_6)))));
    var_22 = (var_11 == var_2);
    #pragma endscop
}
