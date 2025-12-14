/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (29 != -12);
    var_11 = (min(var_11, var_4));
    var_12 -= ((!((((!var_8) ? (!1) : var_3)))));
    var_13 = max(124, 2819930913531036991);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max(((max(var_3, (var_7 != var_4)))), (((62739 && 65535) % (arr_2 [i_0])))));
                var_14 = (((9171 ? 14587842351960461496 : (arr_4 [i_0] [i_1]))));
                var_15 = (arr_4 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
