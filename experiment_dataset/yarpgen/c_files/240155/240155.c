/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_8 || (-32767 - 1))))) ? ((-(max(14250250946969262861, 18446744073709551615)))) : ((((!(var_2 != var_16)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (min(((((((((arr_5 [i_2] [i_2]) >= var_1)))) >= var_2))), ((~(arr_0 [i_0 - 3])))));
                    var_20 *= var_11;
                    var_21 *= ((((((287180481 ? var_15 : -27667)))) * ((((4194272 >= 1) == -var_17)))));
                    var_22 = ((-((min(var_13, 1)))));
                }
            }
        }
    }
    var_23 = ((!(((((var_2 ? -22474 : var_5)) - var_6)))));
    #pragma endscop
}
