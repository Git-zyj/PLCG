/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((~(arr_4 [i_0] [i_1])))) ? (arr_5 [i_0]) : (arr_5 [i_0])));
                var_14 ^= ((((((((92 ? var_7 : var_6))) ? (~0) : 14411731786473092894))) ? ((var_8 ? (arr_5 [i_0]) : (((9223372036854775805 * (arr_0 [i_0])))))) : ((((!(((21 ? 1 : var_12)))))))));
                arr_7 [i_0] [i_0] = ((+(((~9223372036854775800) ? 1 : -1191717070))));
                var_15 = (min(var_15, (((1 ? 65535 : (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_16 = ((!((((((var_1 ? var_5 : 53290))) ? 1 : 22769)))));
    #pragma endscop
}
