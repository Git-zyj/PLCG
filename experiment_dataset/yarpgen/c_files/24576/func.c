/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24576
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-13648)) : (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) var_11))));
                                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551608ULL))) << (((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 1] [(short)16] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_1] [(unsigned char)13] [i_1 - 1] [i_1] [i_1 - 1] [(unsigned char)13]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43265))) ^ (4294967275U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) (_Bool)0)))), ((!(((/* implicit */_Bool) 5419102917527086775LL)))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))), (min((((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned short)65531))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-5419102917527086768LL)))))));
                                arr_18 [i_6] [14ULL] [3] [i_1 + 1] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5 + 1] [i_6 - 1] [i_2 - 2] [0U] [i_1 + 1])) || (((/* implicit */_Bool) arr_15 [i_5 + 1] [i_6 - 1] [i_2 - 3] [i_5] [i_1 - 2])))))));
                                var_23 = ((/* implicit */short) arr_5 [i_0] [i_2] [i_5]);
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */short) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [9] [(signed char)2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (((-(((/* implicit */int) arr_3 [i_2])))) == (((/* implicit */int) (!(((/* implicit */_Bool) -8502408701306048332LL)))))))) * (((/* implicit */int) (signed char)70))));
                                arr_26 [12ULL] [12ULL] [i_1] [12ULL] [i_7] [i_7 + 1] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_18))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (int i_10 = 3; i_10 < 10; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            {
                                var_25 ^= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) (unsigned short)3)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) <= (24U)))));
                                arr_43 [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)11), (((/* implicit */unsigned short) (_Bool)1)))))) ^ (((((/* implicit */_Bool) ((long long int) -7974316685697344331LL))) ? (5419102917527086768LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526))))))))));
                            }
                        } 
                    } 
                    var_26 = arr_15 [i_9] [i_9] [i_9] [i_10 - 3] [i_11];
                    /* LoopSeq 3 */
                    for (long long int i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1318822703)), (-7974316685697344321LL)))) ? (((var_18) - (7974316685697344322LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 2; i_15 < 10; i_15 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_9]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)109)) + (var_4)))) || (((/* implicit */_Bool) -7974316685697344310LL)))))) : (548241868459024109LL)));
                            var_29 = ((/* implicit */unsigned short) var_0);
                            arr_48 [i_9] [i_10 - 1] [i_11] [i_14] [i_9] [i_14] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_12 [i_15 + 1] [i_14 + 1] [i_15 + 1] [i_10 - 3] [i_10])))) ^ (((/* implicit */int) var_12))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            arr_53 [i_14] [i_14] = ((/* implicit */int) var_8);
                            var_30 *= ((/* implicit */unsigned int) ((((((((/* implicit */int) (short)-25277)) + (2147483647))) >> (((var_3) - (9034148U))))) << (((max((((var_10) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42359))))), (((/* implicit */long long int) (signed char)113)))) - (33134LL)))));
                        }
                        arr_54 [i_9] [i_14] [i_10] [i_11] [i_14] [(signed char)2] = (~(((/* implicit */int) (signed char)127)));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8)))))))) & (((((/* implicit */_Bool) (unsigned short)23176)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_17))))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_39 [i_17 - 1] [i_17 - 1] [i_17] [i_17] [1U])) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)0))))));
                        arr_57 [i_9] [i_9] [i_10 - 1] [i_11] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) min((((arr_29 [i_9]) ^ (((/* implicit */long long int) var_4)))), (((((/* implicit */_Bool) -512)) ? (var_0) : (((/* implicit */long long int) 1748463733U)))))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((11085791004364253762ULL), (((/* implicit */unsigned long long int) (signed char)-113))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1])), (var_8)))) : (((/* implicit */int) ((signed char) max((arr_4 [i_9] [i_10] [i_11]), ((signed char)-84)))))));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((var_0), (((/* implicit */long long int) (signed char)127)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)9513)) && (((/* implicit */_Bool) (unsigned short)65535))))))))));
                        var_35 = ((/* implicit */long long int) ((max((((((/* implicit */int) (unsigned short)1536)) / (2147483647))), (((int) 770164779)))) % (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-1410)))))));
                    }
                }
            } 
        } 
    } 
}
