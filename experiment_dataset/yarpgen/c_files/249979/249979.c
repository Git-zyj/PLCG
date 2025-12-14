/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_11 ^= ((((min((max(var_10, 31)), 10))) ? (~134217727) : ((65528 ? 18446744073709551602 : 27))));
        arr_3 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (min((max(373862641103962782, var_9)), (31 + 18446744073709551602)));
        var_12 *= ((((var_8 ? 6491 : 41684))) || 18446744073709551592);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_13 *= max(((16536 ? var_7 : var_3)), (96 ^ var_1));
        var_14 = (min(var_14, ((((((((max(-96, 65528))) ? ((min(33317, 63843))) : -97))) > ((var_2 ? 125 : 487753452)))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_15 = ((((((!0) ? -102 : (max(14, 3807213850))))) && (!10677671827496632857)));
        var_16 = (max(var_16, ((max((max((min(1, -22674)), (3641658631 > 5491))), (((!(3026 == -85)))))))));
        var_17 = (min(var_17, (~23040)));
        arr_13 [7] [8] = ((((((((1 ? var_7 : 13603318491199683249))) ? 274743689216 : 1))) ? ((max(var_6, 14740830723316553272))) : (max((max(var_7, 1)), (!var_5)))));
        arr_14 [i_3] = (-97 / var_1);
    }
    var_18 -= (((var_5 + 9223372036854775807) << (var_8 - 2560486791830561769)));
    var_19 = (min(var_19, (((((-0 ^ (max(var_2, 1)))) > ((((var_5 > ((max(-93, 97))))))))))));
    #pragma endscop
}
