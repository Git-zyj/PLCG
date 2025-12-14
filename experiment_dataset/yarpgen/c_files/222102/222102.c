/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 ? (((var_7 ? var_8 : -var_2))) : ((var_5 ? 2097151 : ((min(1417413850, 65408)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(((min((arr_0 [i_0]), (arr_2 [i_0 + 2])))), (max((arr_0 [i_0]), -6296718914122909188))));
                var_12 |= (min(17642, (max(17660, 2955344324))));
            }
        }
    }
    var_13 &= 1381726075;
    #pragma endscop
}
