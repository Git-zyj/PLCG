/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min((((((max(var_9, 32748))) <= (var_10 & 1)))), (((2147483647 ^ -32748) & (max(16, var_2))))));
        var_12 = (min((var_1 - var_4), ((-(max(-17, 1614370164))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            {
                var_13 = (max(var_13, var_6));
                var_14 = (((~17098643521095051181) ? ((((993613770 ^ 111) > (var_11 & var_8)))) : ((((!1) >= (max(0, var_6)))))));
            }
        }
    }
    var_15 = (min((((-((max(30, 33)))))), ((-32741 | ((-993613770 ? 11593638852887427885 : 1))))));
    #pragma endscop
}
