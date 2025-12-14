/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((max(((189 ? var_5 : var_7)), 584875067800220356)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 -= ((244 ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) : (max(((3556134527575590538 ? (arr_0 [i_0]) : -584875067800220357)), var_2))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = (min(var_15, (((((-(((!(arr_3 [i_1]))))))) * ((((max(3556134527575590538, 14934507933506412659))) ? 4616103121178375813 : (arr_2 [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_16 = ((1990298149051061567 ? 40801 : ((((((24711 ? 38 : 28))) > -14890609546133961077)))));
                        var_17 = (((max(-98, 4294967295)) > (((1 ? ((max(var_10, var_11))) : (var_0 != var_6))))));
                    }
                }
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
