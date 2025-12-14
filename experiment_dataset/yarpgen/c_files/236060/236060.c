/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((min(35395, 14))) ? (min(5570291518993270924, (arr_1 [0] [i_0]))) : 234883680620367654))))));
        var_18 *= (((((-1 & (arr_3 [i_0] [i_0 + 1])))) ? (((arr_2 [4] [i_0 - 1]) ? (arr_2 [1] [i_0 + 1]) : (arr_3 [i_0] [i_0 - 1]))) : (((((arr_1 [i_0] [i_0 - 2]) && (arr_3 [i_0] [i_0 + 1])))))));
        var_19 &= min((((-(arr_0 [i_0 - 1])))), (arr_2 [2] [2]));
        var_20 -= (min((arr_2 [10] [10]), (((293389326 ? -32767 : 69)))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = ((((((arr_5 [i_1] [i_1]) ? -61 : (max(28, 11))))) ? ((((((-92 ? var_13 : -2147483645))) - (arr_5 [i_1] [i_1])))) : (min(234883680620367654, 4001577958))));
        var_21 = ((-21057 ? 1 : (((arr_4 [i_1] [i_1]) | (arr_4 [i_1] [i_1])))));
        arr_7 [5] = (max(((-(arr_5 [i_1] [i_1]))), ((min((((arr_4 [i_1] [i_1]) > (arr_4 [i_1] [i_1]))), (!var_9))))));
    }
    var_22 = ((((min((((!(-127 - 1)))), ((-96 ? 2117794212 : -1))))) ? (!var_6) : var_11));
    var_23 = var_9;
    #pragma endscop
}
