/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233277
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
    var_17 = ((/* implicit */short) var_1);
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) 4097269801U)) > (var_13)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(arr_0 [i_0])))))) == (var_12)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) arr_0 [i_0]);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (short i_3 = 4; i_3 < 9; i_3 += 4) 
                {
                    for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        {
                            var_19 ^= ((((/* implicit */_Bool) -712937106)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((~(9223372036854775807LL))));
                            var_20 = ((/* implicit */signed char) max((max((arr_9 [i_0 + 1] [i_4 + 1] [i_4 + 1] [i_0 + 1]), (((/* implicit */long long int) var_9)))), (((arr_9 [i_0 + 1] [i_4 + 1] [i_4] [i_3]) ^ (arr_9 [i_0 - 3] [i_4 + 1] [i_0 - 3] [i_3])))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_3] [i_0]) / (var_3))) : ((-(((/* implicit */int) var_14))))))) < ((+(((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39699))) : (9223372036854775793LL)))))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((int) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (16448405816124542846ULL))));
            }
        }
        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8064))))) / ((-(arr_11 [i_0] [0LL] [i_0] [i_0] [i_0] [(short)1])))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) * (((arr_9 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) arr_14 [i_0])) >= (min((((/* implicit */unsigned int) (unsigned short)55931)), (3022364312U)))))))));
    }
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) arr_17 [i_5 - 2] [i_5 - 1]))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) : (2508537496771815680LL)))) / (((var_12) * (((/* implicit */unsigned long long int) 673793878))))))));
        arr_19 [i_5] = ((/* implicit */long long int) ((unsigned int) (~(((int) var_2)))));
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 1; i_7 < 8; i_7 += 2) 
        {
            var_24 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) <= (var_12))))) : (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) < (((/* implicit */int) arr_22 [i_6])))))) : (min((((((/* implicit */_Bool) var_1)) ? (arr_23 [i_6] [i_6]) : (arr_23 [i_6] [i_7]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))))));
            arr_24 [i_6] [i_6] = arr_23 [i_7] [i_7 + 2];
        }
        for (long long int i_8 = 2; i_8 < 9; i_8 += 2) 
        {
            arr_28 [i_6] [i_8] [i_6] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) : (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [0]))), ((+(arr_5 [i_8])))))));
            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)13229)), (arr_20 [i_8])));
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
        arr_29 [i_6] [i_6] = ((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_6] [(_Bool)1] [i_6]);
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((-1284020310) / (((/* implicit */int) (unsigned short)482))))) ? (max((((/* implicit */long long int) arr_26 [1LL] [1LL])), (var_13))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (int i_10 = 1; i_10 < 8; i_10 += 3) 
            {
                {
                    arr_34 [i_10] = ((/* implicit */unsigned long long int) var_5);
                    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */short) var_4))))) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-7195)) / (((/* implicit */int) (unsigned short)24139))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6])))));
                    arr_35 [i_6] [i_10] [8LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)54686)) : (((/* implicit */int) (_Bool)1)))) + ((~(arr_13 [i_6] [i_10 - 1] [i_10 + 1] [i_9] [i_9])))));
                }
            } 
        } 
    }
    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_37 [i_11])), ((~((+(arr_36 [i_11])))))));
        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_11 + 1]))));
        var_31 = (-(1565074265));
        var_32 = ((/* implicit */unsigned short) var_11);
    }
}
