/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(var_3, 0))));
    var_17 = var_7;
    var_18 = (((~var_5) <= ((var_6 ? ((3638975595 ? var_3 : -11)) : (5060205063359142745 != var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((var_5 ? (((arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]) / (((arr_7 [4] [i_1] [i_1] [i_0]) / (arr_2 [i_0] [i_0]))))) : ((((var_4 && (!var_15)))))));
                    var_19 = ((~((~(min(15001, 655991701))))));
                    var_20 = (i_1 % 2 == zero) ? (((((((!(arr_6 [i_0] [i_1] [i_2] [i_1]))) >> (((arr_7 [i_0 - 1] [i_1] [5] [i_1]) - 5609758503607526211))))))) : (((((((!(arr_6 [i_0] [i_1] [i_2] [i_1]))) >> (((((arr_7 [i_0 - 1] [i_1] [5] [i_1]) - 5609758503607526211)) + 861576679555774223)))))));
                }
            }
        }
    }
    #pragma endscop
}
