/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [0] &= var_14;
        arr_4 [2] = (max((((arr_2 [10]) ? (arr_2 [12]) : (arr_2 [0]))), (arr_2 [1])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1 - 1] = (max(((((arr_5 [i_1] [i_1]) < (arr_6 [i_1 - 1])))), (-21756 ^ 16019504277018506030)));
        arr_9 [i_1 - 1] [i_1 - 1] = (((arr_7 [i_1 - 1]) & (max(2020398846, (arr_7 [13])))));
        arr_10 [i_1] [i_1] = ((-(((arr_5 [i_1] [i_1 - 1]) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1])))));
        arr_11 [13] [i_1] = (((arr_7 [i_1 - 1]) <= (((((-831 & (arr_7 [1])))) ? (arr_5 [i_1 - 1] [i_1 - 1]) : 801))));
    }
    var_20 = (max(((max((var_5 <= var_0), (~var_3)))), (min((-1470961401 > -841), (min(var_7, 274877905920))))));
    #pragma endscop
}
