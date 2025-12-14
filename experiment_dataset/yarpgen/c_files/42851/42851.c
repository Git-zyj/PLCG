/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(45, 248));
    var_19 = (((((((max(17, 33526)))) != (max(-7402842292050160176, var_13)))) ? ((min(32776, 86))) : var_12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 819361148;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = (min((((arr_5 [i_0] [i_0]) > 136)), (arr_6 [i_0] [i_0])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_21 = 134217727;
                arr_9 [i_0] [i_1] = -13433621444699807759;
            }
            var_22 = (min(var_22, (arr_6 [i_0] [i_1])));
        }
        arr_10 [i_0] [i_0] &= ((((32767 & ((839224636942830627 ? (arr_6 [i_0] [i_0]) : 31917)))) / ((min(var_8, (arr_0 [i_0] [i_0]))))));
        var_23 &= (4269380007 ? (arr_4 [i_0] [i_0]) : ((min(((53 ? var_10 : (arr_5 [i_0] [i_0]))), ((min(0, 12746)))))));
        var_24 = (max(var_24, (1 % 8465437100829510783)));
    }
    var_25 = ((var_2 * ((((max((-127 - 1), 16616512662914774617))) ? (~1) : -848923499))));
    #pragma endscop
}
