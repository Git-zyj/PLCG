/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = ((((min((var_9 % var_2), (max(4294967292, (arr_5 [i_0] [10] [i_2])))))) ? (min(var_9, 132120576)) : (((~(!var_8))))));
                    var_11 -= (max((min(4294967292, 1927809916125483581)), var_5));
                }
            }
        }
    }
    var_12 = -var_8;
    #pragma endscop
}
