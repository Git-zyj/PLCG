/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226050
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                var_13 ^= ((/* implicit */int) (signed char)-1);
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_4] [i_3] [i_2])) | (((/* implicit */int) (signed char)-112))));
                            var_15 = ((/* implicit */int) arr_1 [i_0]);
                            var_16 = ((int) var_3);
                        }
                    } 
                } 
            }
            var_17 *= ((/* implicit */signed char) ((unsigned int) min((-4908742794067309351LL), (((((/* implicit */_Bool) var_4)) ? (6LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
        }
        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
        {
            arr_15 [(_Bool)1] [i_5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) var_9)))) != (((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_5])) <= (var_6))))));
            var_18 = ((/* implicit */unsigned long long int) min((arr_11 [i_5]), (((/* implicit */int) max((var_9), (((unsigned char) var_6)))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (unsigned short)6))));
                arr_18 [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_5 - 2] [i_6])))) : (((((/* implicit */_Bool) (signed char)72)) ? (6296933854951749664LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-82)))))));
                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_6 [i_6] [i_0]);
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-24193))))) ? (-6296933854951749664LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_5 + 2] [i_5] [i_6 - 1] [(unsigned char)7])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned char)91), (((/* implicit */unsigned char) (_Bool)1))))))))));
            }
        }
        var_21 = ((/* implicit */_Bool) ((-1681553382) - (((/* implicit */int) arr_17 [(signed char)7] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (signed char)3))));
                                var_23 = ((((/* implicit */int) arr_29 [i_7])) & (((/* implicit */int) arr_29 [i_7])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_8])) : (((/* implicit */int) arr_22 [i_8]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_38 [(_Bool)1] [i_7] [i_9] = ((/* implicit */signed char) var_4);
                        var_25 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-89)) + (2147483647))) >> (((9223372036854775807LL) - (9223372036854775792LL)))));
                        var_26 = ((/* implicit */_Bool) ((unsigned short) var_8));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)65512));
                        var_28 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_8))));
                        arr_41 [i_13] &= ((((/* implicit */_Bool) arr_37 [i_7])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_30 [i_13] [i_9] [i_7] [i_13])));
                    }
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_29 |= ((/* implicit */_Bool) arr_28 [18U] [i_8] [(_Bool)1]);
                        arr_45 [i_7] [i_7] [i_9] [i_14] = ((short) var_12);
                    }
                    for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        arr_48 [i_8] [i_7] [i_8] [i_8] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)6))))) - (var_2)));
                        var_30 = ((/* implicit */int) ((unsigned int) var_4));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-89)) % (((/* implicit */int) arr_20 [i_7]))))) % (var_5)));
                        var_32 = ((/* implicit */unsigned short) arr_40 [(unsigned short)8] [i_8] [i_8] [i_8]);
                    }
                }
            } 
        } 
        var_33 = ((((((/* implicit */_Bool) var_6)) && (var_8))) || (((/* implicit */_Bool) ((unsigned int) (_Bool)1))));
    }
    for (short i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 11; i_17 += 2) 
        {
            for (int i_18 = 4; i_18 < 11; i_18 += 2) 
            {
                {
                    arr_58 [i_18 + 1] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)183))));
                    var_34 = ((/* implicit */unsigned char) (_Bool)1);
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((((/* implicit */_Bool) 6296933854951749664LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)155)))) | (((/* implicit */int) ((_Bool) (signed char)-78))))))));
                }
            } 
        } 
        var_36 = ((/* implicit */short) (unsigned short)4);
        var_37 = ((/* implicit */unsigned int) (signed char)-66);
    }
    var_38 &= ((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) ((_Bool) ((_Bool) var_3))))));
    var_39 = ((/* implicit */signed char) (_Bool)1);
}
