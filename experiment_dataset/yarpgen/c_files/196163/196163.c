/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!var_6) && (!var_8))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = -359773933;
                var_12 = (min(var_12, (((23 ? (((((var_8 ? (arr_1 [18]) : (arr_3 [4] [4])))) % (arr_0 [8]))) : ((((var_8 || ((max(var_2, (arr_1 [12])))))))))))));
            }
        }
    }
    #pragma endscop
}
