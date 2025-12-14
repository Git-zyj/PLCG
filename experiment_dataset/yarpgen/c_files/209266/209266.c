/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((193 ? (arr_2 [i_0]) : (-2147483647 - 1))) > ((26697 ? var_9 : (arr_2 [i_0])))))) | ((((78 ? (arr_1 [i_0]) : 4398046511103))))));
        var_18 ^= (arr_1 [8]);
        var_19 *= (-((4398046511077 ? (min(9998781395158154106, 39)) : var_12)));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_20 = (max(var_20, 160));
        var_21 &= (max(((max(var_2, 16393))), (min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))));
        arr_8 [i_1] [i_1] = (max(-30058, (((arr_7 [i_1] [i_1]) + (90 != 12683466780180440955)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_22 = (min(var_22, (((((max((arr_14 [i_2] [i_2] [i_3]), 0))) ? var_14 : ((min(47591, 24762))))))));
                arr_15 [i_2] [i_2 - 1] = (arr_10 [i_2]);
                var_23 += 288230376151646208;
            }
        }
    }
    var_24 = (min((max((!6524824310257935890), ((var_0 ? var_11 : 65524)))), ((((12683466780180440956 ? var_3 : var_10)) >> (var_13 + 2821)))));
    var_25 = -2147483641;
    #pragma endscop
}
