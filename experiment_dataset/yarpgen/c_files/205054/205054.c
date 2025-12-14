/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = (((((var_5 ^ 16887) & (((arr_1 [i_0] [i_0]) ^ 16887)))) <= (((((arr_0 [1] [i_0]) & 46)) & (((arr_1 [15] [i_0]) & 16887))))));
        arr_2 [i_0] |= (((((((arr_1 [i_0] [i_0]) & var_0)) | (8734 | -43))) < ((((((var_7 - (arr_1 [1] [13])))) || ((((arr_0 [i_0] [i_0]) - 46205))))))));
    }
    var_11 = (min(var_11, (((((((-16888 || var_9) - (var_8 <= var_4)))) / ((((var_7 << (var_6 - 23))) >> (((-16888 + 2147483647) >> (var_3 - 59298))))))))));
    var_12 = ((((((8734 < 27) && (var_6 + 56802)))) << (((((var_1 | var_2) ^ (var_8 | var_2))) - 1216495714))));
    #pragma endscop
}
