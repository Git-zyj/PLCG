/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_11 > (-1345717085 && 1048568))), var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += 54248;
                var_19 = (((!-11) && (arr_1 [i_1 - 1] [i_1 - 1])));
                var_20 = ((((((((var_16 ? 1665176115 : 44097))) ? (((var_0 < (arr_0 [i_0] [i_1])))) : -1665176131))) ? var_1 : ((((min((arr_2 [1] [1] [i_0]), var_2))) ? (!var_7) : (~252)))));
            }
        }
    }
    #pragma endscop
}
