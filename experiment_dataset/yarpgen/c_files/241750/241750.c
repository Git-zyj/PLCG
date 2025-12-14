/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!((((~31185) ? ((var_11 ? 9632381806438782919 : 31185)) : var_0))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 ^= ((2147483647 ? 2147483647 : ((min((arr_1 [i_0]), (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 += (((((67 ? (arr_2 [i_0]) : 2147483647))) ? (min((var_12 / 31161), var_5)) : (~var_13)));
            var_20 = (var_5 ? (((!31173) + 14227)) : ((((max(var_15, 109)) <= (var_2 && var_9)))));
        }

        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            arr_6 [i_2] = (max((~0), -0));
            arr_7 [i_2] [i_2] = ((((min((arr_3 [i_2 + 1] [i_2 + 3]), -120))) ? -933761760 : var_3));
            arr_8 [i_2] = (max(var_3, (max(31185, 0))));
            var_21 = ((((max((arr_4 [i_2]), var_4))) ? -1015131888 : ((-(45 / 8485083080448162272)))));
        }
        var_22 = (((max(2228646738878461018, var_3)) / (arr_2 [i_0])));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_23 *= (((((arr_10 [i_3]) ? (min(var_0, 1738501386)) : ((((arr_9 [i_3]) ? (arr_10 [i_3]) : 3))))) < ((((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_10 [i_3]))))));
        var_24 = (min((min((arr_10 [i_3]), var_2)), (arr_10 [i_3])));
        var_25 = -1015131880;
    }
    #pragma endscop
}
