/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((15821793716033369553 ? 154 : 2808139777)) & (2808139777 & 164)))) ? (((~((var_11 ? var_13 : var_11))))) : var_10));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, (1486827518 / 2808139777)));
        arr_3 [1] = ((((1486827519 ? ((2808139777 ? (arr_2 [i_0] [i_0]) : 2808139777)) : (arr_2 [i_0] [i_0]))) + (((((arr_2 [i_0] [i_0]) == -1486827514))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 = (min((~-104), ((-72 & (arr_5 [i_1])))));
        arr_7 [i_1] = (min((arr_0 [i_1]), (2808139777 + 134217727)));
        var_20 += ((-7818904548312964600 ? (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_2 [i_1] [i_1]))) : (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_2 [i_1] [i_1])))));
    }
    var_21 = ((var_10 ? (((((7445494052796401374 < 2808139776) && (((104 ? 2808139777 : 68))))))) : (~-8482651384634298303)));
    #pragma endscop
}
