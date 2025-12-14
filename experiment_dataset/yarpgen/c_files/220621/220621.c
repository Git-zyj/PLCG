/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((~(max(-99, (~-99)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = 0;
                var_21 = ((~((min(-99, (arr_3 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_22 = (((max(32640, (arr_2 [i_2] [i_3 - 2] [i_4])))));
                    var_23 = 9223372036854775807;
                }
            }
        }
    }
    #pragma endscop
}
