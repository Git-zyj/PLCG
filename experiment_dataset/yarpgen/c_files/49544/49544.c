/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((((var_5 != var_4) % var_8))) & (var_6 % var_1))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 19)))) ^ (arr_0 [i_0]))));
        var_14 = (min(var_14, ((((arr_0 [8]) ? (arr_0 [8]) : ((((38926 ^ 70) ? ((107 ? -32386 : 15349)) : ((-91 ? -61 : 0))))))))));
        var_15 = (((((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) || ((((arr_1 [7] [1]) ? (arr_1 [1] [1]) : (arr_0 [i_0])))))) ? ((((((((arr_0 [i_0]) ? (arr_1 [i_0] [4]) : (arr_1 [i_0] [i_0])))) || (arr_0 [i_0]))))) : ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [0]) : (arr_0 [i_0])))));
        var_16 = (max(var_16, ((((arr_0 [2]) ? (((max((arr_1 [i_0] [i_0]), (arr_0 [1]))) << ((((arr_0 [8]) < (arr_1 [i_0] [i_0])))))) : (((((arr_1 [i_0] [0]) || (arr_0 [4]))) ? (((arr_0 [0]) % (arr_0 [6]))) : (arr_1 [i_0] [i_0]))))))));
    }
    var_17 = (((((var_0 >= var_3) ? (var_11 != var_3) : (var_8 || var_3))) << ((((((var_8 ? var_1 : var_4)) * (var_6 & var_5))) - 3314302438))));
    var_18 = var_9;

    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = (((((arr_2 [i_1] [i_1]) || ((min((arr_3 [i_1]), (arr_2 [i_1] [i_1 - 1])))))) ? (arr_2 [i_1] [i_1 - 1]) : ((((arr_2 [i_1] [i_1]) || (arr_2 [i_1] [i_1 - 1]))))));
        var_20 = ((((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_2 [i_1] [i_1]))) << ((((arr_3 [i_1]) && (arr_2 [i_1] [i_1])))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_21 = (((arr_2 [i_2] [i_2 - 1]) ? ((((arr_5 [i_2]) < (((arr_4 [i_2 - 1]) ? (arr_4 [i_2]) : (arr_6 [i_2])))))) : (((((arr_6 [i_2]) || (arr_3 [i_2]))) ? (((arr_6 [i_2]) - (arr_5 [i_2]))) : ((((arr_5 [i_2]) != (arr_6 [i_2]))))))));
        var_22 = ((((((((((arr_5 [i_2]) != (arr_5 [i_2])))) >= ((((arr_2 [i_2] [i_2]) > (arr_3 [i_2])))))))) == ((min((arr_4 [1]), (arr_3 [i_2]))))));
        arr_7 [i_2] = -27517;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_23 = ((((15349 / -1344432121) ? (max(-1728042024, 1728042016)) : 1)));
        var_24 = (i_3 % 2 == 0) ? ((((((((((arr_4 [0]) << (((arr_3 [i_3]) + 143))))) ? ((((arr_6 [i_3 - 1]) < (arr_5 [i_3])))) : ((((arr_3 [i_3]) || (arr_3 [i_3]))))))) < (arr_2 [i_3] [11])))) : ((((((((((arr_4 [0]) << (((((arr_3 [i_3]) + 143)) - 76))))) ? ((((arr_6 [i_3 - 1]) < (arr_5 [i_3])))) : ((((arr_3 [i_3]) || (arr_3 [i_3]))))))) < (arr_2 [i_3] [11]))));
        var_25 = (min(var_25, (((max((min((arr_9 [i_3]), (arr_5 [2]))), ((((arr_5 [6]) < (arr_10 [8]))))))))));
        arr_11 [i_3] = (((((((arr_4 [i_3]) % (arr_9 [i_3 - 1]))) - ((((arr_10 [i_3]) ? (arr_5 [i_3]) : (arr_5 [i_3])))))) < (((((((arr_4 [i_3]) & (arr_10 [i_3])))) ? (arr_9 [i_3]) : (((arr_8 [i_3]) / (arr_2 [i_3] [i_3]))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_26 = (arr_13 [i_4]);
        arr_14 [i_4] = (((arr_13 [i_4]) <= (arr_13 [i_4])));
    }
    #pragma endscop
}
