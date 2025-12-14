/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242823
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] [8] [i_0 + 2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2857675863U)) ? (1124327653795259835LL) : (((/* implicit */long long int) 2857675863U))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2857675863U)));
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [(unsigned short)12] [i_1])))) > (((arr_1 [i_0]) & (15117324586263451903ULL)))));
            var_15 ^= 1403146951463724232ULL;
            var_16 ^= ((/* implicit */short) -2147483642);
            arr_6 [i_0] = arr_1 [i_0];
        }
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 3862031153U)) != (((((/* implicit */_Bool) 3862031162U)) ? (14627864251259040227ULL) : (((/* implicit */unsigned long long int) 432936133U)))))) ? (min((((arr_3 [i_0] [i_0] [i_0 + 1]) % (arr_3 [i_0 + 4] [i_2] [i_2]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)0)), (var_2)))))) : (((/* implicit */unsigned long long int) (+(min((3862031162U), (432936140U))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_2))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [1U] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (~(2147483647)))) : (arr_9 [i_0 + 2] [i_2 + 1] [i_2 - 1])));
                        arr_20 [i_0] [i_0] [(signed char)22] [i_3] [i_4] [i_0] [7U] = ((((/* implicit */unsigned long long int) -2147483626)) % (((((/* implicit */_Bool) -1914501266)) ? (((/* implicit */unsigned long long int) 432936142U)) : (10396191840717125045ULL))));
                    }
                    for (int i_6 = 1; i_6 < 23; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_0] [i_3] [i_3] [4ULL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [16ULL] [i_2] [(unsigned char)11])) ? (arr_14 [i_6] [i_0] [i_3] [i_0] [i_0] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2 - 2])))));
                        arr_25 [(_Bool)1] [(_Bool)1] [7] [(short)22] [i_0] = (-(((/* implicit */int) (signed char)-112)));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [(short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6 + 1] [i_0] [i_0 + 1] [i_4 - 1]))) : (arr_12 [i_0 + 1] [i_0 - 1] [i_0])));
                        arr_26 [i_0 - 1] [i_0] [22U] [(short)7] = ((/* implicit */unsigned long long int) 2220911830U);
                    }
                }
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_10 [(short)9]))));
            }
        }
        arr_27 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) (unsigned short)64917))))) ? (min((2147483647), (arr_4 [i_0 - 1] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))), (min((min((((/* implicit */unsigned long long int) var_1)), (arr_1 [9ULL]))), (((unsigned long long int) arr_17 [i_0] [i_0] [i_0 + 2] [i_0]))))));
        var_21 *= min(((~(var_6))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (arr_14 [10U] [20LL] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 10396191840717125045ULL)) ? (((((/* implicit */_Bool) (-(0U)))) ? (arr_28 [i_7]) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_7] [i_7]))) ? (((((/* implicit */_Bool) 432936133U)) ? (((/* implicit */int) (short)15497)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) 1439006445U)) || (((/* implicit */_Bool) var_7))))))))));
        arr_31 [i_7] = ((/* implicit */int) min((min((6344210111027549434LL), (((/* implicit */long long int) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7])))), (((/* implicit */long long int) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7]))));
    }
    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
    {
        arr_34 [i_8] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8] [(signed char)17] [(signed char)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_8]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) + (2865631521U)))))), (var_6));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 16; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            arr_44 [i_8] [i_11] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_7 [i_10] [i_10]) ? (((/* implicit */int) arr_7 [i_11] [i_10])) : (((/* implicit */int) arr_7 [i_8] [i_11])))))));
                            var_23 = (!(((/* implicit */_Bool) (unsigned char)29)));
                        }
                        arr_45 [i_11] [i_10] [i_10] [(signed char)13] = (i_10 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 17889695181074036248ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -524691094)) / (1875279305U)))) : (((((/* implicit */_Bool) arr_9 [i_8] [9ULL] [i_10])) ? (9187343239835811840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) >> ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_10] [i_10] [i_9 - 1] [i_9]))) : (16597574936976273338ULL))) - (191ULL)))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 17889695181074036248ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -524691094)) / (1875279305U)))) : (((((/* implicit */_Bool) arr_9 [i_8] [9ULL] [i_10])) ? (9187343239835811840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) >> ((((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_10] [i_10] [i_9 - 1] [i_9]))) : (16597574936976273338ULL))) - (191ULL))) - (18446744073709551559ULL))))));
                        arr_46 [i_8] [0U] [i_10] [i_10] [i_11] |= ((((/* implicit */_Bool) min((1429335765U), (3459572411U)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_29 [9U])) >> (((var_8) - (16760686479344487617ULL))))), (((/* implicit */int) var_9))))) : (arr_28 [i_8]));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_13 = 1; i_13 < 14; i_13 += 2) 
        {
            for (int i_14 = 3; i_14 < 14; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    {
                        arr_54 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_48 [i_13]))) ? (((/* implicit */int) min((arr_23 [i_15] [i_13] [i_14 + 3] [i_15] [i_13 + 3]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_23 [(short)17] [i_13] [i_14 - 2] [i_15] [i_13 + 3]))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_13 + 2] [i_14 + 2] [i_14] [i_14])) / (((/* implicit */int) arr_21 [i_13 + 2] [i_8] [i_14 + 1] [i_14 - 2]))))) ? (((/* implicit */unsigned long long int) 631350903)) : (min((var_13), (arr_3 [i_13 + 3] [i_13 - 1] [i_13 - 1]))))))));
                        arr_55 [(unsigned char)12] [i_13] [3] [i_15] [3] [i_13] = ((min((((/* implicit */unsigned long long int) var_9)), (arr_9 [i_13 + 1] [i_13 + 3] [i_13 + 3]))) * (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_13 + 2] [i_13 + 1] [i_13 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                        arr_56 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (signed char)(-127 - 1);
                    }
                } 
            } 
        } 
        var_25 &= ((/* implicit */unsigned int) arr_32 [i_8] [i_8]);
        arr_57 [5] = ((/* implicit */unsigned long long int) var_2);
    }
    var_26 = ((/* implicit */unsigned long long int) min((((3862031149U) >> (((17465492319353083504ULL) - (17465492319353083487ULL))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 4294967275U)) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_0)))))));
}
