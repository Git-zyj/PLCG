/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32619
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19980)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_6)))) ? (max((var_4), (((/* implicit */unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((arr_1 [i_0 + 3]) % (((/* implicit */unsigned long long int) arr_3 [i_0 + 2]))));
        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-2090629204) : (255))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)256)) - (((/* implicit */int) (short)19916))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_13 = (unsigned char)118;
                        var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)25)), (18348047215078348556ULL)));
                        arr_16 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 17726173427924634866ULL)) ? (var_6) : (((/* implicit */unsigned long long int) var_1)))))) ? ((~(((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1])))) : (((/* implicit */int) var_0))));
                        var_15 = ((/* implicit */unsigned long long int) (unsigned char)148);
                    }
                } 
            } 
            var_16 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_2 + 1])) == (720570645784916745ULL))));
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-16498))));
            var_17 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            arr_29 [i_1] = ((/* implicit */signed char) ((unsigned char) -5));
                            var_18 = ((((/* implicit */_Bool) ((unsigned char) arr_27 [i_1] [i_7] [i_6] [i_1] [i_7]))) ? (((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) (short)31698)), (arr_22 [i_1] [8ULL] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_7] [i_6] [i_5] [i_1] [i_1])) ? (2090629204) : (1910744130)))))) : (var_4));
                            var_19 = ((/* implicit */signed char) 17LL);
                            var_20 = ((/* implicit */unsigned long long int) (signed char)95);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-30457)) ? (((/* implicit */int) arr_25 [i_1] [i_5] [i_5] [i_5])) : (var_1))))) != (((/* implicit */int) ((((((/* implicit */_Bool) 6207836059505256781LL)) ? (((/* implicit */int) (short)-30457)) : (((/* implicit */int) (signed char)-21)))) >= (((/* implicit */int) (short)31688)))))));
            arr_30 [i_1] [i_5] [i_5] = ((/* implicit */unsigned char) ((13556754118262999408ULL) % (((/* implicit */unsigned long long int) ((int) arr_25 [i_1] [i_1] [i_1] [i_1])))));
        }
        for (int i_9 = 4; i_9 < 21; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 24; i_11 += 4) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (-7598136405962526324LL) : (((/* implicit */long long int) -2090629204))))) : (((min((((/* implicit */unsigned long long int) arr_14 [23] [i_9] [i_10] [i_11])), (arr_12 [i_11]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 13556754118262999399ULL)))))));
                        arr_39 [i_1] [i_10] [i_10] [i_11] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_32 [i_10] [i_9 + 2])) ? (((/* implicit */unsigned long long int) arr_32 [i_10] [i_9 - 3])) : (4889989955446552228ULL))));
                        var_23 = min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])) ? (var_2) : (var_7))))), (((((/* implicit */_Bool) 134217720)) ? (((((((/* implicit */int) (short)-1403)) + (2147483647))) << (((((((/* implicit */int) arr_31 [i_1] [22ULL])) + (9758))) - (13))))) : (((/* implicit */int) arr_25 [i_9 - 2] [i_11 + 1] [i_11 + 1] [i_10])))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((15957778141238232697ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))), (4889989955446552216ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_1]), (arr_38 [i_10] [i_1] [i_1] [i_10])))))))) : (((((/* implicit */_Bool) arr_19 [i_1] [i_9 + 1])) ? (arr_11 [i_1] [i_9 + 1]) : (arr_11 [i_1] [i_9 + 1])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                var_25 = ((/* implicit */signed char) max(((-(((unsigned long long int) arr_31 [i_12] [i_1])))), (((/* implicit */unsigned long long int) ((int) (+(var_4)))))));
                var_26 = ((/* implicit */int) ((433490273) <= (2147483647)));
            }
        }
        arr_42 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]);
        arr_43 [i_1] = arr_25 [i_1] [i_1] [i_1] [i_1];
    }
}
