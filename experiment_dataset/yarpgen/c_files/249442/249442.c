/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((-1969921336 ? var_8 : 78))) ? (((var_12 ? var_12 : var_8))) : 9354858830011961669))) ? ((((((4289524310 ? var_7 : var_4))) ? var_6 : ((var_5 ? var_6 : var_3))))) : ((-var_4 ? ((var_5 ? -78 : var_0)) : (((9091885243697589946 ? var_9 : var_3)))))));
    var_15 = (((((-((var_4 ? 130 : var_2))))) ? (((~((var_10 ? -3817749550970921513 : var_1))))) : (((((var_5 ? var_10 : 105))) ? ((var_4 ? var_10 : var_13)) : ((var_1 ? 6442793191854988711 : var_7))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 = ((((((var_11 ? 16 : var_11)))) ? (((((-(arr_3 [i_0])))) ? (arr_1 [i_0]) : ((-56 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1]))))) : ((((1 ? var_13 : var_1))))));
        var_17 -= (((((((((arr_3 [i_0]) ? 20164 : (arr_2 [i_0])))) ? ((~(arr_0 [i_0] [i_0]))) : (~var_4)))) ? ((var_12 ? ((-(arr_0 [i_0 - 1] [i_0]))) : (!var_11))) : (((!(((var_2 ? 9091885243697589950 : var_5))))))));
        var_18 = ((((((arr_1 [i_0 - 1]) ? (!9354858830011961661) : (~var_1)))) ? ((((((arr_0 [i_0 - 2] [i_0 - 2]) ? 56 : (arr_3 [i_0 - 1])))) ? -var_5 : 12734)) : (((!(!var_8))))));
    }
    #pragma endscop
}
