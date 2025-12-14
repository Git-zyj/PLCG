/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((~((((min(var_16, var_5)) <= (!var_5))))));
    var_20 += ((((!(~var_17)))));
    var_21 = (max(var_21, (((-(!8388096))))));
    var_22 += ((-(~var_14)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_23 *= ((-((-(min(var_8, 2690056213))))));
                    var_24 = (min(var_24, ((((((!(arr_3 [i_0 - 1])))) - (8388096 % 255))))));
                    var_25 = ((-((((((91 >> (var_0 - 12589015895930587446)))) < (max(var_18, (arr_6 [i_0] [9] [0]))))))));
                    var_26 = ((((max((((arr_3 [i_2]) >> (48 - 39))), (arr_0 [i_0] [16])))) || (((((max((arr_0 [i_2 - 1] [i_0]), 18))) & (25814 & -8388097))))));
                }
            }
        }
    }
    #pragma endscop
}
