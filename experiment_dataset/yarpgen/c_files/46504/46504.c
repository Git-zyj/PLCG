/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 ^= ((((65523 ? 0 : 1)) & ((((((var_4 ? 1864010554 : -8539405297277338842))) && (9223372036854775791 || 1))))));
                    arr_6 [i_1] [i_2] = (min((arr_1 [i_2]), (((203 && (arr_3 [i_0]))))));
                    arr_7 [i_1] [i_0] [i_1] [i_2] = min((((-15 ? (arr_1 [i_2]) : -95))), (((187 / 32) ? (((1581 / (arr_0 [i_0] [i_1])))) : (arr_3 [i_2]))));
                    var_21 += (~2147483647);
                }
            }
        }
    }
    var_22 = (min(var_22, (((((max(16512753226109555128, (~var_1)))) ? (!var_10) : ((((!var_9) < var_4))))))));
    var_23 = ((((!(((var_0 ? var_8 : var_18))))) && (7080 || var_16)));
    var_24 = var_15;
    #pragma endscop
}
