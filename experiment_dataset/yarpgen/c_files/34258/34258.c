/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_11 & 13081622672567360564) * ((16121034109997413998 & (((min(var_14, 0))))))));
    var_16 = var_5;
    var_17 = (((((var_3 ^ (var_13 & var_12)))) ? 26100 : 38308));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (min(((((max((arr_0 [i_0]), var_8))) ? (((((arr_0 [i_0]) <= (arr_2 [i_0]))))) : (max(var_13, var_10)))), (((var_3 ? 1 : -745)))));
        arr_4 [i_0 + 1] [i_0 + 1] = ((39435 >> (((arr_0 [i_0 - 1]) - 83392896))));
    }
    var_18 = (max((max((max(var_9, 0)), ((var_9 << (-1605967174703310951 + 1605967174703310987))))), (((254 == (max(-2268688386859506576, -26703)))))));
    #pragma endscop
}
