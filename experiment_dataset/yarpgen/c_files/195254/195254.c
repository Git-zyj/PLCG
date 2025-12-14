/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_6 <= 13358999816141392257) % (var_1 > -7826397073818149840)))) ? (~var_4) : ((var_0 ^ ((5347546149885226574 ? 1 : 1))))));
    var_14 = ((-((max(var_3, (var_4 || var_12))))));
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (((arr_2 [i_0] [i_0]) || ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : var_5)))));
        arr_3 [i_0] &= (min((((arr_0 [i_0]) ? 37388 : (arr_0 [i_0]))), (-341340854 || 30445)));
        var_17 *= ((((!(((var_10 ? var_7 : (arr_1 [i_0]))))))));
        var_18 = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_10)) < (arr_1 [i_0]))) ? (!8105634) : var_6);
        var_19 &= ((((((arr_2 [i_0] [i_0]) > var_9))) > (arr_2 [1] [i_0])));
    }
    var_20 = (max(var_2, 11264574221713194368));
    #pragma endscop
}
