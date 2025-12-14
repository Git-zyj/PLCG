/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_5, var_2))) ? (((max(-1, 2087275906)))) : var_2);
    var_15 = ((~(min((~var_5), var_2))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (var_10 <= 2087275906);
        arr_3 [i_0] = -45;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 *= ((-(((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : -1))));
            arr_8 [i_2] = (((arr_1 [i_1 - 1]) == ((((arr_4 [i_2] [i_1 - 1]) ? 55 : 24720)))));
            var_17 ^= (min(((max(56, 695707444))), ((-2087275906 ? 3912833368 : 966138459))));
            var_18 = (max(var_18, 0));
        }
        var_19 = ((!(((~(min(2146435072, (arr_6 [i_1] [i_1]))))))));
    }
    var_20 = var_9;
    #pragma endscop
}
