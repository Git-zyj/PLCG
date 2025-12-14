/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_2 != (var_1 != var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 &= (arr_1 [i_0] [i_0]);
                    var_17 -= (((((((!(arr_4 [i_0] [i_1] [i_2])))) != (!-9223372036854775803))) ? ((min(var_1, var_8))) : var_7));
                }
            }
        }
    }
    #pragma endscop
}
