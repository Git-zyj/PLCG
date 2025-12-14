/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) + (arr_0 [i_0])));
        var_10 = (((((((max(var_7, 11)) != 803387265)))) != (min((((-2919 & (arr_0 [i_0])))), (min(12938021934404078255, var_6))))));
        var_11 = -var_8;
        var_12 -= max((min(((12938021934404078255 ? 12938021934404078272 : 18446744073709551606)), 231)), var_7);

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_13 = (max(var_13, (((7342883499365231925 ? 4659349060509544096 : -4009415833319385880)))));
            var_14 = -21141;
            var_15 ^= (max((max((arr_6 [4]), 1044393929723633235)), var_0));
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (arr_5 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_13 [i_4] [i_3] [i_2] = (((((var_5 ? var_5 : ((var_3 ? 12938021934404078258 : (arr_7 [i_3])))))) ? ((var_2 + (arr_3 [10] [i_4]))) : (min(var_0, (((arr_7 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_4 [i_4] [i_4])))))));
                var_17 = (min(var_17, var_5));
            }
            arr_14 [i_2] [i_2] [i_3] = ((((max(28463, (arr_9 [i_2] [i_2] [i_2]))))) ? ((((!((min((arr_11 [i_3] [i_2] [i_2]), (arr_10 [i_2] [i_3])))))))) : (arr_12 [i_3] [13] [3] [3]));
        }
        arr_15 [i_2] = (arr_5 [i_2] [i_2]);
    }
    var_18 |= 842673865;
    #pragma endscop
}
