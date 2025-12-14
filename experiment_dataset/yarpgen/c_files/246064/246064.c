/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_7, ((min(-var_2, -var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((!((min((!var_16), (max((arr_0 [i_1] [i_1]), var_13)))))))));
                    var_21 = (max(var_21, ((((arr_4 [3] [i_2] [i_2]) == var_18)))));
                }
            }
        }
    }
    var_22 = (max(var_4, ((~(3284980289 ^ var_0)))));
    #pragma endscop
}
