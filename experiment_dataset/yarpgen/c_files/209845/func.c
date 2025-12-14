/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209845
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1] [(unsigned char)3])) ? (((/* implicit */int) var_10)) : (-2002651129))))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 2])))));
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)250)) | (((/* implicit */int) (short)30621))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            arr_17 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1)));
                            var_11 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned char)255))));
                            arr_18 [i_0 - 1] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) var_3);
                            var_12 = ((/* implicit */unsigned int) (~((~(((((/* implicit */int) (_Bool)1)) ^ (var_9)))))));
                        }
                        var_13 = ((/* implicit */unsigned char) var_9);
                        /* LoopSeq 4 */
                        for (int i_5 = 1; i_5 < 23; i_5 += 1) 
                        {
                            var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)48)))) : (((/* implicit */int) arr_15 [i_0] [(unsigned char)2] [(unsigned char)4] [10U] [i_5] [(unsigned char)4] [i_0])))))));
                            var_15 = ((/* implicit */unsigned char) (_Bool)1);
                            var_16 = ((/* implicit */_Bool) (-((~(max((((/* implicit */long long int) arr_14 [i_0 - 1] [i_5])), (arr_20 [i_0] [i_1] [i_1] [i_1] [i_5])))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) var_6)), ((-((+(((/* implicit */int) (unsigned char)113)))))))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)27661), (((/* implicit */unsigned short) arr_5 [i_2 + 1] [i_0] [i_0 + 2])))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-145015059) : (var_9)))) ? (((/* implicit */int) min((var_10), ((unsigned char)142)))) : (((/* implicit */int) var_7))))) ? (((4095U) + (((/* implicit */unsigned int) -1887470876)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0 + 1] [i_0 + 1] [i_1]));
                            var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (unsigned short)63301))))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (((arr_16 [i_0] [i_1] [(unsigned char)0] [i_3] [i_7]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78)))))));
                            arr_25 [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) arr_21 [i_7] [i_7] [14LL] [i_2] [i_1] [i_1] [i_0])))));
                            arr_26 [i_0] [i_1] [i_1] [i_3] [(unsigned short)8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_3 + 2] [(unsigned char)9] [i_0 + 2])) : (((/* implicit */int) var_10))));
                            arr_27 [i_0 + 1] [i_1] [i_7] [i_3] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)169))));
                        }
                        for (short i_8 = 3; i_8 < 22; i_8 += 3) 
                        {
                            var_22 &= var_6;
                            arr_31 [i_8 + 1] [i_8] [i_3 - 1] [i_2 + 1] [i_2] [i_8] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0]))) ^ (var_4)))) ? (max((4294963201U), (((/* implicit */unsigned int) (unsigned char)41)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42)))))) ? (max((((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned int) var_0)) : (4095U))), (1357571451U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2])))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_16 [i_1] [i_1] [i_8] [(short)4] [(unsigned char)17])));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (-1877737475) : (((/* implicit */int) (short)-1)))))));
                            var_25 = ((/* implicit */unsigned char) var_4);
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_9 = 1; i_9 < 12; i_9 += 1) 
    {
        arr_34 [i_9] = (unsigned char)18;
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            for (unsigned int i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((min((((960991291) / (((/* implicit */int) (unsigned char)52)))), (((((/* implicit */int) (unsigned char)221)) / (((/* implicit */int) arr_24 [i_11])))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (1583811544U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26440)))))) ? (((/* implicit */int) arr_35 [i_9 - 1] [i_11 - 1])) : (1281611907))))))));
                    arr_41 [(unsigned char)2] [i_9] [i_11] [(unsigned char)2] = ((/* implicit */long long int) arr_6 [i_9] [i_9] [i_11]);
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((/* implicit */int) var_3)) / (((/* implicit */int) ((_Bool) var_3))))) == (((145015040) * (((((/* implicit */int) (unsigned short)49925)) / (2023034085))))))))));
                }
            } 
        } 
    }
    for (int i_12 = 0; i_12 < 25; i_12 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) (((+(-1398377464022078352LL))) / (((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_12])) * (((/* implicit */int) arr_44 [i_12])))))));
        arr_46 [i_12] = ((((/* implicit */_Bool) min((arr_45 [i_12]), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)-30331)) ? (arr_45 [i_12]) : (arr_45 [i_12]))));
        /* LoopNest 3 */
        for (unsigned char i_13 = 3; i_13 < 23; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_12] [i_13] [i_14])) ? (((((/* implicit */_Bool) arr_44 [i_13 - 3])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)34)) > (((/* implicit */int) (unsigned char)192))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (4294967295U)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_13] [i_13 - 3]))))))))));
                        var_30 = ((/* implicit */unsigned char) 145015055);
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned int) ((int) arr_47 [i_12] [i_12] [i_12]));
    }
    var_32 |= ((/* implicit */unsigned int) var_2);
    var_33 = (unsigned char)234;
}
