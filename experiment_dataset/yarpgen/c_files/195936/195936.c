/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(4294967295, var_13)));
    var_17 = (max(var_5, ((((7 ? 3332559297 : -601963348))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] [6] = ((((~(-2147483647 - 1))) << (1303076652 - 1303076652)));
                arr_5 [i_0] [i_1] = ((min((arr_1 [i_0] [i_1]), ((((arr_2 [i_1]) ? -1384318917 : 1))))));
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
