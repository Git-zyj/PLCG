/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (var_13 <= var_18)));
                    arr_7 [i_0] [i_1] = (((~0) ? ((min(0, (arr_4 [i_1])))) : ((min((arr_4 [i_1]), (arr_0 [i_0] [i_2]))))));
                    arr_8 [i_1] = (min((!1), (max(-649838773, (0 ^ 664509263)))));
                    arr_9 [i_1] [i_1] [i_1] = (min(((((((0 ? 0 : 32767))) ? (arr_3 [6]) : (min((arr_1 [i_0] [i_0]), 65535))))), ((((max(1, 2190))) ? 3622843074742162876 : 664509263))));
                }
            }
        }
    }
    var_20 = (max(var_20, 0));
    var_21 = (max(((((((var_12 ? var_2 : 1))) ? var_6 : var_10))), var_12));
    #pragma endscop
}
