/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210533
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_10 *= ((/* implicit */short) max((((/* implicit */unsigned short) (short)-1)), (min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)2047)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_3 - 1] [i_0] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_3 + 1]))))) ? ((((-(((/* implicit */int) var_4)))) - (((/* implicit */int) arr_0 [i_4])))) : (((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)65532)))) - (((/* implicit */int) ((_Bool) var_4)))))));
                                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) arr_2 [i_0]))));
                                var_12 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]);
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_3 - 3])) ? (((/* implicit */int) arr_1 [i_3 - 3])) : (((/* implicit */int) (signed char)-32)))) & (((/* implicit */int) ((arr_8 [i_3] [i_3 - 4] [i_3] [i_0] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) < ((+(((/* implicit */int) (unsigned short)13815))))))))));
        arr_15 [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_3 [i_0]))))) ? (((unsigned int) (unsigned short)63488)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63489))))), (((/* implicit */unsigned int) (unsigned short)6)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_9);
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2061)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-127)) > (((/* implicit */int) var_1)))))) : (min((((/* implicit */unsigned int) var_7)), (var_8)))));
                                arr_31 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) && (((((/* implicit */_Bool) var_2)) && (var_4))))) || (((/* implicit */_Bool) min(((short)-10353), (((/* implicit */short) arr_29 [i_6] [i_5] [(unsigned short)5] [i_6 + 1] [i_6 + 1] [i_7] [i_9 + 1])))))));
                                arr_32 [i_5] [i_5] [i_5] = ((/* implicit */int) (unsigned short)2055);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_10 = 1; i_10 < 24; i_10 += 4) 
                    {
                        var_15 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)65532), (((/* implicit */unsigned short) (_Bool)1))))) ^ (((/* implicit */int) (unsigned short)65532)))))));
                        /* LoopSeq 3 */
                        for (int i_11 = 3; i_11 < 24; i_11 += 1) 
                        {
                            var_16 = ((/* implicit */short) (+(((/* implicit */int) ((short) (short)-1)))));
                            var_17 = ((/* implicit */int) min((var_17), ((-(((var_6) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) var_3)))))))));
                            var_18 -= (-(((/* implicit */int) arr_16 [i_7] [i_6 + 1])));
                            var_19 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)48954))));
                            arr_38 [i_11] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) var_6))))) != (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_5])) < (((/* implicit */int) var_9))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_20 = ((/* implicit */int) arr_27 [i_5] [i_5] [(_Bool)1] [i_10] [i_12] [i_12] [i_10 + 1]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)10353)) ? (53750898U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10 + 1] [i_6 + 1])))));
                            var_22 = ((/* implicit */_Bool) (short)-10346);
                        }
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            arr_43 [i_5] [i_7] [i_7] [i_5] [i_13] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2521231724717828458LL)) ? (((/* implicit */int) (unsigned short)2070)) : (((/* implicit */int) (unsigned short)2052))))) ? ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_1))))));
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_5] [i_5]))));
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            var_24 += ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) >> (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (unsigned short)58199)) : (((/* implicit */int) (unsigned short)65535))))));
                            arr_48 [i_5] [i_6] [i_5] [i_6] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (-1) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_7] [i_7] [i_15] [i_15] [i_15])) ? (var_2) : (((/* implicit */int) var_7)))) != (((/* implicit */int) (!((_Bool)1)))))))));
                        }
                        var_25 = (i_5 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_14] [i_14] [i_7] [i_6] [i_5] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3023313724172860403LL)) ? (-3023313724172860404LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) + (max((((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_21 [i_5] [i_5])) + (6409)))))))))) : (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_14] [i_14] [i_7] [i_6] [i_5] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3023313724172860403LL)) ? (-3023313724172860404LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))) + (max((((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))), (((((/* implicit */int) var_4)) << (((((((/* implicit */int) arr_21 [i_5] [i_5])) + (6409))) + (7684))))))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) 597663656);
    }
    for (short i_16 = 0; i_16 < 11; i_16 += 3) 
    {
        var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2047)) + (((/* implicit */int) var_6))))) ? (2949606126U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? ((-(arr_47 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) : ((+(((var_4) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_9))))))));
        var_28 = ((/* implicit */unsigned int) (unsigned short)63510);
        arr_51 [i_16] = ((/* implicit */unsigned short) (short)0);
    }
    var_29 = ((/* implicit */int) var_0);
}
