/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((min(1, (min(224, 2832312819593507660))))) ? (((min(65535, 647073451)) | ((min(65535, (arr_1 [i_1])))))) : (((arr_1 [i_1]) * (arr_1 [i_0]))))))));
                var_16 = ((-2147483647 ? ((min(((16120391382280006160 ? var_3 : 3548235135)), (((var_8 ? (arr_2 [i_1]) : -152176514)))))) : (arr_0 [i_1] [i_0])));
            }
        }
    }
    var_17 = (min(var_17, (((((var_9 + 6) ? (min(0, var_8)) : var_3))))));
    var_18 = (((((!var_5) == var_13)) ? var_6 : (~var_10)));
    #pragma endscop
}
