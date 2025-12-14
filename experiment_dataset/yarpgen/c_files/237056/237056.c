/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-1482134010 <= 2047);
    var_16 = -3300265459223419015;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 ^= max(22677, var_14);
                    var_18 *= 679;
                    var_19 ^= 1;
                    var_20 |= 690986019;
                }
            }
        }
    }
    var_21 = (max(((var_13 ? -var_14 : (min(var_3, var_1)))), ((((42846 - 2016) + 1)))));
    var_22 = ((((((var_13 & var_10) ? 254 : var_0))) ? 22677 : var_3));
    #pragma endscop
}
