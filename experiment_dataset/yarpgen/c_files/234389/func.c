/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234389
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
    var_17 = ((/* implicit */signed char) var_16);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)556))) + (((unsigned int) (_Bool)1))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_9);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_3)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) (short)-11852);
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)25167)) + (((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (signed char)42);
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1])) ? (((/* implicit */int) (short)17410)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (short)32767))))));
                            arr_17 [i_1 - 2] [(unsigned short)15] [i_3] [i_3] [i_1 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_3] [i_4] [(signed char)9] [i_2] [i_3])) ? (max((arr_10 [i_3] [i_3] [i_3] [i_3] [i_5]), (((/* implicit */long long int) arr_16 [i_1] [i_2] [i_3] [i_4] [i_3])))) : (((/* implicit */long long int) var_3)))) + (((/* implicit */long long int) ((var_3) + (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))))));
                            arr_18 [i_1 - 3] [i_3] [i_3] [i_3] [i_1 - 3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)32753))))) ? (((var_12) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)11852), (((/* implicit */short) (_Bool)1)))))))) + (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_3] [i_3 - 1])) + (((/* implicit */int) arr_13 [i_3] [i_5])))))));
                        }
                        var_24 += ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)23625)) ? (((/* implicit */int) (short)11851)) : (((/* implicit */int) (short)-32767))))));
                        var_25 &= ((signed char) min(((short)-32767), (arr_14 [i_1] [(short)0] [i_1] [i_1] [(short)0] [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_3] [i_3] = ((/* implicit */short) var_5);
                        arr_22 [i_1 - 3] [i_3] [i_1 - 3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)37))))) ? (((((/* implicit */_Bool) (unsigned short)19132)) ? (((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_20 [i_1] [i_2] [i_3 - 1] [i_1] [i_2] [5LL])))) : (((/* implicit */int) (signed char)21))));
                        arr_23 [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_1])))) : (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3])));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)42)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58688)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) var_3);
                        var_28 = (i_3 % 2 == zero) ? (((/* implicit */int) (((~(((((/* implicit */_Bool) (unsigned short)46404)) ? (9121169792385381238LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))))))) + (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)25391), (((/* implicit */unsigned short) (signed char)114))))) << (((((/* implicit */int) ((signed char) arr_9 [i_3] [i_1 - 3] [i_3]))) - (12))))))))) : (((/* implicit */int) (((~(((((/* implicit */_Bool) (unsigned short)46404)) ? (9121169792385381238LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))))))) + (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)25391), (((/* implicit */unsigned short) (signed char)114))))) << (((((((/* implicit */int) ((signed char) arr_9 [i_3] [i_1 - 3] [i_3]))) - (12))) - (84)))))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_25 [i_1] [i_2] [i_2] [i_1] [i_3 + 2] [i_8]))) + (((/* implicit */int) arr_1 [i_1]))));
                        arr_31 [i_1] [i_2] [i_2] [i_3] [i_3 + 1] [i_3] = ((/* implicit */long long int) arr_20 [i_1] [(unsigned short)5] [i_3] [i_8] [i_2] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_2] [i_2] [i_2]))) + (arr_3 [i_1])))));
                        arr_35 [0] [0] [i_9] |= ((/* implicit */unsigned long long int) ((var_15) + (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)37)), ((unsigned short)12268)))) + ((~(((/* implicit */int) var_5)))))))));
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        arr_40 [i_3] [i_3] [i_2] [i_3] [i_3 - 1] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) max((var_2), (((/* implicit */short) var_4))))) : (((/* implicit */int) (short)-2962))))) : (((((/* implicit */unsigned long long int) 4294967285U)) + (((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_2])))))))));
                        var_31 = ((/* implicit */long long int) arr_33 [i_1] [i_1 + 1] [i_3] [i_1 - 2] [i_1] [i_1 - 3]);
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40145)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49332)))))));
                        arr_41 [i_1 + 1] [i_2] [i_2] [i_10] [(signed char)13] [i_3] = ((/* implicit */unsigned short) max((2147483647), (((/* implicit */int) (_Bool)1))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_15) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned char)198)))))))) ? ((((~(var_6))) + (((/* implicit */int) var_10)))) : (((/* implicit */int) var_1))));
                    }
                    arr_42 [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((arr_11 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1]) + (((/* implicit */long long int) var_6)))) + (((((/* implicit */long long int) var_15)) + (arr_19 [i_1] [(_Bool)1] [i_1] [i_1] [i_3] [i_3 + 2])))));
                }
            } 
        } 
        arr_43 [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_0 [i_1 - 3]))))));
        var_34 &= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2754))) : (4294967295U)))) ? (((4294967271U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
    {
        arr_46 [i_11] [i_11] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)62782))) : (((/* implicit */int) arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
        arr_47 [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
    }
    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2754))) + (-6155494836723663988LL))))), (((/* implicit */long long int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) + (((/* implicit */int) var_1))))))))));
    var_36 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)3)))), (((((/* implicit */int) var_14)) + (var_13))))), (((/* implicit */int) var_14))));
}
