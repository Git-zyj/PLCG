/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32472
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
    var_12 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (var_8))))))) & (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8576)) <= (var_1)))), ((+(var_7))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [(_Bool)1] |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [8ULL] [8ULL])) | (((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) 63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == ((~(var_11)))))))));
        var_13 = (-(((((/* implicit */_Bool) (unsigned char)137)) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 2147483647)))) : (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_14 [i_0] [4ULL] [(short)6] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((1073741822U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)255))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (arr_7 [i_0] [i_0] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_1] [i_2 - 1] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_2] [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))) << (((((var_4) >> (((/* implicit */int) arr_12 [i_1] [i_0])))) - (157421269))))))));
                        arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20494))))) || ((!((_Bool)1)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) arr_17 [i_4])))) << (((arr_19 [i_4]) - (3081520811051988625LL)))));
        var_15 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
        var_16 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_18 [i_4])));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4])))))))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4])))))) ? (arr_21 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5 + 1])) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_19 [i_6]))) : (((/* implicit */long long int) (+(-1495264605))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            arr_30 [i_8] [i_6] [i_6] [i_7] [i_8] &= ((/* implicit */short) (+((-(((/* implicit */int) var_9))))));
                            var_20 = ((((/* implicit */_Bool) (signed char)26)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) (unsigned char)251))))));
                            var_21 = ((/* implicit */unsigned int) ((arr_28 [i_4] [i_5] [i_5] [i_7] [i_8]) * (((/* implicit */unsigned long long int) var_5))));
                            var_22 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8] [i_6] [i_4])))))) != (arr_29 [i_5 + 1] [i_6] [i_5 - 1] [i_6] [i_5 - 1])));
                        }
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_5]))));
                        arr_31 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_36 [i_9] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) ^ (var_7)))));
        var_24 = (!((!(((/* implicit */_Bool) var_11)))));
    }
}
