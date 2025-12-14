/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213394
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
    var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))));
    var_14 *= ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) var_5);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((3452269849U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        arr_15 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) >= (3702396319435381126LL)))) >= ((~(arr_1 [(unsigned short)8] [i_0 + 1])))));
                        var_16 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_3] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170)))))) : ((-(13U)))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [i_3] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)89))))) : ((-(((/* implicit */int) arr_5 [i_3] [i_3] [i_2])))))) : (((/* implicit */int) (unsigned char)28)));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((2330180393U) % (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))) > (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((var_10) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))))) : (-1140517332370216143LL)))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((33554431ULL) >> (((-8064462046798273032LL) + (8064462046798273081LL))))))));
        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_13 [13] [i_0] [i_0] [i_0])))) ? (min((var_6), (-2147483645))) : (((/* implicit */int) (unsigned short)47043))))) : ((-(7411203036429259479ULL)))));
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((arr_13 [i_4] [i_4] [i_5] [i_5]) | (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) > ((+((-9223372036854775807LL - 1LL)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)31))))) ? (((/* implicit */unsigned int) (~(arr_18 [i_6] [11])))) : (((((/* implicit */_Bool) -1140517332370216173LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_4] [i_6] [i_7] [i_4]))) : (2099020877U)))));
                        var_21 *= (!(((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_5] [9U])));
                        var_22 *= ((/* implicit */_Bool) arr_3 [(unsigned short)10] [i_4]);
                        arr_29 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (short)-21019)))));
                    }
                    for (int i_8 = 2; i_8 < 10; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-((-((+(((/* implicit */int) (unsigned short)53713)))))))))));
                        var_24 *= ((/* implicit */unsigned char) ((((var_2) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8192))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1140517332370216171LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [i_5] [i_6 + 1] [i_5] [i_8 + 3] [i_8 + 3]))))) : (2330180379U)))));
                        var_25 *= ((/* implicit */short) ((int) (~(4186215921U))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 *= ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((1140517332370216173LL) - (1140517332370216149LL)))))) ? (((/* implicit */long long int) 2666014341U)) : (min((4340029982946868446LL), (((/* implicit */long long int) var_5)))))) / (((max((1140517332370216161LL), (((/* implicit */long long int) var_8)))) & (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))));
                        var_27 *= ((/* implicit */unsigned char) min(((+(arr_25 [i_4 + 1] [i_5 + 2] [i_6 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53709)) ? (1341350120) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */int) (unsigned short)2671)) + (((/* implicit */int) (unsigned short)8192)))) : (203298208))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1140517332370216168LL)) ? (min((1140517332370216173LL), (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) var_8)))))))));
                    }
                }
            } 
        } 
    } 
}
