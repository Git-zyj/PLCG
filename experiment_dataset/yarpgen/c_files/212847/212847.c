/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212847
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
                var_10 += 2305843009213628416;
                var_11 = (((((16140901064495923200 ? 2305843009213628391 : 17760232528628542061))) ? ((((~(arr_4 [i_0] [7]))) | 252)) : 0));
            }
        }
    }
    var_12 = ((((((var_3 + var_5) ? 53114 : ((var_2 ? var_7 : 1))))) || (((((var_2 ? var_2 : var_4))) && -390557750))));
    #pragma endscop
}
