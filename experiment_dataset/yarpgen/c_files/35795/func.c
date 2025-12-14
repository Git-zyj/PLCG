/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35795
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
    var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)12)) - (((/* implicit */int) (unsigned short)21)))), (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -9223372036854775799LL))))))) : (((((min((-1321262043), (((/* implicit */int) (short)12721)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)27703)))))))))));
    var_14 = ((/* implicit */signed char) ((short) (-(max((((/* implicit */unsigned int) (unsigned char)70)), (0U))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) ? (((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) >> ((((~(((/* implicit */int) var_9)))) + (27892))))) : (((((((/* implicit */int) arr_1 [i_1])) + (2147483647))) << (((max((((/* implicit */long long int) arr_1 [i_1])), (9197769698942266026LL))) - (9197769698942266026LL)))))));
            var_17 = ((/* implicit */long long int) min((536870911U), (4194176U)));
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (9ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (3601259294U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1])) - (151)))))) : (max((((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) var_9))))), (min((((/* implicit */long long int) var_12)), (arr_2 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])), (9ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (3601259294U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1])) - (151))) + (149)))))) : (max((((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) var_9))))), (min((((/* implicit */long long int) var_12)), (arr_2 [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_1]))));
                            var_18 = ((/* implicit */unsigned char) max((((arr_8 [(unsigned char)3] [i_4] [i_2] [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))), (((-1LL) > (arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                            var_19 = ((/* implicit */short) ((arr_6 [i_0 - 1] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (12225142578441582708ULL))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_14 [i_0] [i_0] [1LL] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)1))))))), (min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) -1))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_20 ^= ((/* implicit */long long int) arr_9 [i_0 + 1] [i_5] [(unsigned char)0] [i_7] [(short)1]);
                        var_21 ^= ((/* implicit */short) min((((((/* implicit */_Bool) max((arr_6 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) arr_0 [i_7]))))) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) min(((short)32734), ((short)15)))))), (((/* implicit */int) (short)-6251))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((8312332714916003554LL) > (-9223372036854775799LL)))) - (((/* implicit */int) (unsigned short)0))))), (var_4))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_7))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((arr_10 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_8 + 1]) ? (arr_7 [i_0 - 1] [i_0 + 1] [(short)3] [i_0 + 1]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]))) / (((/* implicit */long long int) ((arr_6 [i_8] [(unsigned char)12]) << (((max((((/* implicit */int) (unsigned char)213)), (1995550516))) - (1995550510))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (short i_11 = 2; i_11 < 9; i_11 += 4) 
            {
                {
                    var_25 = max((17054073830519082967ULL), (arr_27 [i_0] [i_0] [i_11]));
                    var_26 = ((/* implicit */long long int) min((var_26), (max((((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) 536870911U)) ? (arr_15 [i_11 - 2] [i_10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_10])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)30512)))))))))));
                    var_27 = ((/* implicit */unsigned char) (-(max((max((-1342800794), (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) min((((/* implicit */short) arr_12 [i_10])), (arr_24 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))))));
                    /* LoopSeq 2 */
                    for (short i_12 = 3; i_12 < 11; i_12 += 4) 
                    {
                        arr_35 [i_0] [i_0] [i_10] [i_10] [i_12] = ((arr_31 [i_0] [i_10] [i_11 + 2] [i_12 + 2] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0]), ((short)-9642))))));
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)96)), (min((((/* implicit */unsigned int) (_Bool)1)), (4294967281U)))))) ? ((+((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)5))));
                    }
                    for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        arr_38 [i_0 + 1] [i_0] [i_11] [i_13] = ((/* implicit */unsigned long long int) max((2778358059U), (((/* implicit */unsigned int) (short)12966))));
                        var_29 = ((((/* implicit */_Bool) arr_2 [i_0] [i_13])) ? (arr_8 [i_0] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_11 + 2] [i_11 - 1] [i_11 + 1] [i_11 - 2])) ? ((~(((/* implicit */int) (unsigned char)234)))) : (((/* implicit */int) var_6))))));
                        var_30 = ((/* implicit */unsigned long long int) arr_0 [i_10]);
                    }
                }
            } 
        } 
        arr_39 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((arr_2 [i_0] [i_0 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-80))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_34 [(_Bool)1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))), (1390360475U)));
    }
}
