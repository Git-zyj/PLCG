/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_10 |= (-1805031126 | 1583704958);
                var_11 ^= 32752;
                arr_4 [i_1] [i_0] = (((232 + var_7) > var_0));
                var_12 = var_8;
                var_13 *= (((var_1 + (3557146652 != 3439099541031864205))) != var_6);
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
