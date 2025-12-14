/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 &= (min(((+(max((arr_3 [i_1]), var_11)))), 63));
                var_17 = var_13;
                arr_4 [i_0] = (((((min(-1397173582, -1999352452))) ? (((!(arr_3 [i_0])))) : (((4294967278 < (arr_0 [i_0])))))));
            }
        }
    }
    var_18 = max(((((min(-17706, -2585326446270581821))) ? (-4707576356316986751 != var_8) : 3)), ((min((var_12 < var_12), (!140737488355327)))));
    #pragma endscop
}
