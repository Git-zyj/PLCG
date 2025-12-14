/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27647
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
    var_15 = var_14;
    var_16 = ((short) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (short)-11235))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [11LL] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_1 [i_0])))))) >= (((((/* implicit */_Bool) 12582912U)) ? (((/* implicit */long long int) var_5)) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)11235))) & (9223372036854775803LL)));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_1] [i_3] = ((long long int) var_3);
                    var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (-6750289869437539637LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63834))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_3] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_3] [i_0] [i_0]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)11238))) : (9223372036854775803LL)))))));
                    var_18 = ((/* implicit */unsigned short) (((((!((_Bool)1))) ? (7892260616399202117ULL) : (((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (short)11229))))))) | (((/* implicit */unsigned long long int) -9223372036854775806LL))));
                    arr_11 [i_0] [i_1] [i_0] [i_3] = (-(((/* implicit */int) min((arr_5 [i_0] [i_2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3998493426282820559ULL)))))))));
                }
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)61))))), (var_11)));
                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) * (14448250647426731049ULL))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (var_12))) >> (((((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64151))))) - (4498864306011507302LL))))))));
                arr_14 [(unsigned short)2] [i_1] [i_0] = ((/* implicit */signed char) arr_7 [(_Bool)0] [i_2] [12LL]);
            }
            var_19 = ((/* implicit */short) (+(((/* implicit */int) (short)-11238))));
        }
        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) > (((/* implicit */int) arr_18 [(short)1] [(short)1] [(short)1]))));
                var_21 = ((unsigned short) ((long long int) (_Bool)1));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_22 = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))) < (var_8)))));
                            arr_27 [i_0] = (!(((/* implicit */_Bool) (unsigned short)25242)));
                            var_23 = ((arr_23 [3] [i_7] [3ULL] [(signed char)6] [i_7] [(signed char)6]) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_23 [i_7] [i_6] [i_0] [i_0] [i_4] [i_0])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4)))))));
            }
            for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    for (long long int i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)69))));
                            arr_36 [i_0] [i_8] [i_0] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [(unsigned short)11] [(unsigned short)12] [i_0] [i_9] [(unsigned short)12] [i_10]))))))), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_0] [i_8] [i_10 + 2])), (var_5))))))));
                            arr_37 [i_0] [i_0] [i_8] [(unsigned char)9] [i_10] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)16128)) : (((/* implicit */int) (_Bool)1))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_1));
                        }
                    } 
                } 
                arr_39 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_26 [(signed char)1] [i_4] [i_0] [i_4] [i_8] [(signed char)13]) % (((/* implicit */int) arr_23 [i_0] [i_4] [i_8] [i_0] [i_8] [12LL])))) << (((max((((/* implicit */long long int) (unsigned short)44559)), (arr_1 [i_0]))) - (44544LL)))))) ? ((+(((/* implicit */int) arr_18 [i_8] [i_4] [i_0])))) : (((/* implicit */int) var_1))));
            }
            var_26 = max((((/* implicit */long long int) max((((/* implicit */int) (short)-4772)), (11)))), (((arr_16 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))) : (var_3))));
            arr_40 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(-533927449996228643LL))), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [1U] [(_Bool)1] [i_4])))))) >> (((((/* implicit */int) arr_9 [i_0] [(signed char)0] [i_4] [i_4])) + (124))))) : (((/* implicit */int) (!((_Bool)1))))));
            var_27 = ((/* implicit */int) (!((!(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) > (-9223372036854775806LL)))))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_4] [9] [(_Bool)1] [(short)13]))) + (var_8)))) ? (((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [(unsigned short)12] [(unsigned short)8] [i_4] [(short)1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_4]))))));
        }
        /* vectorizable */
        for (signed char i_11 = 1; i_11 < 10; i_11 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-21773)) + (((/* implicit */int) (unsigned char)61))));
            arr_45 [i_0] [(unsigned short)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_11 + 4] [i_11 + 3] [i_11 + 4])) ? (((/* implicit */int) arr_7 [i_11 + 4] [i_11 + 3] [i_11 + 4])) : (((/* implicit */int) arr_7 [i_11 + 4] [i_11 + 3] [i_11 + 4]))));
        }
        arr_46 [(unsigned char)0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
        var_30 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) & (14448250647426731039ULL)))));
    }
    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
    {
        arr_49 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)61)) ? (4884766996319211984LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
        var_31 = ((/* implicit */_Bool) arr_22 [(short)4] [i_12] [i_12] [i_12]);
    }
    var_32 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) <= (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-1))))))));
}
