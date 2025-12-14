/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((((max(4887626310966034638, var_8))) ? var_8 : (max(181102241450780023, (arr_0 [i_0] [i_0])))))), ((-(min((arr_1 [i_0]), var_5))))));
        var_16 = (max(var_16, ((((((~((max(var_10, var_5)))))) ? (min((arr_1 [i_0]), -181102241450780022)) : (((3508118923 ? 181102241450780025 : ((min(4294967279, 5)))))))))));
        var_17 -= (((((arr_1 [i_0]) >> (!var_15))) > ((((((arr_0 [i_0] [i_0]) ? 4887626310966034652 : var_13))) ^ (arr_1 [i_0])))));
    }
    var_18 = ((((!(!var_6))) ? ((-(var_14 / 2358531133039845512))) : (((((~var_1) == (((max(var_5, var_5))))))))));
    var_19 = (min(var_19, (max(var_1, (((63 ? var_3 : var_2)))))));
    #pragma endscop
}
