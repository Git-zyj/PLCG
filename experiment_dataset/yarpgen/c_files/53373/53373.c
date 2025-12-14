/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_8 || var_3) ? var_10 : var_16)) <= var_16));
    var_20 &= var_12;
    var_21 = ((65535 ? (((65515 - 0) * 12286570301371936225)) : 0));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 ^= (max((((!(arr_1 [i_0])))), 1));
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (((arr_0 [i_0] [i_1]) | ((min(48, (arr_2 [i_0] [i_0]))))));
            var_23 = ((!((max(1, 255)))));
        }
    }
    var_24 |= (((((~(~-103)))) || (-var_8 ^ var_3)));
    #pragma endscop
}
