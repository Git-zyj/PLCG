/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));
    var_12 = ((((max((~var_8), 252))) ? (!253) : ((((var_4 & var_6) > 2137607637)))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_13 = (((((((22276 ? (arr_2 [i_0]) : (arr_0 [i_0]))) % (arr_1 [i_0] [i_0])))) ? (((3369 + (arr_1 [i_0 + 2] [8])))) : (min((((8089808087448984227 > (arr_0 [i_0])))), ((0 ? var_2 : 0))))));
        arr_4 [i_0 - 2] = 1;
        var_14 |= ((((((!var_6) ^ ((max((arr_2 [i_0]), var_8)))))) ? (min((arr_0 [i_0 - 2]), ((1 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))) : 228));

        for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
        {
            var_15 = ((max(((min(-585932138, 32758))), (max(-585932141, (arr_6 [i_1]))))));
            arr_9 [i_1] = 8156851141126769103;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
        {
            var_16 = (((arr_11 [i_0 - 2] [i_2 + 1] [i_0 - 2]) >> ((((arr_2 [i_0]) < var_7)))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_17 = (arr_0 [i_0]);
                var_18 = (max(var_18, ((6 & (arr_12 [i_0] [i_2])))));
                var_19 *= (((arr_11 [i_0] [i_0 - 1] [9]) >= (arr_14 [i_3])));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_20 = (((arr_16 [i_0] [i_0 + 1] [i_4] [5]) << (247 - 229)));
                arr_18 [i_0 - 2] [i_0] [i_2] [7] = (arr_11 [i_0 + 2] [i_0 + 2] [i_0 - 1]);
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                var_21 = (max(var_21, ((((var_6 + 1) ? (46961 + 11395012916857608925) : var_9)))));
                var_22 = (min(var_22, (arr_8 [i_0 - 1] [i_2] [i_0 - 1])));
                arr_21 [i_2] = 6;
                var_23 -= (((231 ? 0 : 22375)));
                var_24 = (((((((arr_2 [i_0]) ? (arr_7 [i_0]) : -585932133)) + 2147483647)) << (((((arr_14 [i_5]) + 4540)) - 27))));
            }

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_24 [i_0] [5] [i_2] = (((arr_12 [i_0 + 2] [i_0 - 1]) >> (32760 - 32760)));
                arr_25 [i_0] [i_2 - 2] [i_2] = ((((235 ? 53868 : 4414595612746910842)) ^ (arr_14 [i_0 + 1])));
                var_25 = (max(var_25, (((((((arr_16 [i_0] [5] [i_6] [5]) || (arr_10 [i_0])))) - (arr_0 [i_0 + 1]))))));
            }
        }
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_26 = (max(var_26, var_5));
        var_27 *= ((((((arr_26 [i_7]) != var_4))) - (((arr_26 [i_7]) % 32767))));
    }
    #pragma endscop
}
