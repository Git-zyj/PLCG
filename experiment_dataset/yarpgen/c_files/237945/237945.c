/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((!(arr_1 [i_0 - 3]))))));
                var_19 = (((max(18446744073709551600, var_6))));
                arr_5 [i_0] [i_0] = (arr_3 [i_1 + 1] [i_0]);
            }
        }
    }
    var_20 = (max(var_20, ((((min((var_15 >= var_4), (max(var_4, 15)))) == var_15)))));
    var_21 = ((((max((var_15 || var_15), (max(var_3, var_13)))))) / (((((var_8 ? var_5 : var_7))) ? ((4721463320813253804 ? 18446744073709551611 : 18446744073709551592)) : ((var_12 ? var_2 : 816015519384573958)))));
    #pragma endscop
}
