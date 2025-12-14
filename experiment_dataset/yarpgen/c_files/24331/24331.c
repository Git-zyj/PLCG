/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((~(!var_12)))) ? var_0 : ((-(arr_1 [i_0 - 1])))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_17 = (max(var_17, (((((((arr_2 [i_0]) ? (arr_1 [i_0]) : -7036765547005814320))) ? (((((((arr_3 [i_0]) ? (arr_1 [i_0]) : 131))) ? (arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2]) : 1525524676))) : (((((arr_2 [i_1]) != 2392671426)) ? var_8 : 956523453081386158)))))));
            var_18 = (((arr_3 [i_1]) < (((!3924518032) ? (min(201, -956523453081386158)) : (arr_2 [i_1 + 2])))));
            arr_7 [i_0] = ((~(((((126 | (arr_5 [i_0 - 2] [i_0] [i_1 + 2]))) == (((1 && (arr_1 [i_0])))))))));
            var_19 = (arr_0 [i_0] [i_1]);
            var_20 = (min(var_20, 9034));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = (arr_2 [i_0 - 1]);
            arr_11 [i_0] [i_2] [i_2] = (1790508687069032653 ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_6 [i_0 - 1] [i_0 - 1]));
            var_21 = 1;
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            var_22 = (min(var_22, ((((min((arr_15 [i_3] [i_4] [i_4]), 15549)) << (min((arr_17 [i_4 - 1] [i_4]), (var_11 + 2392671426))))))));
            var_23 = var_8;
            var_24 = (((arr_13 [i_3]) - ((var_13 ? (min(var_11, var_16)) : -161))));
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            var_25 = (max(var_25, (arr_20 [i_3] [i_5 + 3] [i_5 + 1])));
            var_26 = (~(arr_12 [i_3] [i_3]));
        }
        arr_21 [i_3] = ((((((min(116, -70353896))) ? (var_6 ^ var_12) : (((arr_12 [i_3] [i_3]) ? 9 : 8945299697220631528)))) == (!5)));
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        var_27 = (((min((arr_22 [i_6]), (((1902295865 < (arr_23 [i_6 + 3])))))) < ((((var_14 && (arr_24 [i_6 + 2])))))));
        arr_25 [i_6] = (((((((63506 ? (arr_22 [i_6]) : (arr_22 [i_6 + 1]))) + (((1525524662 ? (arr_23 [i_6]) : 198)))))) != ((-3647730014076023272 ? -435000964 : -7837025457726145371))));
    }
    var_28 = (min((var_12 && var_0), (min(var_0, (~198)))));
    var_29 = -435000975;
    #pragma endscop
}
