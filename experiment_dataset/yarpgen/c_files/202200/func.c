/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202200
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
    var_18 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_11))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_6))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(arr_0 [i_0] [i_0]))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_22 = arr_0 [(unsigned char)12] [i_1];
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_7 [i_2]))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) (+(arr_2 [i_1])))) ? (((var_10) >> (((arr_0 [i_3] [i_1]) + (2046195838))))) : (((/* implicit */unsigned int) arr_0 [(unsigned char)1] [i_1]))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1621898414U)) ? (32025994U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)488)))));
                    var_26 = ((/* implicit */unsigned char) (+(((arr_9 [i_1] [i_2] [i_3] [i_4]) * (((/* implicit */unsigned int) arr_0 [i_3] [i_4]))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_15 [4ULL] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((signed char) arr_13 [(unsigned short)13] [i_2] [i_3] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_7 [(signed char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_3] [i_3] [5]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_14))))))))) : (var_0)));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_5 [i_5] [0U] [i_3]))));
                    var_28 = ((/* implicit */unsigned char) var_13);
                    arr_16 [i_2] [4] [12U] [i_5] = ((/* implicit */signed char) arr_7 [i_5]);
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    arr_19 [i_2] = var_10;
                    arr_20 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_3 [i_6 + 2]);
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_5 [(signed char)0] [i_2] [i_2]))));
                    arr_25 [i_1] [(unsigned char)1] [i_2] [7] [i_1] [i_1] = ((/* implicit */signed char) (((+(arr_10 [4] [i_2] [i_2] [i_3] [(_Bool)1] [i_7]))) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_30 = ((/* implicit */short) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (var_12) : ((-(((/* implicit */int) (signed char)-83)))))))));
                    var_31 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_6 [i_3] [i_8])), ((+((~(arr_24 [i_1] [(signed char)8] [i_3] [i_8] [(_Bool)1])))))));
                    arr_28 [i_8] [i_3] [i_2] [i_2] [i_2] [i_1] = (+(((/* implicit */int) arr_21 [i_1] [i_1] [12ULL] [i_1])));
                    arr_29 [i_2] [7] [i_2] [i_2] = ((((((/* implicit */_Bool) arr_11 [i_8] [i_3] [2U] [i_1] [i_1] [i_1])) ? (arr_11 [i_1] [8] [i_1] [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_2] [i_3] [i_3] [i_8]))) != (min((arr_11 [i_1] [i_2] [i_3] [i_3] [i_3] [i_8]), (((/* implicit */long long int) var_1)))));
                }
                for (signed char i_9 = 3; i_9 < 13; i_9 += 1) 
                {
                    arr_32 [i_1] [i_2] [i_3] [i_9 + 1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) arr_14 [i_2] [7U] [i_2] [i_3] [i_9 + 1] [i_9 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_27 [i_1] [i_2] [i_2] [i_2] [8U])) ? (arr_8 [i_2] [i_2] [i_2] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(_Bool)1] [i_3] [i_2] [i_1])))))))));
                    arr_33 [i_1] [i_1] [i_2] [i_3] [i_9] = ((/* implicit */unsigned long long int) var_7);
                }
            }
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
            {
                arr_36 [6ULL] [(_Bool)1] [i_10] [(signed char)6] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_30 [i_1] [i_10]))))))) && (((/* implicit */_Bool) ((arr_18 [i_10] [13ULL] [i_1]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_26 [(_Bool)1])))))));
                arr_37 [i_1] [i_2] [(unsigned char)4] = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_11 [i_1] [i_1] [i_1] [(unsigned char)8] [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_6)))), (((((/* implicit */_Bool) arr_24 [i_10] [i_2] [i_10] [i_10] [i_1])) || (arr_18 [i_10] [i_2] [i_1])))))))));
                arr_38 [i_2] = ((/* implicit */_Bool) var_10);
                arr_39 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_10] [i_10] [i_10])) & (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_10]) : (arr_7 [i_1])))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
            {
                var_32 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [13U] [i_11] [13U] [i_11])) ? (arr_34 [i_1] [i_2] [i_11]) : (var_1)))) ? (((((/* implicit */int) arr_40 [i_1] [7])) / (((/* implicit */int) arr_35 [i_1] [i_2] [i_11] [i_2])))) : (((((/* implicit */_Bool) arr_41 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_5 [10LL] [i_2] [8ULL])) : (((/* implicit */int) arr_6 [i_2] [7U]))))))));
                var_33 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_8 [4U] [4U] [i_2] [i_2])));
            }
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
            {
                arr_44 [i_1] [i_2] [i_12] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((arr_10 [i_1] [i_1] [i_2] [i_2] [i_12] [i_12]) < (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                arr_45 [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */int) arr_43 [i_2] [i_2] [i_2])) < (((/* implicit */int) arr_43 [i_2] [i_2] [i_12])))) ? (((/* implicit */unsigned long long int) ((arr_34 [i_12] [i_2] [i_1]) ^ (arr_34 [i_1] [i_1] [i_1])))) : (max((((/* implicit */unsigned long long int) arr_26 [i_2])), (min((((/* implicit */unsigned long long int) var_5)), (arr_7 [i_1])))))));
            }
            /* LoopSeq 2 */
            for (int i_13 = 2; i_13 < 11; i_13 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_4 [i_13 - 1] [i_2] [i_2])), (((((/* implicit */_Bool) (-(arr_4 [7U] [i_2] [i_13])))) ? (((arr_43 [i_2] [i_2] [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned short)11] [i_2] [i_2] [i_13] [i_13]))) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_2])))))));
                var_35 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) max((((/* implicit */unsigned char) arr_47 [i_2] [i_2] [(unsigned char)1])), (var_8)))) / (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_18 [i_13] [i_2] [i_1]))))));
            }
            for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                arr_50 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)153))));
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5233)) ? (2401321277U) : (1621898414U))))));
            }
            var_37 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (-(arr_11 [i_1] [i_1] [i_1] [i_2] [i_2] [(unsigned short)2])))))));
        }
        var_38 = ((/* implicit */_Bool) var_2);
        var_39 ^= (-(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)12] [(unsigned char)2] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-95)), ((unsigned short)7742))))))));
        var_40 ^= ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1]);
    }
}
