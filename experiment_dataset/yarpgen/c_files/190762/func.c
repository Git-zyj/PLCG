/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190762
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
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) max((1543218271897661544LL), (((/* implicit */long long int) (unsigned short)65535))));
        arr_3 [i_0] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) - (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 - 3]))))) : (max((((/* implicit */long long int) -899189861)), (-1543218271897661543LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [8ULL] [i_0 - 3])) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_1] [0LL])) : (((/* implicit */int) arr_1 [i_1])))))));
            arr_6 [(unsigned char)6] = ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0 - 2])) : ((-(((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0]))))));
        }
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            var_19 = (-(((((/* implicit */_Bool) -1543218271897661545LL)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)76)))));
            var_20 = ((/* implicit */signed char) max((4294967295U), (((/* implicit */unsigned int) (signed char)122))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)10073)))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) ((arr_9 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))), (arr_8 [i_2 + 1])))))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_11 [i_4 - 2] [i_4] [i_4] [i_4 + 1])), (-1543218271897661524LL))), (((/* implicit */long long int) ((arr_1 [i_4 - 1]) ? (((/* implicit */int) max((var_3), ((unsigned short)63536)))) : (((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_2] [i_2] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_0] [i_4])) : (((/* implicit */int) arr_1 [i_0])))))))));
                        arr_17 [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_11 [i_3] [i_3] [i_4 + 1] [i_4 - 2]), (arr_11 [i_3] [i_4 - 2] [i_3] [i_4 + 1])))), (((((/* implicit */_Bool) (short)26526)) ? (((/* implicit */int) arr_1 [i_4 - 1])) : (((/* implicit */int) arr_1 [i_4 + 1]))))));
                        var_23 = ((/* implicit */short) var_4);
                        arr_18 [i_0 - 3] [i_2 + 1] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-77)) || (((/* implicit */_Bool) arr_4 [i_4]))))))))));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */unsigned int) min(((unsigned short)63536), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0] [i_0]), (var_2))))) == ((+(var_0))))))));
    }
    for (signed char i_5 = 3; i_5 < 12; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_26 [i_5] [i_6] [i_5 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) / (arr_7 [i_5 - 2])))) ? (((/* implicit */int) ((((14012681737725474544ULL) & (((/* implicit */unsigned long long int) arr_22 [(short)4] [i_5])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) < (4434062335984077072ULL)))))))) : (((/* implicit */int) ((unsigned short) var_6)))));
            arr_27 [12U] [i_5] = ((/* implicit */signed char) min(((~(var_9))), (((arr_22 [i_5 + 1] [i_5 - 2]) & (arr_22 [i_5 + 1] [i_5 - 2])))));
            var_25 = max((var_8), (((((/* implicit */_Bool) arr_24 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5 + 1] [i_5 + 1] [i_5]))) : (7881299347898368ULL))));
        }
        arr_28 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (23LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_5] [i_5 + 1] [i_5] [i_5]), (((/* implicit */unsigned char) var_4)))))) : (max((((/* implicit */unsigned int) arr_11 [i_5] [i_5] [i_5 + 1] [i_5])), (var_0)))))) ? (((/* implicit */unsigned long long int) arr_25 [i_5])) : (max((((((/* implicit */_Bool) (unsigned short)2007)) ? (((/* implicit */unsigned long long int) arr_7 [i_5])) : (14012681737725474544ULL))), (((((/* implicit */_Bool) var_15)) ? (14012681737725474544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122)))))))));
    }
    for (signed char i_7 = 3; i_7 < 12; i_7 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) -1543218271897661545LL);
        var_27 |= var_0;
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max(((unsigned short)63537), ((unsigned short)0))))));
        arr_31 [i_7] = ((/* implicit */int) arr_20 [i_7]);
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                {
                    var_29 -= -1;
                    arr_40 [i_8] [i_9] [i_10] |= ((/* implicit */int) arr_35 [i_8]);
                }
            } 
        } 
    } 
}
