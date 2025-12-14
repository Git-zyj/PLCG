/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((min(((-101 ? var_7 : 87)), (~var_4))), ((var_7 ? (-1438823666 % var_7) : (((var_0 ? -95 : 126)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] = 1;
                    var_15 = ((-(arr_0 [i_0])));
                    arr_7 [i_0] [i_1] [2] [i_2] &= ((-((var_12 ? var_4 : 13))));
                }
            }
        }
    }
    #pragma endscop
}
