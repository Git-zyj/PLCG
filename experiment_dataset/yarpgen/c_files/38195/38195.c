/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] &= (((((((var_15 ? 30087 : var_14))) ? ((min(3646796119350857419, (arr_1 [i_0])))) : (min(-7030604036327102280, var_16)))) + ((((max(var_13, (arr_0 [i_0]))))))));
        var_20 ^= (max(((max((min(var_1, (arr_1 [i_0]))), (!6530102643635241529)))), ((-((var_14 ? var_2 : var_17))))));
        var_21 *= 7551835210634367027;
        var_22 = var_6;
        var_23 = (max(0, var_12));
    }
    var_24 = ((((min((max(13, var_1)), 1))) / 1836799409));
    var_25 = var_3;
    var_26 = ((((max(var_11, (~var_3)))) ? (((~((var_12 << (var_16 - 12417346638983961183)))))) : ((-3526333105 ? var_6 : ((6648868846426340642 >> (768634190 - 768634132)))))));
    #pragma endscop
}
