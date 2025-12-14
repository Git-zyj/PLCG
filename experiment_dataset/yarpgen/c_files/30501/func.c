/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30501
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned char) 2779566479U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 92533074)))) : (max((var_11), (((/* implicit */unsigned int) var_18)))))), (((/* implicit */unsigned int) max((532217321), (((/* implicit */int) (unsigned short)36526))))))))));
    var_20 |= ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (var_11))));
    var_21 = (~(((/* implicit */int) (signed char)44)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) (unsigned short)9192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)91))) : (750583358U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)0]))) : (var_11)))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (signed char)-92))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    var_22 |= ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_2] [i_2 - 1])))));
                    arr_8 [i_1] [i_0] = ((/* implicit */int) ((max((((((/* implicit */_Bool) -1915207146)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_16))), (((/* implicit */unsigned int) ((int) arr_2 [i_2]))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_1] [i_1] [i_2 - 1]), (((/* implicit */unsigned short) arr_7 [i_2]))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_12 [i_0] [i_3 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_17))) ? ((-(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (unsigned short)31216)))))) : ((~(((/* implicit */int) var_18))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_18)))))))), (min(((~(var_3))), (((/* implicit */unsigned int) arr_0 [i_0] [i_3])))))))));
        }
        for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 4) /* same iter space */
        {
            arr_15 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((arr_10 [i_4] [i_4]) ? (((/* implicit */int) ((_Bool) arr_6 [i_4] [i_4 + 1] [i_4 + 1]))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_14 [i_0] [i_0])))))));
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) arr_10 [i_0] [i_4 - 1]))) > (((((((/* implicit */int) var_12)) <= (((/* implicit */int) var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) : (var_11)))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15610)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)65)))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_0 [i_4 - 2] [i_4 - 4]), (var_18)))) & (((arr_10 [i_4 - 2] [i_4 - 4]) ? (((/* implicit */int) arr_10 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_10 [i_4 - 2] [i_4 + 1]))))));
        }
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_2 [i_0]))));
    }
    for (short i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2779566479U)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned short)27475))))) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_9 [i_5]))));
        arr_21 [i_5] = ((((/* implicit */_Bool) (unsigned short)34320)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)86)));
        var_28 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 - 2] [i_5 - 2])) ? (var_1) : (arr_13 [i_5])))) && (((/* implicit */_Bool) max((((/* implicit */short) var_4)), (arr_7 [i_5])))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (short)515))))));
        var_29 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (((((/* implicit */_Bool) -1915207146)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26369))) : (3217828851U))) : (((/* implicit */unsigned int) ((int) arr_16 [i_5 - 1]))))));
    }
    for (short i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
    {
        var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((arr_5 [i_6]), (((/* implicit */unsigned int) (signed char)39))))))) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_25 [i_6])) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (short)11988))))))));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                arr_34 [i_6 + 1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_18 [i_8] [i_6])))), (max((((/* implicit */int) arr_11 [i_6] [i_7] [i_8])), (arr_25 [5ULL])))))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) max((arr_0 [i_7] [i_8]), (((/* implicit */unsigned short) arr_17 [i_6])))))))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_29 [i_6] [i_6] [(unsigned short)5]))))))));
                var_32 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_9 [i_6 - 1]))))))));
            }
            /* vectorizable */
            for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 3; i_10 < 11; i_10 += 2) 
                {
                    var_33 = ((/* implicit */int) max((var_33), ((-(((/* implicit */int) arr_32 [i_6 - 1]))))));
                    var_34 = ((/* implicit */unsigned int) (-((((_Bool)0) ? (1066605447) : (arr_31 [i_6] [i_7] [i_6])))));
                    arr_41 [i_6] [i_7] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_19 [i_6 - 1]);
                    var_35 = ((/* implicit */int) min((var_35), ((~(((/* implicit */int) arr_38 [i_9 + 2] [1U] [i_9 + 1] [1U]))))));
                }
                arr_42 [i_6 - 1] = ((/* implicit */unsigned int) arr_14 [i_7] [i_9]);
                arr_43 [i_7] [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-6)) > (((/* implicit */int) (unsigned short)17426))))) << ((((~(((/* implicit */int) (unsigned short)15610)))) + (15629)))));
            }
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1594886379U)))) ? (((/* implicit */int) ((_Bool) arr_16 [i_6 - 1]))) : ((-(((((/* implicit */_Bool) arr_37 [1U] [2U] [i_6] [i_6])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_14 [i_6 - 2] [i_7]))))))));
            var_37 = min((max((((/* implicit */unsigned int) 92533074)), (1594886378U))), ((+(1515400816U))));
            arr_44 [i_6] [i_7] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_6 - 2] [i_6 - 2])) : (var_13)))));
        }
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
        {
            var_38 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((arr_40 [i_6] [i_6]), ((unsigned short)1472))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) ((((/* implicit */int) (short)-526)) < (((/* implicit */int) (signed char)-5)))))));
            arr_47 [i_11] = min((((((/* implicit */_Bool) (+(6202529825499903688ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_17))))) : (((/* implicit */int) arr_1 [i_6 + 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_11]))))) ? (((((/* implicit */int) arr_32 [i_6])) / (1927118628))) : (((((-252565221) + (2147483647))) >> (((arr_26 [11U] [i_11]) - (1994576968))))))));
        }
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
        {
            arr_52 [i_6] [i_12] = ((/* implicit */int) var_11);
            arr_53 [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) var_13);
        }
    }
    var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
}
