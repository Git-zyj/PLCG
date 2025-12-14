/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 ? (((min(var_0, var_14)) << (((var_0 ^ var_4) - 265926754)))) : var_0));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? var_2 : (arr_1 [i_0])));
        arr_3 [i_0] = ((((max((max(var_1, 0)), ((23 ? 898847491 : 1))))) ? ((((((arr_1 [i_0]) ^ var_15))) ? 0 : (((1 >= (arr_0 [i_0] [i_0])))))) : ((var_6 ? var_1 : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (min((max((var_12 < var_0), (min(var_3, var_5)))), var_8));
        arr_8 [i_1] [i_1] = ((((((-4557 + 2147483647) >> (arr_5 [i_1])))) <= var_2));
        var_17 = 26370;
        arr_9 [i_1] = (!var_9);
        var_18 &= (min(65535, 62));
    }
    var_19 = 1;
    var_20 *= (max(1505, 3635));
    #pragma endscop
}
