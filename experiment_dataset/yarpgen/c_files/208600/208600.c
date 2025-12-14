/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((((0 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) - (arr_0 [i_0])))));
        var_15 -= (((-5652017561140941955 | -8632123446316678800) ? (min((~1), (var_6 | 4294967295))) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : ((4294967282 ? 1 : 0)))))));
        var_16 = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) | (159 >= 1)));
        var_17 = ((((max(-4304409961069717907, (arr_0 [i_0])))) ? ((((((0 ? (arr_2 [1]) : 1))) % -var_12))) : (((arr_1 [i_0]) ? ((-24979 ? 13478928235918717954 : 115)) : var_6))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [11] [i_1] [i_2] [i_4] [i_3] [i_4] = (min((((arr_5 [i_2] [1]) ? 4294967290 : (((53414 ? 170 : 1))))), 1));
                        var_18 = ((1 ? ((~((var_7 ? 4967815837790833661 : 14)))) : 51005));
                        var_19 = (min(((((((-30542 ? 0 : 30516))) > (min(var_5, 0))))), (arr_5 [i_3] [i_4])));
                    }

                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_5] [i_3] [i_2] [i_1] = (((var_10 ? (arr_6 [i_1 + 2] [i_5 + 3] [i_2 - 4]) : 1)));
                        arr_18 [i_5] [i_1 + 1] |= ((var_2 ? (!1) : ((-23569 + (arr_8 [i_1] [i_2 + 1] [i_3])))));
                    }
                }
            }
        }
        var_20 = (max(13478928235918717969, 4398046511040));
    }
    var_21 = 13478928235918717979;
    #pragma endscop
}
