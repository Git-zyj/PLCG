/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213854
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-2613928115472798452LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) < ((~(arr_1 [i_0]))))))) : (min((max((-7657322129830209519LL), (arr_1 [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)79)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) : (((arr_1 [i_0 - 1]) << (((((/* implicit */int) arr_0 [i_0 - 1])) - (145)))))));
        arr_3 [(unsigned char)2] [i_0] |= ((/* implicit */int) (unsigned short)56922);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_1]), (arr_4 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (arr_5 [i_1]))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) % (arr_5 [i_1])))) ? (((/* implicit */int) ((unsigned char) 7))) : ((+(arr_5 [i_1]))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (var_3))));
            var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56934)) ? (arr_5 [i_1]) : (arr_5 [i_2])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_13))))), (max((((/* implicit */unsigned long long int) 2147483647)), (18446744073709551606ULL)))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1] [(signed char)12]))) ? (max((arr_10 [19LL] [i_3]), (((/* implicit */long long int) arr_11 [i_1] [i_1] [(unsigned short)6] [i_3])))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_1])) && ((_Bool)1))))));
                var_22 = ((/* implicit */unsigned int) ((long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)56934)))))));
                var_23 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 2131617871)) && (((/* implicit */_Bool) 1762376041)))) || (((/* implicit */_Bool) 996189526U)))) ? (((((/* implicit */_Bool) (unsigned short)61693)) ? (max((11087508133662789760ULL), (((/* implicit */unsigned long long int) (unsigned short)18972)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8224233531191449996ULL)) ? (((/* implicit */int) (unsigned short)8611)) : (((/* implicit */int) (unsigned short)8614))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3837)) ? (((/* implicit */int) (unsigned short)61889)) : (((/* implicit */int) (signed char)-123))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (2725298176957875458ULL)))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) var_11)), (arr_11 [(unsigned short)16] [(unsigned short)16] [i_2] [i_1])))))));
                            arr_17 [i_1] [(_Bool)1] [i_3] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) 3861465707U)), (2815308944588633857LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_5] [i_3] [i_2] [9LL])), (arr_15 [i_1] [i_1] [i_1] [i_5] [i_1] [i_1] [i_1]))))) : (arr_16 [i_2] [i_2] [i_2] [i_5])))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (signed char)31))));
        }
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)25040)))) ? (arr_20 [(_Bool)1] [(unsigned short)15] [(_Bool)1]) : (arr_20 [i_1] [i_1] [i_1])));
            arr_21 [i_1] [i_6] = ((((/* implicit */_Bool) ((arr_5 [i_1]) / (arr_5 [i_1])))) ? (min((arr_8 [(_Bool)1]), (arr_8 [i_1]))) : (((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */long long int) arr_5 [i_1])) : (arr_8 [i_6]))));
        }
        arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)30121)) ? (((/* implicit */unsigned int) 1285566282)) : (544164546U)));
        var_27 = ((/* implicit */unsigned long long int) var_13);
    }
    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned long long int) var_8);
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_24 [i_7])) : (((/* implicit */int) arr_24 [i_7]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_24 [i_7]))))) : (((/* implicit */int) min((arr_11 [i_7 - 3] [i_7 + 2] [i_7 + 3] [i_7 - 4]), (((/* implicit */unsigned short) arr_24 [i_7])))))));
    }
    for (signed char i_8 = 1; i_8 < 23; i_8 += 3) 
    {
        var_30 = ((/* implicit */signed char) arr_25 [i_8]);
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((signed char) (signed char)13))), (((((/* implicit */_Bool) (unsigned short)56927)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_10))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 18446744073709551599ULL)) && (((/* implicit */_Bool) (signed char)-73))))))))));
            arr_30 [i_8] [i_9] [i_9] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9])) ? (arr_27 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_25 [i_9])) ? (arr_27 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8 + 1])))))) / (((((arr_28 [i_8 - 1] [i_8 + 1] [i_8 - 1]) + (9223372036854775807LL))) >> (((arr_28 [i_8 - 1] [i_8 - 1] [i_8 + 1]) + (1559285301498570389LL))))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    {
                        arr_37 [18LL] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)3842)), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8 - 1]))) : (arr_31 [i_8] [i_8 + 1]))) * (((/* implicit */long long int) ((arr_26 [i_8 - 1]) ? (((/* implicit */int) arr_26 [i_8 + 1])) : (((/* implicit */int) arr_26 [i_8 - 1])))))));
                        var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_10] [i_10])) && (((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_12)))))))), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)23923))))), (max(((unsigned short)40275), ((unsigned short)63)))))));
                        var_33 -= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_28 [i_8 + 1] [i_9] [i_10])), (((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */unsigned long long int) arr_27 [(_Bool)1])) : (arr_32 [i_8 - 1] [i_8 - 1]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                        arr_38 [i_10] [i_9] [i_8] = ((/* implicit */long long int) max((((unsigned long long int) (((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8 - 1])))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_4))))), (var_5))))));
                        var_34 = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
            var_35 = ((long long int) max((arr_25 [i_8 - 1]), (((/* implicit */unsigned short) arr_35 [i_8 - 1]))));
        }
    }
    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((var_5), (((/* implicit */long long int) var_8))))))) : (var_3))))));
    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((unsigned char) (+(var_3)))))));
    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_0))));
}
