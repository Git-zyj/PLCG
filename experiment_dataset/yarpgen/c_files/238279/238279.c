/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 <= (((max((!var_5), (max(var_6, 10))))))));
    var_13 = (max(var_13, (((-(-76 % var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 *= (((((11446424462577562945 / var_2) | (arr_6 [2] [2] [2] [2]))) >= ((max(var_8, (arr_6 [i_0] [i_0] [i_1] [i_2]))))));
                    var_15 = (2305843009211596800 <= 1250912794);
                }
            }
        }
    }
    var_16 -= var_9;
    #pragma endscop
}
