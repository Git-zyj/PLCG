/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_19 = ((~((-7036476442694907735 + (((9223372036854775807 + (arr_1 [i_0 - 2]))))))));
        var_20 = ((~(((!(134432739178824100 || var_17))))));
        var_21 = (((!140737488355326) | (18446744073709551608 < 59)));
        var_22 = (var_11 < -var_17);
        arr_2 [5] = ((((~((~(arr_1 [9]))))) - ((-(arr_1 [i_0])))));
    }
    var_23 |= (((((7 && 17) || (0 || var_2))) && ((!(!var_1)))));
    #pragma endscop
}
