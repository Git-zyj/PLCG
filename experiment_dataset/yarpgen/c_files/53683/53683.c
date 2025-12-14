/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 5351;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 &= (min((max(43131, (arr_3 [i_2] [13] [i_0]))), ((var_18 ? ((min(-4316, 43107))) : ((15523 ^ (arr_3 [i_1] [i_0] [i_2])))))));
                    var_22 = ((!((!(~-15532)))));
                    var_23 = arr_7 [i_0] [i_1] [14];
                }
            }
        }
    }
    var_24 = ((~((((max(var_4, var_13))) ? var_16 : (((96879091378729439 ? 2047 : 31091)))))));
    #pragma endscop
}
