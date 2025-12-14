/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (max((arr_0 [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : var_10))));
                arr_6 [4] [i_1] [i_1] = ((!((min((min(var_10, 2914800517420902533)), (15531943556288649083 <= var_5))))));
                var_12 = (min(var_12, (--2914800517420902533)));
                var_13 = (max(var_13, ((((~15531943556288649074) ? (((~1) ? (((arr_4 [20] [i_0] [10]) & (arr_3 [i_0] [i_0] [i_1]))) : var_0)) : (((15531943556288649083 ? var_10 : var_4))))))));
            }
        }
    }
    var_14 = ((((((min(var_8, var_8)) ? ((((-9223372036854775807 - 1) / 2839200788))) : (18446744073709551615 / var_7)))) ? var_7 : -4));
    #pragma endscop
}
