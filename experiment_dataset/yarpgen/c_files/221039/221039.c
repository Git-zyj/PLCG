/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 ^= 1892296610417349353;
                    var_21 = (max(var_21, ((((((!var_16) < (((arr_3 [i_0]) * var_10)))) ? (!var_4) : ((-(arr_7 [i_2 - 1] [i_2 - 1] [17] [i_2 - 1]))))))));
                }
            }
        }
    }
    var_22 = (min(var_22, var_13));
    var_23 = var_6;
    #pragma endscop
}
