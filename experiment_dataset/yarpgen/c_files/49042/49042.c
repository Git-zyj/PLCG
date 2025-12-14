/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (((-1500525829 ? 16356 : -1562283831)));
    var_19 &= (max(var_3, (min(((var_14 ? var_13 : 231)), (-1342910201 >= var_5)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [2] [i_0] = ((+(((arr_0 [i_0] [i_0]) ? 18955 : (((arr_0 [i_0] [1]) >> var_10))))));
        var_20 = (~((1 ^ (((!(arr_0 [i_0] [i_0])))))));
        arr_5 [8] [i_0] = (min((-32748 | -19708), 11));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [15] = (!-var_0);
        arr_9 [i_1] [i_1] = min(((((max(210, -15239))) << (((min(-4213704139656607494, -1562283831)) + 4213704139656607505)))), -25633);
        var_21 *= ((((min(6291456, 7)) | ((-32 ? var_13 : 1)))));
        arr_10 [i_1] = ((~(((4213704139656607463 + 155) >> ((var_0 ? var_10 : -878086835))))));
    }
    var_22 = (min(var_22, ((((((var_9 ? 536870912 : 4213704139656607476)) * (!44)))))));
    var_23 = var_8;
    #pragma endscop
}
