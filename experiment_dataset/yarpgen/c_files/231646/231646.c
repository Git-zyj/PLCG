/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((-765 ? ((((var_6 + 2147483647) << (((var_5 + 20493) - 21))))) : (5302444009162198660 % 748))) == 3360328649));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (((!var_4) + (((min(249, 1160392321))))));
                var_13 = (var_10 == var_5);
            }
        }
    }
    var_14 = -var_6;
    var_15 = (min(var_9, ((((min(var_4, 4610560118520545280))) ? 205 : -0))));

    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_10 [2] [i_2 - 1] = 29188;
        var_16 = ((-745694647 ? ((5223185279352928602 ? 0 : -15443)) : 13836183955189006336));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_17 = (((arr_1 [5]) > (arr_1 [i_3])));
        arr_13 [3] = 1739800484;
        var_18 = -32753;
        var_19 = (-(20786 != -21791));
    }
    #pragma endscop
}
