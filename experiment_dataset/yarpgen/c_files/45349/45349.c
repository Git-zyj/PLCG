/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((~(((((var_2 ? 1 : -110))) ? (((-918562295489966492 ? 2147483622 : -15742))) : ((3 ? 4085062260 : -1)))))))));
                var_18 = ((((max((min(var_15, var_11)), (arr_3 [i_0] [i_1])))) ? (!var_7) : var_11));
                var_19 = (max(var_19, (((!(arr_1 [i_0]))))));
            }
        }
    }
    var_20 *= var_1;
    var_21 = ((-((var_10 ? (min(var_0, var_15)) : (-32765 / -1991052058)))));
    #pragma endscop
}
