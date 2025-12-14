/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((((-9223372036854775807 - 1) ? 9223372036854775789 : 9223372036854775789))) ? 201 : ((2305280059260272640 ? var_1 : var_0)))), var_3));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_1 [i_0] [i_0]);
        var_13 = ((arr_0 [i_0]) ^ (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))));
        var_14 |= ((((((1 ? (arr_0 [i_0]) : (-9223372036854775807 - 1)))) && (arr_0 [i_0]))));
        var_15 = (((((((min(-1360226296, 65524))) ? (arr_0 [i_0]) : 65535))) ? ((((~-9223372036854775794) ? ((-(arr_1 [i_0] [i_0]))) : -2147483628))) : ((77 ? -3 : 7461467521432280933))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_16 = (i_1 % 2 == zero) ? ((((-9223372036854775806 && 1) << ((((39350 - (arr_2 [i_1]))) - 2772061427687208313))))) : ((((-9223372036854775806 && 1) << ((((((39350 - (arr_2 [i_1]))) - 2772061427687208313)) - 10684664428716134083)))));
        var_17 = (((-9 - -6072) ? (((arr_3 [i_1]) ? 18543 : (arr_2 [i_1]))) : (((arr_3 [1]) + (arr_2 [i_1])))));
        var_18 = (((arr_2 [i_1]) ? ((-97 ? 32747 : 1)) : 18));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_6 [i_2] [i_2] = (((((((2199381222175990388 ? 12492775403700629125 : 9223372036854775789))) ? (((arr_5 [i_2]) ? (arr_4 [i_2]) : 1)) : (arr_5 [i_2]))) & (arr_4 [i_2])));
        var_19 = (((min((arr_5 [i_2]), (arr_5 [i_2]))) && (((arr_5 [i_2]) && (((1 ? (arr_2 [i_2]) : 5953968670008922467)))))));
        var_20 -= (((1 ? 16247362851533561219 : 1)));
    }
    #pragma endscop
}
