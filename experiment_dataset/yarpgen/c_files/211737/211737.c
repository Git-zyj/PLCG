/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_12 = ((-((((min(29, 18446744073709551615))) ? ((((!(arr_3 [i_2] [i_0]))))) : ((9 ? 53139 : (arr_5 [i_0] [4] [i_2])))))));
                    var_13 = ((~(arr_4 [i_0] [1] [7] [i_1])));
                }
            }
        }
    }
    var_14 = ((((((0 & var_8) ? (9223372036854775807 | var_5) : (1835738687 ^ var_7)))) ? (((1 ^ ((27644 ? var_11 : 29))))) : (((-1954773695 ^ var_11) ^ var_6))));
    var_15 = (min(var_15, (((((((var_0 ? 0 : 12396))) % (min(var_6, var_8))))))));
    #pragma endscop
}
