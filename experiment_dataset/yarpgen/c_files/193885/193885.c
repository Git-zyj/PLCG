/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (18446744073709551615 | (6217398337679071541 && -6326319724333541885));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_0] = (min((((arr_4 [i_0] [i_0] [i_0]) ? 1 : (arr_4 [i_0] [i_1] [i_1]))), (((65535 ? 184 : 2397855746)))));
            var_12 = (min((((var_4 != -9223372036854775797) ? ((-(arr_4 [i_1] [i_1] [i_0]))) : -1961994335)), (((min((arr_4 [i_1] [i_1] [2]), (arr_4 [i_0] [i_1] [i_1]))) * (arr_5 [i_1])))));
        }
    }
    var_13 = (min(var_13, var_10));
    #pragma endscop
}
