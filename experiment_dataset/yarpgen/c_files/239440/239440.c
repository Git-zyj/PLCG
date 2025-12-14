/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(((var_1 ? (var_8 + var_2) : (1 ^ var_2))), ((var_11 ? (0 > -27893) : var_10)));
    var_13 *= ((min(((8340464221922766047 ? -496222839 : 30)), -var_6)));
    var_14 = (max(var_3, var_11));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_15 = var_4;
        var_16 = (max(var_16, ((((((((2265355033 ? 255 : 13097)) + 26216))) ? (min((arr_0 [i_0 - 2]), ((max(226, (arr_0 [i_0])))))) : ((var_5 ? var_10 : (arr_0 [i_0 + 2]))))))));
        arr_2 [i_0] [13] = (max((arr_1 [i_0]), (((13193653318477301626 << var_7) ? ((max((arr_1 [10]), (arr_0 [i_0 - 2])))) : (arr_0 [i_0])))));
        var_17 += ((+(min(((var_1 ? (arr_1 [9]) : var_1)), (((var_5 ? 255 : var_10)))))));
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        var_18 = (((((~((var_6 ? var_5 : 5))))) ? ((((var_9 / var_10) > (arr_4 [i_1 - 4] [i_1 - 1])))) : ((-((max(var_2, var_6)))))));
        var_19 = ((~(((((var_2 ? var_6 : var_11))) ? var_2 : ((((-2147483647 - 1) + 20789)))))));
        arr_5 [i_1 - 4] = var_1;
        var_20 = (((((((var_3 ? var_6 : var_6))) >= ((var_8 ? 1 : var_1)))) ? (1409 ^ var_10) : (((arr_4 [i_1 - 3] [i_1 + 2]) ? (arr_4 [i_1 + 1] [i_1 - 4]) : (arr_4 [i_1 + 2] [i_1 - 3])))));
        var_21 = (((((((min(var_3, var_9))) ? 8794464367341192052 : ((var_4 ? var_11 : 624289234501284999))))) ? (((~(min(34, var_8))))) : (((((159 ? (arr_3 [i_1 + 2]) : 8340464221922766052))) ? ((12185012944183559254 ? var_4 : 1985483612185674776)) : (arr_4 [i_1 - 4] [i_1 - 1])))));
    }
    var_22 = (max(var_22, var_6));
    #pragma endscop
}
