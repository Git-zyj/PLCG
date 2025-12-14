/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_1] &= ((max(((max(25880, 1150448648))), 929846865)) >> (63 - 63));
                    var_20 = ((((max((arr_4 [i_1 - 1] [i_1 - 1] [i_2]), (arr_4 [i_1 - 1] [i_1 - 1] [6])))) ? (min((arr_4 [i_1 - 1] [i_1 - 1] [i_2]), (arr_4 [i_1 - 1] [i_1] [i_1 - 1]))) : (arr_4 [i_1 - 1] [i_1] [i_2])));
                }
            }
        }
    }
    var_21 = (max((((((var_18 ? var_12 : 622790854468104798))) && (~var_18))), (var_6 == var_1)));
    var_22 = (max(var_22, var_9));
    #pragma endscop
}
