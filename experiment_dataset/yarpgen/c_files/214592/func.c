/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214592
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
    var_15 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) ((var_12) <= (((/* implicit */int) var_13))))) : (((/* implicit */int) min((var_10), (((/* implicit */short) (signed char)4)))))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((var_8), (((/* implicit */long long int) (((-(((/* implicit */int) var_3)))) ^ (((/* implicit */int) ((unsigned short) var_14)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) << ((((+(272868818))) - (272868811)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [(unsigned char)4] [i_1] [i_0] = ((/* implicit */unsigned short) (short)27571);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) (unsigned short)39088)) : (((/* implicit */int) ((_Bool) arr_7 [i_1] [i_1])))));
                                var_19 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                    arr_14 [i_1] |= ((/* implicit */_Bool) (((~(var_8))) >> (((((/* implicit */int) ((unsigned short) (unsigned short)52980))) - (52946)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)6])))))));
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
            arr_19 [i_6] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_0 [i_5]))))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_22 *= ((/* implicit */int) ((signed char) (!((_Bool)0))));
                            arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_5))))));
                            var_23 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)45))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_5))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_8 [i_7] [i_7] [i_7 - 1] [i_7 - 2])))))));
                        }
                    } 
                } 
            } 
            var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_5] [i_6] [i_6] [i_5])))))));
            var_26 += ((/* implicit */int) var_4);
        }
        for (short i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            var_27 = min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))), (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_10] [i_5] [(short)14] [i_5] [(unsigned short)2])) ? (arr_20 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) arr_25 [i_10] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1])), (((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_28 = ((/* implicit */long long int) ((arr_10 [i_5] [i_10] [i_11] [i_5] [i_5]) >> (((((/* implicit */int) var_6)) - (26707)))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_24 [i_5] [i_11])), (((((/* implicit */_Bool) var_3)) ? (arr_32 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)32738)))))))) ? (min((((/* implicit */long long int) (unsigned short)51023)), (arr_32 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 2]))) : (min((max((((/* implicit */long long int) var_4)), (var_8))), (((/* implicit */long long int) (signed char)115))))));
                var_30 = ((/* implicit */signed char) max((var_30), (arr_8 [i_5] [i_10] [i_11] [12])));
            }
        }
        for (signed char i_12 = 2; i_12 < 15; i_12 += 3) 
        {
            arr_36 [i_5] [i_12] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned char) arr_26 [i_5] [i_5] [i_5] [i_5] [i_12] [i_12 + 1])), (arr_3 [i_5] [i_5] [(short)0]))), (((/* implicit */unsigned char) (_Bool)1))))), (arr_5 [i_5] [i_12])));
            var_31 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_12] [i_12] [i_12])) < (((/* implicit */int) (_Bool)1)))))));
            arr_37 [i_12] [i_12] = ((/* implicit */_Bool) var_6);
        }
        arr_38 [i_5] [(unsigned short)10] = min((((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)12727)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (short)27296)))) + (2147483647))) << ((((~(arr_30 [i_5] [i_5] [i_5]))) - (999954865175033556LL)))))), ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46701))) ^ (var_8))))));
        arr_39 [i_5] = ((/* implicit */int) ((unsigned int) min(((-(((/* implicit */int) var_0)))), (arr_1 [(unsigned char)7]))));
        var_32 = ((short) ((((/* implicit */_Bool) ((6478778258952234055LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39298)) || (((/* implicit */_Bool) var_3)))))));
        arr_40 [i_5] [i_5] |= ((/* implicit */int) var_2);
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 3) /* same iter space */
    {
        arr_44 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (-1)))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) arr_0 [i_13]))));
        arr_45 [i_13] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((short) var_1))));
    }
    var_33 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (max((2017523918U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (var_1)))));
}
