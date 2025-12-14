/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(-2294768658, 2763575379686778501);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 += min((((arr_5 [i_0 + 2]) | (arr_5 [i_0 + 3]))), ((((~18446744073709551615) && 0))));
                var_15 += ((((((arr_3 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_1 [i_0 - 1])))) ? (min((min(3132868568, 18446744073709551615)), -18014329790005248)) : ((((4738701583034402797 ? (arr_6 [i_1]) : (arr_1 [i_0]))) / ((-(arr_0 [18] [i_0])))))));
                var_16 = (0 < 4109458969474615926);
                arr_8 [i_1] [i_0] = (((((0 & ((18446744073709551615 ? 1899063949535688741 : 18446744073709551615))))) ? (arr_2 [i_1]) : 0));
            }
        }
    }
    var_17 += (((max(var_4, (max(18446744073709551615, 1805294360)))) * ((((var_6 == (var_7 % var_7)))))));
    var_18 = (max(var_18, ((var_11 ? ((((((var_4 ? var_12 : var_6)) <= 22621487)))) : var_10))));
    #pragma endscop
}
