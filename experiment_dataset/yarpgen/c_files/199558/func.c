/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199558
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
    var_19 += ((/* implicit */unsigned char) var_18);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)190)))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (14ULL))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0])))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) var_0)) - (49278)))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) ((short) var_0)))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) min((((arr_13 [i_4 - 1] [i_4] [i_4] [i_4 - 1]) + (var_1))), ((-(arr_13 [i_4 + 1] [i_4] [i_4] [i_4])))));
                                var_21 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_17))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_23 [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 15ULL)) ? (arr_19 [i_6] [i_5] [i_5] [i_5] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)13] [i_0] [i_1] [i_2] [i_2] [i_5] [i_0]))))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((var_16), (arr_14 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3511))) : (((((/* implicit */_Bool) (unsigned char)218)) ? (277889560800041935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62024)) % (((((/* implicit */int) min((arr_22 [6LL] [i_1] [i_2]), ((unsigned short)62024)))) * (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)24383)) : (((/* implicit */int) var_11))))))));
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned long long int) 3346247184U);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_0] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_10])))))));
                                var_25 += ((/* implicit */short) arr_29 [i_7 + 3] [i_7 + 1] [i_7] [i_9 + 1]);
                                arr_36 [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_8 [i_7 - 1] [i_9 + 1]), (arr_8 [i_7 + 2] [i_9 + 1])))) ? (((((/* implicit */_Bool) (short)-12904)) ? (((/* implicit */int) (unsigned short)25618)) : (((/* implicit */int) (unsigned short)65409)))) : ((+(((/* implicit */int) arr_8 [i_7 + 1] [i_9 + 1]))))));
                                arr_37 [i_7] [i_9] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned short) 3686337036U);
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) var_11);
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_38 [i_11] [i_0]))));
                        arr_40 [i_7] [i_7] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255))))), ((((!(((/* implicit */_Bool) (unsigned short)2040)))) ? ((-(725307224484836456LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned short)3511)))))))));
                    }
                    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 3) 
                    {
                        arr_43 [(unsigned char)8] [i_7] [i_8] [i_12] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) % (arr_33 [i_12] [i_8] [i_7] [i_7] [i_0] [i_0] [i_0])));
                        arr_44 [i_0] [i_8] |= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_7] [i_7 - 1] [i_7] [i_7 + 3]))) + (arr_19 [i_7] [i_7] [i_7 - 1] [i_8] [i_7 + 3] [i_7]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24384)))));
                        var_29 = ((/* implicit */unsigned long long int) 114688U);
                    }
                    var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [i_0] [i_7] [i_8] [i_8])) && (((/* implicit */_Bool) (unsigned char)246)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) 200926665U)), (var_10))))))) >> (((max((1303477887U), (((/* implicit */unsigned int) (unsigned short)2)))) - (1303477885U)))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        var_31 -= ((/* implicit */short) arr_2 [i_13]);
        var_32 = ((/* implicit */_Bool) min((var_32), (((((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_46 [i_13]))) == (((/* implicit */long long int) 0U))))));
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned short) ((arr_42 [i_13]) ? (((/* implicit */int) ((_Bool) var_16))) : (((((/* implicit */int) arr_11 [i_13] [2U] [i_13] [i_13] [12U])) * (((/* implicit */int) var_6))))));
    }
}
