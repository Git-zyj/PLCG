/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30351
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned long long int) var_5))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) 7175729596198554702LL)) ? (((/* implicit */int) (unsigned char)147)) : (1329599076)))));
        var_13 ^= ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_14 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1048575U)) || (((/* implicit */_Bool) 1012263621U)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1 + 1])) << (((/* implicit */int) ((((/* implicit */_Bool) 580905936)) || (((/* implicit */_Bool) (unsigned short)65535))))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (int i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (arr_11 [i_1 + 1] [i_4 + 1] [i_4 - 3]) : (arr_11 [i_1 + 1] [i_4 + 1] [i_4 - 3]))), ((+(arr_11 [i_1 + 1] [i_4 + 1] [i_4 - 3])))));
                        var_17 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1 + 1]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            arr_18 [i_1] = var_4;
            var_18 = ((/* implicit */int) arr_6 [i_1]);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_25 [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1 + 1] [i_6 + 2]))));
                arr_26 [i_1] [i_1] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) ((unsigned char) var_5));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_8 [16U] [i_6]))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */int) ((((arr_10 [i_8] [i_8] [i_1] [i_8]) && (((/* implicit */_Bool) arr_6 [i_8])))) ? (((((/* implicit */_Bool) arr_9 [i_6 + 1] [i_6 + 1] [i_8])) ? (arr_9 [i_6 - 1] [i_8] [i_8]) : (arr_9 [i_6 - 1] [i_6] [i_6 + 1]))) : ((-(arr_9 [i_1 - 1] [i_6 - 1] [i_6])))));
                var_21 = ((/* implicit */unsigned char) arr_11 [i_1] [i_1 + 1] [i_1]);
            }
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) min((arr_27 [i_9] [i_6]), (((/* implicit */int) arr_22 [i_1 + 1] [i_6] [i_9]))));
                arr_31 [(short)12] [i_1] [i_9] [i_9] = ((((/* implicit */_Bool) arr_16 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) 1898031857)) : (1973056232765385299ULL))));
                arr_32 [i_1] [i_6] = ((/* implicit */long long int) var_0);
                arr_33 [i_1] = ((/* implicit */unsigned char) ((long long int) (unsigned char)4));
            }
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((unsigned char) var_2)))));
            arr_34 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_11 [i_1 + 2] [i_1] [i_1])))));
            arr_35 [i_1] = ((/* implicit */int) ((min((arr_19 [i_6] [i_6] [i_1]), (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_1)) : (var_5))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) arr_15 [i_1]))))) || (((/* implicit */_Bool) arr_5 [i_1]))))))));
        }
        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            var_24 = ((/* implicit */int) ((unsigned char) 2374980641U));
            arr_38 [i_1] [i_1] = ((/* implicit */unsigned int) arr_12 [i_1 + 2]);
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 3; i_13 < 22; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */int) var_2);
                            arr_49 [i_1] [4] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) != (1919986655U)));
                            var_26 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_19 [i_12] [i_12] [i_12])) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_39 [i_13 + 1] [i_13 - 2] [i_13 - 3])), (arr_29 [i_1 + 1] [i_10] [i_11]))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            arr_53 [12] [22U] [i_11] [i_14] [i_10] [i_1] = ((/* implicit */signed char) ((unsigned char) 4294967295U));
                            var_27 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (unsigned short)32768))));
                        }
                        var_29 += ((/* implicit */_Bool) 3869878926U);
                    }
                } 
            } 
            var_30 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((arr_46 [i_1 + 1] [i_10] [i_10]), (var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))))) : (((/* implicit */int) ((short) arr_7 [i_1 + 2])))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 4) 
        {
            var_31 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_15 + 2] [13ULL])))))) * (arr_37 [i_15 - 1]));
            var_32 = ((/* implicit */int) max((var_32), (arr_28 [i_1 - 1])));
        }
        arr_58 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) 63)) : (1919986628U)));
    }
    var_33 = ((/* implicit */short) ((unsigned int) var_2));
}
