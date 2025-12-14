/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((288195191779622912 | -1) != (arr_0 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = (((((((arr_0 [i_0] [i_0]) ? ((min((arr_3 [i_0]), -1))) : (arr_0 [i_0] [i_0]))) + 2147483647)) >> (((((1 ? -26 : (arr_2 [i_0])))) - 18446744073709551585))));
        var_16 = (min(var_16, ((min((((arr_0 [i_0] [i_0]) ? ((((1 == (arr_2 [i_0]))))) : (max((arr_1 [i_0]), (arr_1 [i_0]))))), (min((arr_2 [i_0]), (((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0]))))))))));
        arr_6 [i_0] = (((min((arr_2 [i_0]), (((arr_0 [i_0] [i_0]) ? -26 : 7220453290844693730)))) % ((+(min((arr_1 [i_0]), 20606))))));
    }
    var_17 = (max(((((var_2 ? var_5 : 7220453290844693730)) | 26)), var_7));
    #pragma endscop
}
