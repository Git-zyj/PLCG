/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1578247976850120355;
    var_19 |= (max(((-1457026244 ? 5 : var_2)), (var_7 / 8324467586366217279)));
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-(((arr_0 [i_0]) ? (((-(arr_4 [1])))) : (max((arr_3 [i_0] [i_0]), 14116248927685153873))))));
                arr_6 [i_1] = 3443615623;
                var_21 = ((((max((arr_1 [i_1]), -112))) < var_9));
            }
        }
    }
    #pragma endscop
}
