/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(-var_0, ((min(-23144, 32768))));
    var_14 = var_9;
    var_15 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (max(23143, (max(((max(-22039, 662885956))), (~992681288721695927)))));
                    var_17 = (((((((min((arr_5 [i_0] [i_1 + 1] [i_0]), (arr_6 [i_0] [i_0]))))) * (arr_3 [i_0]))) >> ((((arr_2 [i_0]) >= ((-6001523091286490421 ? (-32767 - 1) : -23144)))))));
                    var_18 -= ((!((!(!977291166248734451)))));
                    arr_7 [1] [1] [i_0] [i_0] |= ((32767 > ((var_8 ? var_3 : (arr_6 [16] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
