/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215293
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
    var_15 = (~(((/* implicit */int) (short)8447)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4]))) : (var_5)))))));
                                var_17 -= ((/* implicit */long long int) ((arr_3 [i_1]) <= (((/* implicit */long long int) var_13))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)22]))) : (arr_3 [i_0])))))));
                }
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((signed char) arr_11 [i_1] [i_5] [i_5])))));
                                var_20 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_5] [i_6]);
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_6])) ? ((((!((_Bool)1))) ? (((/* implicit */int) ((short) arr_16 [i_0] [i_1] [(signed char)21] [i_6] [(short)17]))) : (min((var_13), (((/* implicit */int) arr_10 [(short)8])))))) : (max((var_13), (((/* implicit */int) (unsigned short)56076))))));
                                arr_21 [i_0] [(unsigned char)2] [i_1] [i_0] [(signed char)20] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) + (max((arr_15 [i_5] [i_7]), (((/* implicit */int) arr_5 [i_0] [i_6] [(short)17])))))) << (((((/* implicit */int) (short)16306)) - (16306)))));
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */signed char) max(((~((-(3694073843797738754LL))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (arr_11 [18LL] [i_1] [i_5]))))));
                    var_23 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((-3694073843797738765LL) / (((/* implicit */long long int) ((/* implicit */int) (short)6064)))))))))));
                }
                var_24 = ((/* implicit */int) max((var_7), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)74))))))))));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_6))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) 66584576);
    /* LoopSeq 2 */
    for (short i_8 = 1; i_8 < 14; i_8 += 3) 
    {
        var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_8])) ? (arr_11 [i_8 + 2] [i_8] [(unsigned char)8]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((4294967293U) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
        var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8 + 1] [i_8] [i_8] [15])) ? (((/* implicit */int) ((unsigned short) (unsigned char)215))) : (((((/* implicit */_Bool) arr_9 [i_8 + 1] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_9 [i_8 + 1] [i_8] [i_8] [i_8])) : (((/* implicit */int) var_9))))));
        var_29 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((((/* implicit */unsigned int) var_14)) == (var_7))))))));
        var_30 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_22 [(unsigned char)2]), (var_14)))) ? ((+(arr_18 [i_8] [i_8] [i_8 + 1] [i_8 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)16]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_20 [i_8] [i_8 + 1] [i_8] [21ULL] [i_8]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68)))))) <= (var_13)))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 4) 
        {
            for (short i_10 = 2; i_10 < 15; i_10 += 3) 
            {
                {
                    var_31 |= ((/* implicit */unsigned long long int) arr_27 [i_8 + 1] [(short)12] [i_8]);
                    var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) (short)13457)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_8])) : (((/* implicit */int) (unsigned char)28)))) : ((~(((/* implicit */int) (short)-21619)))))), (((/* implicit */int) (unsigned char)124))));
                }
            } 
        } 
    }
    for (unsigned int i_11 = 2; i_11 < 15; i_11 += 3) 
    {
        var_33 |= ((/* implicit */unsigned int) min((min(((~(var_0))), ((+(((/* implicit */int) arr_6 [2LL])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)30529), (arr_8 [(signed char)12] [18ULL] [i_11 + 2] [i_11])))))))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 16; i_12 += 4) 
        {
            for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) var_6);
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (+(arr_18 [i_11] [i_13 + 1] [i_13 - 1] [i_12 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13437)) ? (-3694073843797738755LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)8] [i_12] [i_12] [i_13 + 2])))))) : (((((/* implicit */_Bool) arr_16 [i_11 + 2] [i_11] [(short)19] [i_11] [i_13])) ? (var_12) : (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_34 [i_11 - 2])))) >= (((/* implicit */int) ((signed char) arr_7 [i_12] [i_12 - 3])))))))));
                    var_36 = ((/* implicit */int) (unsigned short)33865);
                    var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26525)) + (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_12])) ? (((/* implicit */int) arr_10 [i_11 + 2])) : (1482430114)))) ? ((~(-1170582369))) : (-1420159455))) : (((((/* implicit */_Bool) (short)28465)) ? (((/* implicit */int) (short)31501)) : (((/* implicit */int) (signed char)-26))))));
                }
            } 
        } 
        var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11] [i_11 - 2])))))));
    }
}
