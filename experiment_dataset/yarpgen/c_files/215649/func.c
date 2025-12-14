/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215649
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0 - 2])))) : ((-(var_11)))));
        arr_4 [(unsigned short)17] = arr_1 [i_0 + 2];
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_1 [i_1]))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1705197839) <= (var_2))))) != (13835058055282163712ULL)))), ((-(((/* implicit */int) var_10)))))))));
                }
            } 
        } 
        arr_11 [(unsigned char)14] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) / (((((/* implicit */int) var_1)) << (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1])) != (((/* implicit */int) arr_10 [(signed char)12] [(signed char)12] [12LL] [i_1])))))))));
        arr_12 [i_1] = ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_1] [13LL]);
    }
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                {
                    var_15 -= ((/* implicit */int) arr_17 [i_4] [i_5] [i_4]);
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_23 [(_Bool)1] [(_Bool)1] [2LL] [i_5] [i_7] = (i_5 % 2 == 0) ? (((/* implicit */signed char) (-(((((/* implicit */int) arr_19 [i_5] [i_5 + 2])) * (((/* implicit */int) arr_19 [i_5] [(signed char)17]))))))) : (((/* implicit */signed char) (-(((((/* implicit */int) arr_19 [i_5] [i_5 + 2])) / (((/* implicit */int) arr_19 [i_5] [(signed char)17])))))));
                        var_16 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_8 [i_4] [i_7])))) / (((/* implicit */int) arr_5 [i_4]))));
                    }
                    for (long long int i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        arr_28 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65533)) < (((/* implicit */int) (unsigned char)44))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [15ULL])) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) arr_8 [i_4] [i_5]))))) ? (((((/* implicit */int) arr_19 [i_5] [i_5])) / (var_2))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) arr_21 [i_4] [(signed char)4]))))))) / (((((/* implicit */_Bool) arr_6 [(short)16])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_18 [(signed char)15]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned short)3])))))));
                        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max(((unsigned short)65533), ((unsigned short)1)))) ? (2416785169U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((1470631973117267634ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)13862))))), (((((13835058055282163703ULL) / (((/* implicit */unsigned long long int) arr_18 [i_8])))) << (((arr_13 [i_8 + 2] [i_6 - 2]) - (8319382193897538561ULL)))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_4] [(_Bool)1] [i_6] [i_5] [i_6] [i_4] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)44)) <= (((/* implicit */int) (_Bool)0))));
                            var_21 -= ((/* implicit */unsigned long long int) arr_19 [i_4] [i_4]);
                            arr_35 [i_5] [(unsigned short)14] [i_6 + 1] [(unsigned char)12] [i_5] = ((/* implicit */unsigned char) arr_13 [i_5 - 1] [(short)13]);
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1215500233220993556LL))))) + (((/* implicit */int) var_5))));
                            arr_39 [i_4] [i_5 - 1] [i_6] [i_5] [(short)2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) : (3433439884U)))) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_21 [(signed char)1] [i_6 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_5 + 1] [i_6 + 2] [i_11])) ? (arr_9 [i_4] [i_4] [i_4] [i_4]) : (arr_9 [i_4] [i_5 + 2] [(_Bool)1] [i_4])))) : (((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_4] [i_4] [i_5 + 3] [i_6] [i_11] [i_5]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_4]))) + (arr_32 [i_4] [10U] [i_4] [i_4] [i_4] [i_4]))))));
                            var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_27 [i_5] [i_5 + 3] [i_6 - 1] [4U] [14LL])) ? (var_11) : (((/* implicit */int) arr_36 [i_5] [i_11] [i_8] [i_6] [i_5] [i_5]))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (min((4294967295U), (((/* implicit */unsigned int) (unsigned char)8))))));
    var_24 *= ((/* implicit */unsigned long long int) ((1215500233220993556LL) + (((/* implicit */long long int) var_3))));
}
