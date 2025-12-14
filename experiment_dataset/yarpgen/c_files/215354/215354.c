/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((0 % 10503) >> (0 < 31871)));
        arr_3 [i_0] = 0;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = max((max((32767 + 1036663426), ((max(0, -10556))))), 58);
        arr_8 [i_1] = (((((min(45, 4294967295)))) > ((32762 ^ ((max(144, 4294967295)))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_12 += (min((min(3068819919, (18446744073709551615 * 298782118))), ((min(1, ((max(-10559, 33768))))))));
        arr_11 [i_2] = (max(((((1 % -9151) * ((min(-65, 1)))))), (1 - -444627221330807205)));
        arr_12 [i_2] [i_2] = max((((max(10, 4944)))), 65535);
    }
    var_13 = (((max(508644703, 825980992)) - 0));
    #pragma endscop
}
