/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (!11920865381006327123);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = ((!(arr_0 [i_0 + 1])));
            var_15 = var_6;
            arr_6 [i_1] [i_1] = ((min(11920865381006327123, 11920865381006327123)));
            var_16 = ((((((((-9223372036854775807 - 1) && var_4)) ? 5568686717486751961 : (var_3 && 50343)))) ? (min(var_5, (!66846720))) : -66846720));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_17 = (min(var_17, (((!(arr_2 [i_2] [i_0]))))));
            var_18 = (((((((((arr_2 [1] [1]) ? 16642998272 : 65519))) ? var_6 : -16642998273))) || var_4));
        }
        var_19 = (((((1 << (arr_5 [i_0 + 2] [4])))) ? ((~(13233489620348656135 % 99))) : ((((arr_4 [17] [i_0]) << (((min(var_7, (arr_8 [i_0 + 2] [i_0]))) - 42938)))))));
    }
    var_20 = (max(var_7, (!var_12)));
    var_21 = (var_0 + var_11);

    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        var_22 = 5568686717486751961;
        var_23 = ((~(((50343 > -66846720) & ((((arr_10 [i_3]) == (arr_10 [i_3]))))))));
        var_24 = ((!(arr_10 [i_3])));
        arr_11 [i_3] [i_3] = (9072855018789281486 == -66846739);
    }
    #pragma endscop
}
