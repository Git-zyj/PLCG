/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = ((((~(((arr_1 [i_0] [i_0]) / var_7))))) && var_6);
        var_11 = ((!((1 && (((61426 >> (7261378891685325572 - 7261378891685325566))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_12 *= (arr_3 [i_0] [i_0] [i_0]);
            var_13 = 6466968622459773547;
            var_14 = var_1;
            var_15 = (min(var_15, 57696));
            var_16 = (((((2761322274 ? (-32767 - 1) : 6742355719961718937))) ? ((((15658 / 49877) && ((!(arr_2 [i_1] [i_0] [i_1])))))) : (2044288046 || 0)));
        }
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_17 = ((((!(arr_4 [i_2 + 1] [i_2]))) ? ((((((194299980 ? var_3 : (arr_5 [i_2])))) || var_7))) : (((((max((arr_2 [12] [i_2] [12]), 234))) || (arr_0 [i_2 + 3]))))));
        var_18 *= (((((((-6466968622459773548 ? 47 : var_2)) ^ -900581440))) ? (((((min((arr_1 [i_2] [i_2 + 3]), -17149))) && (~var_4)))) : var_8));
        var_19 *= (max(var_2, (((((arr_4 [1] [i_2 - 1]) / var_4)) / (arr_1 [i_2 + 1] [i_2])))));
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        var_20 = (min(var_20, (((~((var_9 ? (arr_8 [i_3 - 2] [i_3 + 2]) : 6654020988917882747)))))));
        var_21 = (max(var_21, (((((max((arr_6 [i_3 + 2] [i_3]), 804114283))) && ((min((arr_0 [i_3 + 2]), var_6))))))));
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_22 = ((((((((((arr_11 [i_4]) ? var_6 : var_5))) && (((var_4 * (arr_9 [i_4] [i_4])))))))) / ((6466968622459773534 ? 41216 : 1297160554))));
        var_23 = (((((max(var_5, var_2))) ? (max((arr_11 [i_4]), 6654020988917882747)) : ((min(-4209883556889215486, var_6))))));
        var_24 *= var_0;
    }
    var_25 = ((var_3 ? 1073741824 : ((((((max(var_7, 1800065708))) && var_1))))));
    #pragma endscop
}
