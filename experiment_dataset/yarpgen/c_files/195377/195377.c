/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (var_18 ? var_14 : ((((arr_5 [i_0] [i_1 + 1]) ? var_8 : ((((arr_2 [i_1 + 2]) ? (arr_4 [i_0] [22] [i_0]) : 115)))))));
                var_20 ^= (arr_4 [i_0] [i_0] [20]);
                var_21 = var_7;
            }
        }
    }
    var_22 = var_5;
    var_23 = (max(69457633, var_6));
    var_24 |= ((max(140, 1502889538)));
    #pragma endscop
}
