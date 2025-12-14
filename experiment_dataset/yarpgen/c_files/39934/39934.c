/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (((149 ? -1311286617 : 253)));
                arr_6 [i_0 - 1] [i_1] [i_0] = (max(2147482624, 3372810139));
                var_11 &= ((max((var_1 && 9223372036854775807), 9223372036854775788)));
            }
        }
    }
    var_12 = (((255 ? -11685 : -116072266)));
    #pragma endscop
}
