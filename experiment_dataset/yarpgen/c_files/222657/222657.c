/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_5 == ((65534 ? -32761 : 65535))))));
    var_20 = (!var_11);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (min(var_21, (((!((((arr_1 [8]) ? -2105380302 : (arr_1 [2])))))))));
        arr_2 [6] [i_0] &= (((((arr_1 [4]) ? (arr_1 [14]) : 8437579068462960261)) == (255 * 18446744073709551615)));
        var_22 = (-(arr_1 [i_0]));
        arr_3 [i_0] = ((!(((~(arr_1 [i_0]))))));
    }
    var_23 ^= 18446744073709551615;
    #pragma endscop
}
