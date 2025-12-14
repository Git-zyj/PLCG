/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_6 ? ((((((-17458 ? var_6 : var_2))) ? ((min(var_9, var_4))) : ((88 ? var_0 : var_1))))) : (max(((var_2 ? var_5 : 0)), (1 != 15426232179185712481)))));
    var_11 -= (2194728288256 % var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((((((!(arr_4 [i_1] [i_1]))) ? ((17161 ? var_5 : (arr_3 [i_1]))) : (((var_8 ? 6921960020179838530 : (arr_3 [i_1]))))))) || ((2566162946770459592 || ((((arr_1 [15] [i_1]) ? (arr_4 [i_1] [i_1]) : 6921960020179838530)))))));
                arr_5 [i_0] [i_1] [i_1] = (60 ? -17458 : 1);
                arr_6 [i_1] [i_1] [i_1] = var_1;
                var_13 -= ((((((((0 ? 4571497724095927244 : 13816054881887052184))) ? (-6948807904510536314 ^ var_5) : (arr_1 [i_0] [i_1])))) ? (((((min((arr_3 [20]), 0)))) * var_3)) : ((((((arr_3 [10]) / (arr_4 [14] [i_1])))) ? (((arr_2 [20] [i_0 - 1] [20]) ? -6921960020179838541 : (arr_4 [20] [i_1]))) : (~var_1)))));
            }
        }
    }
    #pragma endscop
}
