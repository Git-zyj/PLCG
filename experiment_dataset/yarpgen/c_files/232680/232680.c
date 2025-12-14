/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1439876434645527201;
    var_11 = ((!((((!var_7) ? var_1 : (var_2 == var_7))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((min((max(-2209124608345842029, 754090563)), (!2199023251456))));
        var_13 = ((754090542 ? 18446744073709551615 : 3540876732));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_14 = ((((((arr_4 [i_1 + 1]) >> (!3540876732)))) ? ((((!(arr_3 [i_1 + 1]))))) : (((arr_5 [i_1 + 1] [i_1 - 2]) ? (arr_5 [i_1 - 2] [17]) : (arr_4 [i_1 - 2])))));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_2] = var_3;
            arr_9 [9] [i_2] [i_2] = (((((((!(arr_4 [i_1])))) == ((((arr_2 [i_2]) && -105))))) ? (min(167, (arr_2 [i_1 + 1]))) : (arr_5 [i_1 - 2] [i_2 - 1])));
        }
        arr_10 [i_1 - 2] = (((105 ? 36516 : 3144725484)));
        var_15 += ((((min(220, -106))) << (((!(arr_6 [i_1 + 1]))))));
    }
    var_16 = (var_9 >= var_7);
    #pragma endscop
}
