/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((((max((var_5 & var_5), var_0))) ? (min(var_4, var_0)) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] = (((((arr_3 [i_1 + 3] [13]) & (arr_3 [i_1 - 1] [i_1 - 1])))) ? (~1919783853) : 4313242053087342595);
                arr_7 [i_0] [i_0] = (max(-889094945, ((~(arr_1 [i_1 - 1])))));
                var_12 = ((((min(-6581122303825127213, (((arr_5 [i_0] [i_1] [i_1]) ? (arr_0 [i_1 + 3]) : 1125899905794048))))) ? 4313242053087342595 : (((5289969801934665057 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
