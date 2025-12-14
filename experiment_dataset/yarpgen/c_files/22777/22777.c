/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((var_11 >= ((var_1 ? 0 : var_16)))) ? var_11 : (((max(var_6, var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (1 + ((~(arr_1 [i_0] [i_0]))));
                    arr_6 [i_1] = ((!((679 < (((!(arr_4 [i_2] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
