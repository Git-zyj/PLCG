/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((((((var_2 ? 1358474646037845530 : var_1))) ? -var_13 : (797291318211127286 / var_13))), ((var_10 ? (((244 ? 49538 : 251))) : (min(1358474646037845548, 9223372036854775794)))));
    var_17 = (!var_5);
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 1] = ((-1358474646037845548 && ((max(((18446744073709551613 ? var_10 : -1358474646037845551)), (-5217197960909271822 & -7525626841967441754))))));
                var_19 = (arr_1 [i_0] [i_0]);
                var_20 = (var_6 ? ((51 ? var_7 : var_1)) : (arr_1 [6] [i_0]));
            }
        }
    }
    #pragma endscop
}
