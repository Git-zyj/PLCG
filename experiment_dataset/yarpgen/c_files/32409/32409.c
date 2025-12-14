/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(416837692231594189, ((((var_9 || var_7) ^ (var_11 || var_3))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_16 = (((min(-416837692231594168, ((var_7 ? -3882964417218367208 : (arr_0 [i_0] [4])))))) ? ((-(arr_1 [i_0 - 3]))) : (((((-5609843084566729815 ? (arr_1 [i_0]) : 108086391056891904)) < ((var_5 ? var_6 : 416837692231594211))))));
        var_17 = ((416837692231594189 ? ((((((var_5 ? 60 : (arr_1 [i_0])))) > (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : var_10))))) : (((((arr_0 [4] [i_0]) ? (arr_1 [9]) : var_10)) + (!var_9)))));

        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            var_18 = (((-(arr_0 [i_0 - 1] [i_1 - 4]))));
            var_19 = (((arr_4 [i_0 - 1]) && ((((arr_4 [i_0 - 3]) ? (arr_3 [i_0] [i_1 + 2] [i_0 + 1]) : (arr_3 [i_0] [i_1 - 2] [i_0 - 2]))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [i_0] = (arr_4 [i_0]);
            var_20 = ((~(max((arr_6 [i_0 - 1]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 3])))));
        }
    }
    var_21 = ((max(var_9, ((var_9 ? var_10 : 1504208934)))));
    var_22 &= ((var_9 <= ((var_8 ? 89 : (var_7 || var_8)))));
    #pragma endscop
}
