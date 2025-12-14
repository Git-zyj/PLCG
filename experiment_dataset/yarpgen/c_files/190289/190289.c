/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((min(20298675393857074, 207)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (min(-573756380, (max((!var_2), ((-(arr_3 [5] [i_1] [i_2])))))));
                    var_15 = (min((max((max(201, 1578837114)), -var_13)), ((~((~(arr_2 [1])))))));
                }
            }
        }
    }
    #pragma endscop
}
