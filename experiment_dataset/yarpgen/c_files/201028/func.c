/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201028
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
    var_15 = ((/* implicit */short) var_13);
    var_16 = ((((/* implicit */long long int) 1806058769U)) < (-3990008151086552099LL));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (!((_Bool)1)))), ((+(3990008151086552099LL)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 -= ((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)195)))))) ? (((((((/* implicit */_Bool) 2147483647)) ? (1588191987U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))));
                    var_19 |= ((/* implicit */unsigned long long int) ((6193606089215598304LL) <= (((/* implicit */long long int) 2147483647))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [17] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 + 1] [i_3])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)19206))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_3]))) ^ (arr_3 [i_2] [i_3]))))) % ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) 2147483645)) : (((1377444940U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48732)))))))));
                        var_20 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_0 [i_0])))) / (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_0 [i_0]))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_21 -= ((/* implicit */_Bool) (unsigned short)13957);
                        arr_14 [i_2 + 1] = ((/* implicit */signed char) arr_1 [i_0] [5LL]);
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            var_22 = (!(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)58))))) && (((/* implicit */_Bool) ((arr_5 [18LL] [i_0] [i_0]) % (((/* implicit */unsigned int) 12582912))))))));
                            var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 6668401059007858093LL)))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_5] [i_4])) : (min(((~(((/* implicit */int) (_Bool)1)))), (arr_7 [i_1])))));
                            var_24 = ((/* implicit */_Bool) (((-((+(((/* implicit */int) var_3)))))) + ((+(12582912)))));
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)16] [i_1] [i_0])) ? (((((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_5])) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((8U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_4])))))) : (max((3990008151086552098LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_4] [i_5])))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            arr_19 [i_6] [i_6] [i_2 - 2] [i_4] [i_2 - 2] [i_0] [i_1] = ((/* implicit */short) (((+(arr_7 [i_0]))) <= (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_0]) : (arr_7 [i_0])))));
                            var_26 = ((/* implicit */_Bool) -1189390918240427739LL);
                            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_7] [i_0] [i_2] [(unsigned short)8] [i_0] = ((/* implicit */unsigned int) var_1);
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) & ((+((+(((/* implicit */int) arr_20 [i_0] [i_0])))))))))));
                            arr_25 [11LL] [i_2] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_2] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) ? (9187343239835811840LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))))) : ((-(((/* implicit */int) var_7))))));
                            arr_26 [i_7] [i_4] [i_2 - 2] [i_1] [i_0] = ((/* implicit */long long int) arr_21 [i_0]);
                            var_29 -= ((/* implicit */long long int) var_4);
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (-5891775481241161331LL)))) || (((/* implicit */_Bool) (-(8589934336LL)))))))));
                            var_31 = ((/* implicit */unsigned long long int) (+(max((var_14), (((/* implicit */long long int) (unsigned short)14336))))));
                        }
                        var_32 -= ((/* implicit */_Bool) ((((arr_17 [i_0] [i_1] [i_2 - 2] [i_4] [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4]))))))))) : (var_1)));
                    }
                }
            } 
        } 
        var_33 *= ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) / (-5891775481241161331LL))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))))) << ((((~(((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0]))))))) + (38600275527347957LL))));
        var_34 += ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0])))))))), ((~((((_Bool)1) ? (arr_7 [i_0]) : (((/* implicit */int) arr_20 [i_0] [(short)0]))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        arr_44 [i_12] [i_9] [i_12] [i_12] [i_11] [i_12] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        arr_45 [i_11] [i_10] [i_11] [i_10] [i_12] [i_9] = ((/* implicit */unsigned short) (+(((arr_1 [i_11] [i_9]) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) % (arr_31 [i_9]))) : (((/* implicit */long long int) max((arr_38 [i_9] [i_10] [(unsigned short)3] [(_Bool)1]), (((/* implicit */unsigned int) (_Bool)0)))))))));
                        var_35 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_27 [i_9] [i_9] [i_11] [i_10] [i_11] [(signed char)12]))))));
                    }
                    for (unsigned short i_13 = 1; i_13 < 10; i_13 += 2) 
                    {
                        var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_13 + 1] [(unsigned char)12] [i_10] [i_10] [(unsigned char)12] [i_9])) & (-771867478)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((~(((/* implicit */int) (signed char)-69)))) : ((~(((/* implicit */int) (unsigned char)195))))));
                        var_37 = ((/* implicit */_Bool) 3286425060037853333LL);
                        var_38 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_33 [i_13 - 1])))), ((+(((/* implicit */int) (unsigned short)62043))))));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 7; i_14 += 2) 
                    {
                        arr_52 [i_10] = ((/* implicit */unsigned long long int) var_4);
                        arr_53 [i_10] [i_11] [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-7460732593693071810LL) ^ (((/* implicit */long long int) arr_5 [i_10] [i_11] [i_10]))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) (_Bool)1))))))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2047)))));
                    }
                    var_39 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_9] [i_9] [i_10] [i_10] [i_11])) + (((/* implicit */int) arr_13 [i_9] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11] [i_11] [i_10] [i_9]))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-17999))) - (9187343239835811840LL))))), ((+(var_8)))));
                }
            } 
        } 
    } 
}
