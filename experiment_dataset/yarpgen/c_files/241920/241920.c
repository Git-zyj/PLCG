/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 += ((((((((-3461203637749483472 ? var_19 : var_15))) ? (arr_3 [i_0]) : ((var_3 ? 7 : -3754631806249481614))))) ? (3658446711 == var_2) : (((8346578285720520397 < (((-(arr_4 [8])))))))));
                arr_7 [i_0] = (((8346578285720520397 ? (arr_6 [i_0 + 1] [i_0 + 1]) : ((((arr_2 [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_3 [i_0])))))) == (arr_0 [i_0 + 1]));
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
