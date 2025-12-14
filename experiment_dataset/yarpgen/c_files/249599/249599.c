/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((min(var_4, ((var_11 ? 398874177 : var_9))))) ? 25 : var_8));
    var_14 = var_4;
    var_15 -= ((((max(-32720, 576179277326712832))) ? 7704913403660134506 : (min(((var_2 ? -531574462 : -7704913403660134535)), (((var_8 ? var_8 : 0)))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_16 = ((-(((arr_0 [i_0 - 1] [i_0 + 2]) ? 68719476735 : 33554431))));
        arr_2 [i_0] [i_0] = 1;
        var_17 = (min((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_8)), ((-1 ? (arr_0 [i_0 - 2] [i_0 + 2]) : (arr_0 [i_0 - 2] [i_0 + 2])))));
        var_18 = ((((((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0 + 2])))) || (((9619336016529859978 ? (arr_0 [i_0] [i_0]) : 4261412864))))))) >= (((25 ? 18014398509481984 : 68719476735)))));
        var_19 ^= ((((arr_1 [1]) ? ((var_6 ? (arr_1 [0]) : 15248758578355170648)) : (~var_8))) ^ (((max(247, 65510)))));
    }
    var_20 = ((1338861165 ? var_0 : ((7693331454634287591 ? var_9 : var_3))));
    #pragma endscop
}
