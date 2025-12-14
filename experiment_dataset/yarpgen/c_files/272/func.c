/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/272
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
    var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (var_8)))))), (min((max((18446744073709551593ULL), (((/* implicit */unsigned long long int) (unsigned short)7936)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)11495)))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = (((!(((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1]))))) : (max((((/* implicit */long long int) (signed char)-104)), (-1586179976872736150LL))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) ((signed char) arr_0 [i_0]))) : (((/* implicit */int) arr_0 [i_0 - 1])))));
        var_21 += ((/* implicit */unsigned long long int) (+((~(5088124686729773133LL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35546)) ? (18446744073709551573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) ((unsigned short) max((arr_5 [(unsigned char)11]), (((/* implicit */unsigned short) arr_7 [(signed char)11])))))) : (max((arr_6 [i_1]), ((+(arr_6 [i_1])))))));
        var_22 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */int) arr_7 [i_1])))))), ((-(((/* implicit */int) max((arr_4 [i_1]), (arr_5 [i_1]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned short)240)) : (((/* implicit */int) (unsigned short)61120))));
                var_24 = ((/* implicit */long long int) (-(arr_12 [i_1] [i_1] [i_3])));
                arr_15 [i_1] [i_2] [i_3] = ((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned char)128)))));
            }
            var_25 = ((/* implicit */unsigned char) arr_5 [i_1]);
            arr_16 [i_1] [i_2] [i_2] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_9 [i_2] [i_2] [i_1]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) max(((-(max((arr_13 [i_1] [9LL] [i_1] [i_1]), (((/* implicit */long long int) arr_17 [i_1] [i_4])))))), (((/* implicit */long long int) ((unsigned int) max((arr_13 [i_1] [i_1] [13LL] [i_1]), (((/* implicit */long long int) arr_7 [i_4]))))))));
            arr_20 [i_4] = ((/* implicit */short) arr_12 [(short)5] [i_4] [8]);
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25138))))) ? (min((arr_11 [i_4] [14LL] [i_1]), (arr_11 [i_1] [(unsigned char)0] [i_4]))) : (((/* implicit */long long int) ((int) ((unsigned int) arr_5 [i_1])))))))));
        }
        for (int i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            arr_23 [i_5] [i_5] = max((((/* implicit */long long int) ((int) (~(arr_9 [9ULL] [i_5] [i_5]))))), (((((/* implicit */_Bool) arr_21 [i_5 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : ((+(arr_13 [i_1] [i_5] [i_5] [i_1]))))));
            var_27 = ((/* implicit */unsigned long long int) max((min((max((arr_11 [(signed char)13] [i_5] [i_5 + 1]), (((/* implicit */long long int) arr_10 [i_1] [i_5] [(unsigned short)15])))), (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_5] [i_5])) ? (arr_13 [i_1] [i_5] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5]))))))), ((+(((long long int) arr_7 [i_5]))))));
            arr_24 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)10293)), ((unsigned short)30368))))))) ? (arr_21 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_5 - 1])))));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_22 [i_1] [i_5 - 1] [0])))), (((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_5])))))))));
        }
        arr_25 [0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_7 [i_1])), ((~(((/* implicit */int) (unsigned short)4990))))));
        arr_26 [(unsigned short)14] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_1])), (arr_22 [i_1] [i_1] [(unsigned short)8])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1])), (arr_22 [i_1] [i_1] [(unsigned char)14])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_1])), (arr_22 [i_1] [i_1] [4U]))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [5LL])) ? (arr_27 [i_6] [i_6]) : (arr_27 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [(signed char)13])) ? (((/* implicit */int) arr_30 [i_6])) : (((/* implicit */int) arr_28 [i_6]))))) : (((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6]))) : (arr_27 [(unsigned char)1] [1LL])))));
        var_30 = ((/* implicit */_Bool) ((int) arr_29 [i_6]));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_31 = ((/* implicit */long long int) ((int) min(((unsigned char)97), (((/* implicit */unsigned char) ((signed char) -473528930))))));
        var_32 -= max((((/* implicit */int) arr_14 [i_7])), (((arr_14 [i_7]) ? (((/* implicit */int) arr_14 [i_7])) : (((/* implicit */int) arr_14 [i_7])))));
        arr_33 [i_7] = ((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_7 [i_7])))));
    }
    var_33 &= ((/* implicit */unsigned short) (+((+(((/* implicit */int) ((_Bool) var_9)))))));
}
