/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((17047559312065762403 > 1) <= (!1399184761643789212)))) >= var_15);
    var_20 = ((~((var_0 ? 4611686018158952448 : (((var_0 ? 0 : 4294967295)))))));
    var_21 = 252;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = var_7;
                    arr_9 [i_0] [i_0] [0] [i_0] = (1399184761643789212 * 2305843009213169664);
                }
            }
        }
    }
    #pragma endscop
}
