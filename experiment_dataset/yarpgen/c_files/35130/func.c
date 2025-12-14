/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35130
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
    var_17 -= ((unsigned short) 1576624759);
    var_18 = ((/* implicit */unsigned int) ((-1448480969) % (((/* implicit */int) (unsigned char)244))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 765054370882236935ULL)) ? (3227493563U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16742))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((short) -233469707));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                        arr_10 [i_3] [i_2] [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) min((((1431316772) | (((/* implicit */int) arr_7 [i_0] [i_1] [i_3])))), ((~(((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)8] [i_3]))))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 2] [(short)5] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [i_2 + 2] [5ULL] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2 + 2] [i_2])))) : ((~(((/* implicit */int) max((((/* implicit */short) arr_3 [i_2 - 1])), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)8])))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_4])))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((unsigned int) 1067473726U)))))));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_5] [i_6])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_6])))) : (var_16)));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (short i_8 = 1; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)7553))))));
                                var_25 += ((unsigned char) (-(((/* implicit */int) ((_Bool) var_10)))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) -125231291)) ? (1067473733U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-24606)) ? (((/* implicit */int) var_3)) : (-125231281))), (-1544009919)))) ? ((+(((/* implicit */int) (short)-31961)))) : (((/* implicit */int) (signed char)-59)))))));
                }
            } 
        } 
        var_28 = (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)51504)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (989712871U))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        arr_29 [i_9] [i_9] = ((unsigned char) ((((/* implicit */int) arr_27 [i_9])) % (arr_26 [i_9])));
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_9])) >> (((/* implicit */int) arr_28 [i_9]))));
        arr_30 [i_9] = ((/* implicit */unsigned short) (((!(var_0))) ? (((/* implicit */int) arr_27 [i_9])) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13453))))));
        arr_31 [i_9] = ((/* implicit */unsigned short) (~((-(1157564496)))));
    }
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_45 [i_13] [i_12] [(unsigned char)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12])) ? ((-(((/* implicit */int) ((unsigned char) arr_39 [i_12]))))) : ((((_Bool)1) ? (-125231295) : (((/* implicit */int) (unsigned char)106))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_16))) * (((((int) (signed char)-92)) / (((/* implicit */int) (unsigned char)95))))));
                        arr_46 [i_10] [i_11] [i_10] [i_13] = ((/* implicit */signed char) arr_11 [i_11]);
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 1; i_14 < 10; i_14 += 4) 
                        {
                            arr_49 [i_10] [i_11] [i_10] [i_13] [i_14 + 2] = ((/* implicit */_Bool) ((unsigned int) var_0));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)113)) >= (((/* implicit */int) (unsigned char)34))))) + (min((((int) (_Bool)1)), (-785529096))))))));
                        }
                        for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) (+(((unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_4)))))));
                            arr_54 [i_10] [i_10] = ((((/* implicit */int) arr_41 [i_10] [i_11] [i_12] [i_10] [i_12])) & (((/* implicit */int) ((_Bool) 785529078))));
                            var_33 = ((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179))))) : ((~(((/* implicit */int) (unsigned short)30855)))))) > (((/* implicit */int) ((unsigned char) 1827061674U)))));
                            var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
        arr_55 [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)52082))));
    }
}
