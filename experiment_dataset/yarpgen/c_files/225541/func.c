/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225541
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
    var_16 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_4))))) ? (max((1026542286479947634LL), (((/* implicit */long long int) (signed char)18)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) var_6);
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(arr_0 [i_0])))), (min((((arr_1 [1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (signed char)-19)))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(arr_3 [i_1])))), (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_3))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (var_2)))), (((/* implicit */long long int) var_11)))))));
        var_21 -= ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)233))))), (((var_11) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (arr_4 [(short)2] [13LL]))))), (((/* implicit */unsigned long long int) var_13))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_10 [i_2] [i_2] [(short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]))));
            /* LoopSeq 3 */
            for (int i_4 = 3; i_4 < 14; i_4 += 4) 
            {
                arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_4 - 1]))));
                arr_16 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 1]))));
            }
            for (unsigned int i_5 = 3; i_5 < 12; i_5 += 4) 
            {
                var_22 |= ((/* implicit */short) ((arr_19 [i_3]) / (((((/* implicit */_Bool) var_5)) ? (arr_12 [i_5 + 1] [8LL] [i_5]) : (((/* implicit */long long int) 3909640095U))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_12))));
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 14; i_6 += 4) 
                {
                    for (unsigned short i_7 = 3; i_7 < 13; i_7 += 4) 
                    {
                        {
                            arr_24 [i_3] [i_3] [8U] [(signed char)0] [i_5] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                            var_24 -= ((/* implicit */unsigned char) arr_3 [i_2]);
                            var_25 = ((((/* implicit */unsigned long long int) -7891496912149262203LL)) + (13ULL));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_3] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_14))))) : (arr_12 [i_2] [(unsigned short)2] [(unsigned short)8])));
            }
            for (int i_8 = 2; i_8 < 12; i_8 += 4) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_8])) ? (arr_19 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (var_0) : (arr_8 [i_2] [i_8])));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2] [i_8] [i_8 + 3])) ? (((((/* implicit */_Bool) 442999770U)) ? (((/* implicit */int) (unsigned short)65535)) : (var_2))) : (((/* implicit */int) var_9)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2])))))) / (arr_26 [i_9] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
                    arr_32 [i_9] [(signed char)4] [5] [i_9] = ((((/* implicit */int) var_11)) & (((/* implicit */int) var_9)));
                    var_31 = ((((/* implicit */_Bool) arr_26 [i_3] [i_8 + 2] [i_9] [i_3])) ? (arr_26 [i_2] [i_8 + 2] [12U] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1905071238U)) ? (arr_26 [i_8 + 2] [i_9 + 2] [i_10 + 1] [i_10 + 1]) : (arr_26 [i_8 - 1] [i_9 + 2] [i_10 + 1] [i_10 + 1])));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_10 + 1] [i_10 + 1] [i_10 + 1] [9U] [i_10 + 1])) & (((/* implicit */int) ((((/* implicit */_Bool) (short)31727)) && (((/* implicit */_Bool) -5619035533608481285LL)))))));
                        arr_35 [i_10 + 1] [(short)4] [i_10] [i_10] [6ULL] [i_9] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)5639))));
                    }
                    arr_36 [12LL] [i_2] [i_2] [(unsigned char)0] [i_8 + 3] [i_9] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9 + 1] [i_8] [i_3]))) : (var_12)))));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_34 = ((/* implicit */int) (unsigned short)21);
                    var_35 -= ((/* implicit */_Bool) (+(arr_29 [i_8 + 1] [i_8] [i_11 + 1] [i_11 + 1])));
                }
                var_36 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-14))));
            }
        }
        for (int i_12 = 1; i_12 < 11; i_12 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_13 = 2; i_13 < 11; i_13 += 4) 
            {
                arr_47 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) (-2147483647 - 1));
                var_37 += ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_2] [(signed char)1] [i_12 + 2] [i_12 + 2] [i_2] [(_Bool)1])))))));
            }
            var_38 = ((var_2) << (((((arr_12 [1U] [i_12] [i_12 - 1]) + (4842249839154121745LL))) - (23LL))));
            var_39 += ((/* implicit */_Bool) ((16833640200197713618ULL) << (((((/* implicit */int) (signed char)110)) - (106)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_40 = ((/* implicit */_Bool) arr_5 [i_2]);
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) 15)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (short)511))));
        }
    }
    var_42 = ((/* implicit */short) var_13);
}
