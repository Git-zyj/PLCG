/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43596
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
    var_13 = ((/* implicit */_Bool) (~(144114638320041984ULL)));
    var_14 = ((/* implicit */unsigned char) 17887817538405932232ULL);
    var_15 = ((/* implicit */long long int) max(((~(var_12))), (18446744073709551604ULL)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) max((18302629435389509624ULL), (((/* implicit */unsigned long long int) var_8))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((144114638320041984ULL), (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_2] [i_4 - 1] [i_4 - 1])) ? (11ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)21707)))))))));
                                var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4] [12]) % (arr_12 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_5 [i_2 - 1])) : ((-(((/* implicit */int) (unsigned short)58127))))))));
                                var_19 ^= ((/* implicit */unsigned int) (signed char)21);
                                var_20 = ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) var_9);
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1301873018)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? ((-(arr_10 [i_0] [i_0] [i_0] [i_2] [i_5]))) : (var_4)));
                    }
                    for (short i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        arr_19 [i_6 + 1] [i_2] [i_2] [(signed char)7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)35843))))) ? (((((/* implicit */unsigned long long int) -9156293146825190642LL)) / (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) var_7))))));
                        var_23 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)18681)), (18446744073709551615ULL)));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1]))) & (arr_6 [i_0] [2ULL] [i_7])));
                        var_25 = (~(((/* implicit */int) arr_8 [i_2] [i_1] [i_2 - 2] [i_7])));
                        var_26 = ((/* implicit */short) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (short)4732)))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    var_27 = ((/* implicit */signed char) (-(3847591698108041435ULL)));
                    var_28 -= ((((unsigned long long int) arr_10 [i_8] [i_10 + 1] [i_9] [i_9] [i_10 + 1])) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    var_29 ^= ((/* implicit */short) arr_10 [(unsigned short)8] [(signed char)0] [i_9] [(signed char)2] [i_10 + 1]);
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (((((/* implicit */_Bool) 18302629435389509632ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32736))) : (0ULL)))));
                                var_31 ^= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_5 [i_10 + 1]))))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (!(var_0))))));
                                var_33 = (!(((/* implicit */_Bool) 18446744073709551604ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 ^= ((/* implicit */unsigned char) (-((-(15877905263648702006ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) (~(((int) (unsigned short)35843))));
            var_36 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_28 [i_13] [i_14] [i_14]) : (arr_28 [i_13] [i_14] [i_13])));
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_1))))))));
                var_38 = ((/* implicit */int) ((short) arr_7 [i_13]));
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) ((short) var_5))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)55185))))));
            var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
            var_41 = ((/* implicit */unsigned short) ((arr_31 [i_13] [i_13] [i_13] [i_13] [i_16]) ? (((/* implicit */int) arr_31 [i_13] [i_13] [i_13] [i_13] [i_16])) : (((/* implicit */int) arr_31 [i_13] [i_13] [i_13] [i_16] [i_16]))));
            arr_51 [i_16] = ((/* implicit */unsigned int) (_Bool)1);
            var_42 ^= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (short)12048)) ? (2147483629) : (((/* implicit */int) var_0))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((/* implicit */unsigned long long int) 1251079819)) - (4667644622958914602ULL)))));
            var_44 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11025)))))) : (((/* implicit */int) arr_20 [i_17] [i_17] [(short)8] [i_13] [i_13]))));
            var_45 &= ((/* implicit */unsigned int) (+(var_1)));
            var_46 &= ((/* implicit */unsigned long long int) (~(5353840217597764913LL)));
            arr_54 [7] [i_17] [i_17] = ((/* implicit */short) (~(((/* implicit */int) var_11))));
        }
        var_47 += (-(144114638320041991ULL));
    }
    for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
    {
        var_48 = ((/* implicit */unsigned short) 28ULL);
        arr_57 [i_18] [i_18] = ((/* implicit */unsigned long long int) (short)-9);
        var_49 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) -1301873018)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))));
        var_50 ^= ((/* implicit */_Bool) 144114638320041991ULL);
    }
}
