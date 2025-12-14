/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3491
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
    var_13 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_12);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)14))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0])), (var_8)))) : (((((/* implicit */_Bool) (unsigned short)65523)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2)))))))) ? (((arr_6 [i_0 + 1] [(short)8]) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65531))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2 - 1])))))));
                            var_15 *= ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_10)), (arr_5 [i_0] [i_1] [i_1]))))))) - (((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 23; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 24; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_23 [i_4] [(_Bool)1] [i_6] [(_Bool)1] [i_8]))));
                                arr_25 [i_4] = ((/* implicit */long long int) ((unsigned long long int) var_12));
                                arr_26 [i_4] [i_5] [i_6] [i_4] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (1950108259731441940LL)))) ? (((var_4) ^ (((/* implicit */long long int) arr_18 [(short)19] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 + 3] [i_5 - 1])))))) ? ((-(((/* implicit */int) min((arr_13 [i_6 + 1] [(unsigned char)24]), (arr_23 [i_4 + 1] [i_4] [(signed char)8] [(signed char)8] [i_4])))))) : (((((/* implicit */int) min(((unsigned short)65521), (((/* implicit */unsigned short) (short)8619))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))));
                                arr_27 [i_8] [i_4] [i_6] [i_6 - 1] [i_4] [i_4] = ((/* implicit */short) arr_12 [i_4] [i_5]);
                            }
                        } 
                    } 
                    arr_28 [i_4] [i_4] [20] = ((/* implicit */signed char) (-(((((/* implicit */int) var_0)) / (((/* implicit */int) var_9))))));
                    arr_29 [i_4] = (((!(((/* implicit */_Bool) ((arr_18 [i_4] [i_4]) - (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-114)))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                arr_36 [i_4] [15ULL] [i_4] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12)))) ? (arr_22 [i_4] [i_4] [i_6] [i_4] [12U]) : (((((/* implicit */_Bool) arr_12 [i_4] [0LL])) ? (arr_22 [i_4] [i_5 - 2] [i_6] [(_Bool)1] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_4]))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_17 [i_4] [19] [i_6 + 1] [i_9]))) ? (min((arr_35 [i_4] [i_4] [4LL] [i_4 - 1] [i_4] [i_4 + 1]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [i_4])))))))));
                                arr_37 [i_4] [i_4] [i_6] [(signed char)13] [i_6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((2979899321U), (((/* implicit */unsigned int) (short)141))))))) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_6] [i_9] [i_10])) : (((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_4])) ? (((/* implicit */int) var_6)) : (arr_18 [i_5 - 1] [i_4])))));
                                var_18 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4 + 3] [i_5] [i_4] [i_9]))) + (var_3))));
                                arr_38 [i_4] [i_5] [i_6] [(unsigned char)0] = (i_4 % 2 == 0) ? (((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_20 [i_4 - 1] [i_4] [i_4] [i_9])) + (100))))))) : (((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) arr_20 [i_4 - 1] [i_4] [i_4] [i_9])) + (100))) - (43)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_4 + 3] [i_4 + 3] [i_4] [13LL])) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_31 [(_Bool)1] [i_4 - 1])) : (((/* implicit */int) ((short) (short)114)))))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        arr_42 [i_11] = ((/* implicit */signed char) (-(arr_14 [4])));
        var_20 = (_Bool)1;
    }
}
