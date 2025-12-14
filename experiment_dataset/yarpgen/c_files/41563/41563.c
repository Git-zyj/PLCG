/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((-1 ? 2 : 31)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) ? ((~(arr_0 [i_0]))) : ((-(arr_1 [i_0])))));
        var_21 = (max(var_21, (arr_1 [i_0])));
        var_22 = (max(var_22, (((((arr_1 [i_0]) ? 8999 : ((max((arr_1 [i_0]), (arr_0 [i_0])))))) / ((((arr_2 [i_0] [i_0]) ? 196 : (arr_1 [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_23 = (min((~-31811), 13374));
        arr_5 [4] [i_1 + 1] = ((arr_4 [i_1]) ? ((min((!var_2), (arr_4 [i_1 - 1])))) : ((((max(var_14, 8309207601761877340))) ? ((var_0 ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1]))) : -8309207601761877315)));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((-1 ? 0 : -8309207601761877325))) / (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_8 [i_2]))));
        var_24 ^= (32767 * 3);
        arr_10 [i_2] [i_2] = (((min((((8999 ? 255 : 8))), (arr_6 [i_2] [i_2]))) - (((31829 * 1983) ? 88 : (((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_8 [i_2])))))));
        var_25 = (max(var_25, ((((arr_6 [18] [18]) | 34)))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (arr_12 [i_3])));
        var_27 = ((6839113051103498830 + (arr_11 [16])));
        var_28 = ((((((arr_12 [i_3]) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [i_3])))) ? ((-(arr_6 [i_3] [i_3]))) : (arr_6 [i_3] [i_3])));
    }
    #pragma endscop
}
