/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36744
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
    var_17 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)1920)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && ((_Bool)1))))))) ? ((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((var_12) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */short) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) arr_1 [i_0]);
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? ((-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [16ULL]))))));
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_4 - 2] [i_1 + 3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))) : (arr_9 [i_4] [i_4 - 2] [i_1 - 4] [i_1])))))));
                                arr_13 [2] [i_1 + 1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) max((arr_8 [i_3]), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1214876781)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_10 [i_1 - 1] [i_1 + 3]), (max((2010862630U), (((/* implicit */unsigned int) (unsigned short)35345))))))) & (max((arr_9 [i_1 + 2] [i_1 - 4] [i_1 + 1] [i_1 + 1]), (arr_9 [i_1 + 3] [i_1 - 2] [i_1 + 3] [i_1 - 2]))))))));
                    arr_14 [i_0] [i_1] [12LL] [i_1] = ((/* implicit */int) ((((((/* implicit */long long int) min((((/* implicit */int) var_6)), ((-2147483647 - 1))))) ^ (arr_6 [i_0] [i_1] [i_2]))) & (((/* implicit */long long int) (~((+(604303556))))))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (8664036229592951910LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0])) % (((/* implicit */int) arr_11 [i_0])))))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0]))), ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) ? (max((((/* implicit */int) arr_4 [i_0] [i_0] [17])), (((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0])) + (130))))))) : (((/* implicit */int) (((~(((/* implicit */int) var_9)))) != (((((/* implicit */_Bool) -8664036229592951918LL)) ? (((/* implicit */int) (unsigned short)35319)) : (((/* implicit */int) (unsigned short)35319)))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_5]))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (int i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            arr_31 [(unsigned short)9] [i_5] [i_6] [i_7] [i_8] [i_9] [i_6] = ((signed char) arr_29 [i_5] [i_9]);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 13620029719550389095ULL)) ? (((/* implicit */int) (unsigned short)62100)) : (-885907012)));
                            arr_32 [i_5] [i_6] [i_7] [i_8] [i_5] = ((/* implicit */int) arr_9 [(short)6] [7ULL] [i_8] [4U]);
                            var_23 = arr_23 [i_5] [2ULL];
                            var_24 = var_13;
                        }
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_35 [i_5] [(unsigned char)7] [i_5] = ((/* implicit */unsigned int) ((arr_34 [i_5] [i_8 - 1] [i_8] [i_5] [i_8] [i_10]) ? (((/* implicit */int) arr_34 [i_5] [i_8 - 1] [(signed char)8] [(unsigned short)9] [(_Bool)1] [i_8])) : ((+(((/* implicit */int) arr_34 [i_5] [i_8 - 1] [(unsigned short)1] [i_10] [i_10] [i_10]))))));
                            arr_36 [i_6] [i_5] [(short)11] [i_6] [(signed char)0] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_34 [i_5] [i_6] [i_7 - 2] [1ULL] [i_10] [i_10]);
                        }
                        arr_37 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(-160487174728644858LL)))))) ? (((/* implicit */int) ((signed char) arr_11 [i_5]))) : (arr_22 [i_5] [i_8])));
                        arr_38 [i_6] &= ((/* implicit */unsigned short) (-(((min((var_7), (arr_25 [i_5] [i_6] [i_7] [i_8 - 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_6])))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        arr_43 [i_5] [i_5] [i_7] = ((/* implicit */long long int) arr_27 [i_5] [i_5]);
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) >= (((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7 + 1] [i_7 + 1])) ? (((((/* implicit */_Bool) arr_42 [i_5] [i_6] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_11]))) : (arr_24 [i_5] [i_6] [i_7] [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)5879))))))));
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        var_27 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_10 [(unsigned short)7] [i_6]) ^ (((/* implicit */unsigned int) -1214876793))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_5] [(unsigned short)14] [i_5] [i_5] [i_5]))) : (max((((/* implicit */unsigned long long int) arr_28 [i_11])), (4826714354159162521ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6])))));
                    }
                    arr_44 [i_5] = ((/* implicit */unsigned int) arr_5 [i_5]);
                }
            } 
        } 
        var_28 += ((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_5] [i_5] [(unsigned short)2] [i_5])))), (((/* implicit */int) arr_26 [i_5] [i_5] [6LL] [i_5]))))));
    }
    var_29 = ((/* implicit */unsigned int) var_4);
    var_30 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
    var_31 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))));
}
