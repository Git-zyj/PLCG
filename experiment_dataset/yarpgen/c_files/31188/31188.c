/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((((((((-127 - 1) + (-127 - 1)))) ? (arr_5 [i_0] [i_1]) : 1577098090)) << (((47304 && ((((arr_1 [i_0]) & var_8))))))));
                arr_7 [i_0] [i_0] [i_0] = (((max(3039472367214827417, 0)) == var_3));
            }
        }
    }
    var_19 = (18446744073709551615 == 166);
    #pragma endscop
}
