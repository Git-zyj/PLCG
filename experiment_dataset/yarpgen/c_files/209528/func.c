/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209528
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */int) (signed char)-60)) == (((/* implicit */int) (_Bool)1))))) - ((~(((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_15))) || ((_Bool)1))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)-16042), (((/* implicit */short) (signed char)-79))))) ? (((/* implicit */int) arr_1 [i_0])) : (max((((((/* implicit */int) (unsigned char)192)) / (arr_4 [1U] [1U] [i_0 + 1]))), (((/* implicit */int) max(((unsigned char)184), (((/* implicit */unsigned char) (_Bool)1)))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45812)) ? (((/* implicit */int) (unsigned short)32141)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_21 = ((/* implicit */unsigned short) max((max((18446744073709551585ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_1]), (((/* implicit */unsigned int) (signed char)-55)))))));
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) (unsigned short)19744)) * (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        arr_15 [i_4] [i_1] [i_1] [i_1] = max(((-(((/* implicit */int) (signed char)45)))), ((~(((/* implicit */int) arr_3 [i_2])))));
                        var_23 = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                            arr_18 [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 18446744073709551575ULL);
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 20; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_6 - 3] [i_4] [i_6 + 2] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))));
                            arr_22 [i_0] [i_1] [i_2] [i_4] [i_6 - 3] [(_Bool)1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) 1090031865U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))));
                            arr_23 [i_0] [5LL] [i_1] [i_2] [i_4] [i_4] [5LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) ^ (940979221U)));
                            arr_24 [i_2] [i_4] [(unsigned char)14] [i_2] [i_6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (56ULL)))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_28 [i_4] [i_4 + 2] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) min((arr_27 [i_4] [i_4] [i_2] [i_4] [i_7] [i_7 - 3]), (((/* implicit */short) var_3))))), ((unsigned short)5481)))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)59))))) ? (var_11) : (((/* implicit */unsigned long long int) var_18)))) - (5002067905943154618ULL)))));
                        }
                    }
                    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        var_27 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))) != (var_5)));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 4; i_9 < 20; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) min((((((arr_7 [i_8 - 1]) + (9223372036854775807LL))) << (((/* implicit */int) var_2)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)144)), (var_17)))))))));
                            arr_33 [i_0] [i_0] [i_0] [i_2] [i_8 - 1] [i_8] [i_9] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((_Bool) (signed char)59))), (max((((/* implicit */unsigned int) (signed char)-20)), (var_16))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                            arr_34 [i_0] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3403467744442530449LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1])))) | (702443336)))) ? (((/* implicit */int) var_3)) : ((~((~(((/* implicit */int) (short)5649))))))));
                        }
                    }
                }
            } 
        } 
        arr_35 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_1)))));
        arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [(_Bool)1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1])) / (((/* implicit */int) max((var_8), (arr_5 [i_0]))))))) ? (max((((/* implicit */int) arr_26 [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1])), (((((/* implicit */_Bool) 3887496589U)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (unsigned char)73)))))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_10 = 1; i_10 < 20; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((arr_29 [i_0 + 1] [i_0 - 1]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))));
                            var_30 = ((/* implicit */_Bool) (short)-31331);
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) max((((1023872794U) << (((18446744073709551585ULL) - (18446744073709551576ULL))))), (((/* implicit */unsigned int) ((((/* implicit */int) min(((signed char)6), (((/* implicit */signed char) var_7))))) >> (((((/* implicit */int) var_8)) - (69))))))));
            arr_48 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12426))))) ? (((/* implicit */unsigned long long int) ((var_17) % (((/* implicit */unsigned int) ((/* implicit */int) (short)12412)))))) : (((((/* implicit */_Bool) (short)32762)) ? (12668738659997962861ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)16)) ? (-2147483642) : (((/* implicit */int) var_2)))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_15 = 2; i_15 < 20; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 4; i_16 < 20; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_17 = 2; i_17 < 21; i_17 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) : (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483636)))))) : (arr_52 [i_0 - 1])));
                            var_33 = ((/* implicit */unsigned int) min((max((4472500200532811658ULL), (var_4))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12424))) * (max((((/* implicit */unsigned long long int) (signed char)15)), (var_4)))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) min((((var_11) >= (((/* implicit */unsigned long long int) 1U)))), (((_Bool) arr_41 [i_15]))));
                            arr_60 [i_0 + 1] [i_0 + 1] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) max((((((((((/* implicit */_Bool) 13835058055282163712ULL)) ? (((/* implicit */int) arr_26 [i_18] [i_16] [i_15 - 1] [i_14] [i_0 + 1])) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) arr_31 [i_15])) * (((/* implicit */int) arr_44 [i_15] [i_14] [i_15] [i_16 + 2])))))), (((/* implicit */int) (_Bool)1))));
                        }
                        arr_61 [2ULL] [2ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967291U)) ? (((2985790922U) & (2U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            var_35 = ((/* implicit */long long int) ((unsigned int) max((4294967290U), (((/* implicit */unsigned int) arr_59 [(_Bool)1])))));
        }
    }
    var_36 |= ((/* implicit */short) var_6);
    var_37 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_14)), (((var_4) << (((var_16) - (118571326U))))))) <= (((/* implicit */unsigned long long int) var_16))));
}
