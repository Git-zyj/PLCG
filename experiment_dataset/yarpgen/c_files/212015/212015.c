/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = arr_7 [i_0];
                    var_19 = (!1706120893);
                    var_20 = (i_0 % 2 == 0) ? (((arr_6 [i_0] [i_1] [i_0] [i_2]) >> ((((-(arr_6 [i_0] [i_0] [i_0] [i_0]))) + 1398692974)))) : (((arr_6 [i_0] [i_1] [i_0] [i_2]) >> ((((((-(arr_6 [i_0] [i_0] [i_0] [i_0]))) + 1398692974)) - 493455954))));
                }
            }
        }
    }
    var_21 = ((((max(2251799813685248, var_6))) ? var_0 : ((max((!1953976988), var_13)))));
    #pragma endscop
}
