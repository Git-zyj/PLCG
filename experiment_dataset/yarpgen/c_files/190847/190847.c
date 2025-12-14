/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((!((!(!var_2))))))));
    var_20 = (var_15 % ((((!var_8) != 45669))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 |= 46693;
                var_22 = (max(var_22, (((!((min((!var_10), (arr_1 [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
