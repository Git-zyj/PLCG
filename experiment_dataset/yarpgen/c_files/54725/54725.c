/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = (max(-2702, 2274));
        arr_2 [i_0] |= ((((max(var_4, (arr_0 [i_0 + 1] [i_0])))) ? ((min((max(6904075879414813460, 42367)), (var_2 == 1751670722)))) : (((((var_6 ? (arr_1 [i_0]) : (arr_1 [7])))) ? ((21 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0 + 1]))) : (arr_0 [i_0] [i_0])))));
        var_12 ^= var_3;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (((((((-7190939906858886881 ? 17077 : var_4))) ? ((var_1 | (arr_4 [i_1]))) : var_10)) | (arr_3 [i_1])));
        var_13 = (max(var_13, (min((((((1410732591 ? (arr_3 [i_1]) : var_10))) ? (min(var_9, var_8)) : ((((arr_4 [i_1]) ? (arr_3 [0]) : 34884))))), var_5))));
        arr_6 [i_1] = 252;
        var_14 = (min(var_14, (arr_3 [i_1])));
    }
    var_15 = (min((((((2558062175 ? var_0 : var_10))) ? (((var_2 ? var_3 : 4514601670565752311))) : var_9)), var_5));
    var_16 = ((-((max(var_2, var_4)))));
    var_17 = (max((((var_3 ? var_0 : (min(1, 871365492))))), ((var_8 ? ((var_0 ? var_6 : var_2)) : (2543296561 % var_2)))));
    #pragma endscop
}
