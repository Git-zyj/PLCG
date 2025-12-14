/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(1, (!var_0)));
    var_19 += (max((min((max(10839981543353479648, 18446744073709551615)), ((11899792061582925021 ? 6213362553000635892 : 18446744073709551610)))), ((((var_1 && var_6) > (var_9 / var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (max((arr_0 [i_1] [i_1]), ((((arr_3 [i_0] [i_0 - 1] [i_0 + 4]) ? 4294967295 : var_8)))));
                arr_6 [1] [i_1] [i_1] = -6213362553000635892;
                var_20 = (((!4294967295) ? (min(1, 5936834174696841802)) : ((((4294967290 < (((!(arr_3 [13] [i_1] [i_1]))))))))));
            }
        }
    }
    var_21 = (((min((~var_14), var_8)) ^ ((min(-644302934, ((var_3 ? var_1 : var_10)))))));
    #pragma endscop
}
