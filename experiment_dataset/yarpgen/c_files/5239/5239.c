/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_13, var_10))) ? (var_7 ^ var_14) : (127 + 0)))) + var_5);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, ((min(5294706603352349222, 7559469241287096392)))));
        arr_2 [i_0] = ((((+(max((arr_1 [i_0]), 7559469241287096392)))) < (min((max(1, var_15)), -7559469241287096392))));
        var_18 = -536870896;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = (arr_3 [i_1]);
        var_20 = ((~(((arr_3 [i_1]) ? 6621773940384844804 : -1073741824))));
        var_21 = (arr_3 [i_1]);
        var_22 = (max(var_22, (arr_4 [i_1])));
        var_23 = ((var_11 % (((((arr_4 [7]) || (arr_4 [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        var_24 = (min(((((!var_11) && (!18446744073709551606)))), var_12));
        arr_7 [i_2] = var_14;
    }
    var_25 = ((11137 ? var_1 : ((((((var_0 ? var_5 : var_6)) > ((max(172, var_11)))))))));
    #pragma endscop
}
