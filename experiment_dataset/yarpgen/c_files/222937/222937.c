/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 0;
    var_19 = -var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [0] [i_1 + 2] [i_1 + 2] = ((((((1 ? 1828809267 : 1069547520)))) <= ((-14697 ? 1 : -1))));
                var_20 *= ((((((((var_9 ? var_3 : 937646993916480794))) ? 3671807798762869759 : (((144115188075855871 ? var_12 : 2)))))) && ((max(var_16, (((1 ? 202 : var_0))))))));
            }
        }
    }
    var_21 = (((var_1 || -29365) / var_5));
    #pragma endscop
}
