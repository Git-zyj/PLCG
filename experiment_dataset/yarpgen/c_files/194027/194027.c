/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194027
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
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (!0);
                    arr_7 [i_2] = 0;
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (((((1 * (arr_5 [i_0] [i_1] [i_1] [i_2])))) ? (max((((2732053128 ? 1562914167 : var_16))), var_11)) : ((((!(((652311746335599328 ? (arr_4 [i_0] [i_1]) : var_7)))))))));
                }
            }
        }
    }
    var_20 = (min(((var_7 ? (-904222029 + var_14) : 50165)), ((110 ? 955 : var_16))));
    var_21 = (((39905 & ((9223372036854775807 >> (1562914174 - 1562914171))))));
    #pragma endscop
}
