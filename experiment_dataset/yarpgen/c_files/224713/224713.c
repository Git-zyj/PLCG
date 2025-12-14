/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_5 ? var_2 : (var_5 < 0)))) ? var_8 : ((var_2 ^ (max(18446744073709551601, 32758))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((!-10333), ((((((arr_1 [i_0]) & (arr_1 [i_0])))) ? 65535 : (max(1913949913, 7646229325872017044)))));
        arr_3 [i_0] [13] = (((max(-30570, ((30 | (arr_0 [i_0] [i_0]))))) | (arr_1 [i_0])));
    }

    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1 - 2] = (arr_5 [i_1]);
        arr_7 [i_1] [i_1] = (((((arr_5 [i_1 + 2]) ? -2147483643 : (arr_4 [i_1 - 1] [i_1 - 1]))) * (arr_5 [i_1 + 2])));
    }
    var_11 = (((((max(12617075682169126793, var_9)) / var_4)) - var_0));
    #pragma endscop
}
