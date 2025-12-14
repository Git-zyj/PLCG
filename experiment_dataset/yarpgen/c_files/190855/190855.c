/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((-((-(max(var_19, 7834054502792692563))))));
                    var_21 = ((((max(((18446744073709551615 ? 13 : 12622900745975921867)), (((18302563051723583159 ? var_2 : var_5)))))) ? ((-(min((arr_2 [i_0]), var_16)))) : ((~((var_3 ? (arr_8 [i_0]) : 18446744073709551602))))));
                }
            }
        }
    }
    var_22 = (((~(~4501400604114944))));
    var_23 ^= (((((((max(var_16, var_14))) ? (!0) : (~var_18)))) ? ((((var_12 ? var_4 : var_8)))) : ((~(max(var_4, 0))))));
    var_24 = ((var_8 ? 10254 : (max(var_12, 16717942544714872515))));
    var_25 = (min(var_25, (((!-18446744073709551615) ? ((min((max(var_17, var_12)), (max(var_18, var_19))))) : (((var_1 ? var_18 : var_9)))))));
    #pragma endscop
}
