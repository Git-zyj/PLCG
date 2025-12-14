/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((!-6335961314378799690) > var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 -= (-var_10 || 6335961314378799683);
                arr_5 [i_1] [i_1] &= ((!(var_3 > 4294967269)));
                arr_6 [i_1] [i_0 + 1] &= ((((((((var_0 ? (arr_4 [i_1] [i_1] [i_0 + 1]) : (arr_3 [i_0] [i_1])))) ? 0 : -65535))) ? (max((arr_0 [i_0]), (6834142150279568538 + -6335961314378799700))) : -6335961314378799683));
            }
        }
    }
    var_13 -= var_0;
    #pragma endscop
}
