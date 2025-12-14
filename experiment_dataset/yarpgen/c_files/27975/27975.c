/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = min(((max((arr_1 [i_0 - 1]), 1))), (min((arr_0 [i_0 - 1] [i_0 + 2]), var_13)));
        var_17 = (max(var_17, (((!((((arr_0 [i_0 + 1] [i_0]) ? 1 : (arr_2 [i_0 + 1] [i_0 + 1])))))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_18 = ((~(arr_1 [i_0])));
            var_19 = 106;
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            arr_10 [i_2] [i_2] [i_2] = ((((((((min(24615893544029701, 94))) ? (-2112328239 + 37681) : (!37668))) + 2147483647)) << ((((var_13 ? (227 & var_4) : ((min((arr_8 [i_2]), (arr_3 [i_3] [15])))))) - 64))));
            arr_11 [i_2] = ((-((37672 ? 122 : -1836825916))));
        }
        var_20 &= var_3;

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_14 [i_2] [i_4] = ((((+(((arr_3 [i_4] [i_4]) + -120))))) ? ((max(((-(arr_7 [i_2]))), ((((arr_8 [i_2]) < -4273071219075132168)))))) : (max((((-639414975 ? 248 : (arr_6 [i_4])))), ((3026882454 ? -114 : var_1)))));
            var_21 = (((-639414975 ? (arr_12 [i_2] [i_2]) : (arr_2 [i_2] [i_4]))));
            arr_15 [i_2] [i_4] [i_4] = var_0;

            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                var_22 = 67;
                arr_19 [i_2] = ((0 ? 113 : ((((((arr_13 [i_5] [i_5] [i_5]) ? (arr_3 [i_2] [i_5]) : (arr_17 [i_2] [i_4] [i_5])))) - (arr_13 [i_5 + 1] [i_5] [i_5])))));
                var_23 = (((min((arr_0 [i_5] [i_4]), 1)) != ((((arr_2 [i_2] [i_4]) / 4243863953248364116)))));
                var_24 = (((arr_9 [i_5 + 2] [i_5 + 2] [i_5]) >> (((((arr_13 [i_5 + 1] [i_5 + 1] [i_5]) ? (arr_13 [i_5 - 1] [i_5 + 2] [i_5 + 2]) : (arr_13 [i_5 + 2] [i_5 - 1] [i_5]))) - 12486835486634058736))));
            }
            arr_20 [i_2] [i_2] [i_2] = ((((+((min((arr_5 [i_2] [i_4]), (arr_8 [i_2])))))) << (!639414975)));
        }
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_25 [i_2] [i_6] = (((arr_4 [i_2]) > -639414975));
            var_25 = -98967624;
            var_26 -= ((62277 << (((((min(9981612640983494274, 1))) || (arr_3 [i_2] [i_6]))))));
        }
        arr_26 [i_2] &= (arr_2 [i_2] [i_2]);
    }
    var_27 = var_4;
    #pragma endscop
}
