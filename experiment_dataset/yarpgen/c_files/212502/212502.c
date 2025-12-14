/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-127 - 1) >= (var_3 >> 0))) ? ((12403476345915336842 ? (!128) : (!1))) : (((((max(1, var_9))) < var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((-(((-(arr_8 [i_2] [i_0 - 1] [i_0 - 1])))))))));
                    var_21 ^= (((min((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_8 [i_0 - 1] [0] [i_0 - 1]))) ? 1 : var_13));
                }
            }
        }
    }
    #pragma endscop
}
