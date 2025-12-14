/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((18446744073709551615 < (-127 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_1]);
                var_16 = (max((((((!(arr_2 [i_0]))) || ((min((arr_4 [i_1] [i_0] [i_0]), 105)))))), var_3));
            }
        }
    }
    var_17 = (min(var_17, -var_8));
    var_18 = var_6;
    var_19 = (((~var_12) ? (+-72057593501057024) : ((((-122 || ((min(var_6, var_12)))))))));
    #pragma endscop
}
