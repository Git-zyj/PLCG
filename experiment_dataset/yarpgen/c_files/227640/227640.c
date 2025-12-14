/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((17686 ? (((!(~var_0)))) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((max(2372922153627794088, (max((arr_9 [i_0] [i_0] [i_0]), var_13)))) - var_8);
                    var_17 -= ((~(arr_9 [i_0] [i_1] [i_2])));
                    arr_11 [i_1] [i_1] = ((var_3 <= (4294967295 || var_11)));
                    var_18 = (2372922153627794088 + 8719705124905236690);
                }
            }
        }
    }
    var_19 += 4294967295;
    var_20 = (((var_13 <= -18) + (((var_2 || ((max(var_3, var_1))))))));
    #pragma endscop
}
