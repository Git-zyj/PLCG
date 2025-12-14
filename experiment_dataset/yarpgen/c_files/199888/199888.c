/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, -200388953476633581));
        var_21 = (min((max((((arr_0 [i_0]) / (arr_2 [i_0]))), ((min(200388953476633576, 1596581000752411137))))), ((min((arr_0 [i_0]), (arr_2 [i_0]))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [6] &= ((((arr_0 [i_0]) * (max((arr_2 [i_0]), (arr_3 [i_0] [16] [i_0]))))));
            var_22 += ((~((((((-85 ? 84 : 60417))) == 200388953476633581)))));
            arr_7 [i_1] = (min((arr_1 [i_0]), (max((arr_0 [i_1]), (((arr_2 [i_1 - 1]) / (arr_4 [i_0] [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = (max((((arr_2 [i_0]) ? (arr_5 [i_2] [i_2]) : (arr_2 [i_0]))), ((((arr_4 [i_0] [i_0]) ? ((max((arr_5 [i_0] [i_2]), (arr_8 [i_0] [9])))) : ((max((arr_10 [i_0]), (arr_4 [i_0] [i_2])))))))));
            var_24 = ((-89 ? (arr_4 [i_0] [i_2]) : (min((max((-32767 - 1), 8730927787931272843)), -84))));
            var_25 = (max((((arr_1 [i_0]) ? (max(68, (arr_1 [i_0]))) : (arr_8 [i_0] [i_0]))), (((((max((arr_3 [i_0] [i_2] [i_2]), (arr_10 [i_0])))) / (arr_3 [i_0] [i_2] [i_0]))))));
            arr_11 [i_0] [i_2] = ((((((!((max(4031257986, (arr_4 [i_0] [14])))))))) <= ((min((arr_2 [1]), 0)))));
        }
        var_26 = ((min(1273559363103514176, (arr_2 [i_0]))));
    }
    for (int i_3 = 2; i_3 < 6;i_3 += 1)
    {
        arr_14 [i_3] = (arr_3 [i_3] [i_3] [i_3]);
        var_27 = (arr_12 [i_3]);
        var_28 = ((((arr_10 [i_3]) | (arr_4 [i_3 - 1] [i_3 - 2]))));
    }
    var_29 = 94;
    #pragma endscop
}
