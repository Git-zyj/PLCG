/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((-7483248953671893556 ? 4 : -127));
    var_16 = (min(var_16, ((((((((118 ? var_7 : -19)) / var_9))) ? ((((var_8 & var_6) == ((59 ? var_13 : var_2))))) : (((-26 != ((13133 ? -32390 : -355720193))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((((((((-4 ? 17824927235025519731 : 17))) ? (((arr_3 [i_0]) ? var_5 : (arr_0 [i_0]))) : (var_0 < var_2)))) == ((((((var_13 ? (arr_0 [i_0]) : var_2)) + 9223372036854775807)) << ((((((-1 ? -472658503974115798 : var_8)) + 472658503974115804)) - 6))))));
                var_18 = ((((((!(arr_2 [i_1]))))) < (((!((((arr_4 [i_0 + 1] [6]) ? 15 : (arr_0 [0])))))))));
                var_19 = ((-32762 ? 1 : 1));
            }
        }
    }
    var_20 |= ((~((((var_14 / var_7) < ((2097150 ? var_7 : var_11)))))));
    var_21 |= (((((1 / var_14) > (((-9223372036854775807 - 1) ? 3247358286 : 10)))) ? -148 : (((var_4 ? var_4 : var_12)))));
    #pragma endscop
}
