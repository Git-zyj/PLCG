/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_14 = (((12276286635089965017 / 116) * (((((min(var_2, var_10)))) * (-9223372036854775807 - 1)))));
        var_15 = ((-(~21831)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = (((min(-1, -1)) + ((max(20364, var_6)))));
        arr_6 [i_1] [i_1] = (((((var_1 ? (arr_4 [3]) : 18446744073709551607))) ? ((var_3 ? var_9 : (arr_4 [i_1]))) : ((-116 ? (arr_4 [i_1]) : (arr_4 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 ^= min(((137438953471 ? ((min((arr_4 [i_2]), (arr_4 [i_2])))) : (((arr_4 [i_2]) % (arr_8 [i_2] [i_2]))))), 14671371141910608452);
        var_18 = (-57 && 0);
        var_19 = ((((((arr_7 [i_2] [8]) ? ((var_2 + (arr_3 [i_2] [i_2]))) : (~-497179205)))) ? 32767 : (((arr_5 [i_2]) ? 7838 : (arr_7 [i_2] [i_2])))));
    }
    var_20 = ((var_0 % (((~-111) ? var_9 : (~var_7)))));
    #pragma endscop
}
