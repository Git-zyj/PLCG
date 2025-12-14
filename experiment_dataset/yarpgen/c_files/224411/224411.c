/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (!var_17);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 |= (~4294967288);
                    var_22 = (max(var_22, (63 * 4294967288)));
                }
            }
        }
    }
    var_23 = (max(var_23, var_11));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_24 |= (((-(arr_10 [i_3]))));
                var_25 = (((((~(arr_11 [i_3] [i_3])))) ? ((7 << (((arr_8 [i_3]) - 262138497)))) : ((((arr_9 [i_4]) | (arr_9 [i_3]))))));
                arr_13 [i_3] [i_3] [i_4] |= var_13;
            }
        }
    }
    #pragma endscop
}
