/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((min(7651297867644754865, var_6)) / var_10)) | (var_5 >> var_7)));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = (min((max(((var_4 ? var_4 : var_7)), (7651297867644754865 == var_5))), ((var_10 ? var_8 : (~7651297867644754865)))));
        arr_3 [i_0] [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = ((min(((min(var_5, 4294574156))), (arr_5 [i_1] [i_1 + 1]))));
        var_13 = (min(var_13, ((((((min(1, -7651297867644754866)) >= var_3)) ? ((((((-7651297867644754866 + 9223372036854775807) >> var_1))) ? var_10 : (((min(var_8, var_3)))))) : ((((arr_4 [i_1 - 1]) ? var_0 : var_2))))))));
    }
    var_14 = (max(var_14, ((((min(var_4, 2)) + (((-(max(var_9, 2697882797))))))))));
    #pragma endscop
}
