/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228145
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-960284975) % (((/* implicit */int) (unsigned char)174))))) ? (((((/* implicit */_Bool) -492269546)) ? (((/* implicit */int) (unsigned short)45449)) : (((/* implicit */int) (unsigned char)100)))) : (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) arr_2 [i_0]))), ((~(((/* implicit */int) arr_2 [i_0])))))))));
                var_14 |= ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1]))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)55354)) : (((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) ((int) arr_2 [i_1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)150)) >= (784559650)))) : (((/* implicit */int) (unsigned char)105))));
                    var_17 = ((/* implicit */int) (unsigned char)112);
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)105)))) & ((-(((/* implicit */int) (unsigned char)111))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (unsigned char)128)) : (var_5)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [(unsigned short)8] [i_2] [i_2] [(unsigned short)8] = ((/* implicit */unsigned char) arr_0 [i_0]);
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (unsigned char)72))));
                                arr_19 [i_0] [i_1] [i_0] [i_3] [i_4] [(unsigned short)6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)150)) : ((~(((/* implicit */int) (unsigned char)140))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_11)))) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) ((unsigned short) var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            {
                arr_28 [i_5] [i_6] = (~(min((((((/* implicit */_Bool) (unsigned char)67)) ? (var_5) : (((/* implicit */int) var_9)))), (377706928))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) (unsigned char)150);
                            arr_33 [i_5] [i_6] [i_6] [i_7] [i_8] = (unsigned char)138;
                            var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_22 [i_5 - 3]), ((unsigned char)103)))), (((((/* implicit */int) var_7)) << (((arr_32 [(unsigned char)1] [i_6 + 2] [i_8] [i_8] [i_8] [i_8]) + (1961561046)))))));
                            arr_34 [i_8] [i_7] [16] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)199))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    var_23 = ((/* implicit */int) max((var_23), ((~(arr_30 [i_9] [i_6 + 1] [i_5 - 1] [i_5 - 1])))));
                    arr_37 [i_5] [i_6 + 2] [i_9] [i_9] = (+(arr_30 [i_5] [i_5] [i_5] [i_6 + 2]));
                }
                for (unsigned char i_10 = 2; i_10 < 14; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) (-(var_11)));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 2; i_11 < 14; i_11 += 4) 
                    {
                        var_25 = ((unsigned char) (+(((/* implicit */int) var_4))));
                        arr_43 [i_5] [4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((536866816) & (((/* implicit */int) (unsigned short)3951))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3951)) / (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) var_1)) : (min((arr_21 [i_5]), (var_11))))) : (((/* implicit */int) (unsigned char)34))));
                        arr_44 [(unsigned short)16] [i_6] [i_10 - 1] [i_11] = (((!(((/* implicit */_Bool) (unsigned char)75)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) > (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)148))))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        var_26 -= (unsigned short)32768;
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_2))))) | (((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_12])) ? (((/* implicit */int) (unsigned short)3954)) : (var_11)))))));
                            var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_10] [i_13])) ? (((/* implicit */int) arr_40 [i_5] [i_6 + 1])) : (((/* implicit */int) (unsigned char)112))));
                            var_29 += ((/* implicit */unsigned char) ((arr_32 [i_5] [i_6 + 2] [i_10] [i_10 - 1] [i_12] [i_6]) > ((+(((/* implicit */int) arr_25 [1] [i_6] [i_10]))))));
                            var_30 = ((((/* implicit */int) (unsigned short)61582)) & (((/* implicit */int) arr_22 [i_10 + 1])));
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_31 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_38 [i_5])) ? (arr_39 [i_6 - 2] [i_5 - 3] [i_5]) : (max((arr_21 [i_5]), (((/* implicit */int) var_4)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (arr_49 [i_5] [i_5 + 3] [i_14] [i_6 - 1] [i_14] [i_6 - 1]) : (((((/* implicit */int) (unsigned char)129)) + (((/* implicit */int) (unsigned char)174)))))) - (2119490798)))));
                    var_32 = ((/* implicit */int) max((var_32), (((((((/* implicit */int) (unsigned short)8064)) > (((/* implicit */int) (unsigned short)3959)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61594)) - (((/* implicit */int) (unsigned short)8067))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)8064)))) : (((/* implicit */int) var_9))))));
                }
            }
        } 
    } 
}
