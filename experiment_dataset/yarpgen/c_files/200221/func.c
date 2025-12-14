/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200221
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
            {
                var_18 += ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)49247))))));
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
            }
            for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) /* same iter space */
            {
                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */signed char) var_15);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-29394)))))));
                arr_14 [i_0] = var_10;
                var_21 *= ((/* implicit */short) (~(((/* implicit */int) var_3))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) (-(var_15)));
                        arr_19 [i_5] [i_1] [i_4] [i_4] [i_0] [i_5] = ((/* implicit */signed char) var_16);
                    }
                    var_23 = ((/* implicit */unsigned char) (~(137368657)));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                    arr_23 [i_0] [i_1] [i_3 + 3] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_1] [i_3] [i_6] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        var_25 = ((/* implicit */signed char) var_4);
                        arr_29 [(_Bool)1] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned char)209)) : (var_11)))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (unsigned short)64980))));
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)561))) : (var_1)));
                        var_28 ^= ((/* implicit */unsigned char) var_2);
                        var_29 = ((/* implicit */unsigned char) (+(6968160586895994092LL)));
                        arr_33 [i_6] [i_1] [i_1] [(short)8] [i_8] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)192))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                    {
                        var_30 -= ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))));
                        arr_36 [i_9] [i_9] [i_1] [6LL] [(_Bool)1] = ((/* implicit */unsigned char) (~(var_11)));
                        arr_37 [i_9] [i_6] [i_3] [i_1] = ((/* implicit */unsigned int) var_15);
                        var_31 = ((/* implicit */unsigned long long int) (unsigned short)572);
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (+(2676790615905657550LL))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_3] [i_6] [i_1] [i_6] [i_1] = (!(((/* implicit */_Bool) (unsigned short)64974)));
                        var_33 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)46))));
                    }
                }
            }
            var_34 = ((/* implicit */short) (_Bool)1);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64974)) ? (760671988U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64963)))));
            var_36 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_37 |= ((/* implicit */long long int) (signed char)61);
            var_38 = ((/* implicit */short) (+(((/* implicit */int) (signed char)96))));
            arr_48 [i_0] [i_0] [i_0] = ((/* implicit */int) var_0);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_51 [(short)0] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))) ? ((+(((/* implicit */int) (unsigned short)573)))) : (((/* implicit */int) (short)32767))));
            var_39 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)64975))));
        }
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)48379)))))))));
                        arr_59 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (262142) : (((/* implicit */int) (signed char)-120))));
                        var_41 = ((/* implicit */long long int) var_5);
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 1) /* same iter space */
                        {
                            var_42 -= ((/* implicit */signed char) -3843951005906122847LL);
                            var_43 = ((/* implicit */unsigned int) var_10);
                        }
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (-(((/* implicit */int) (short)-25695)))))));
                            arr_66 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_16] &= var_9;
                            var_45 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                            arr_67 [i_0] [i_14] [i_14] [i_16] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (-2803907822911828161LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
                        {
                            var_46 = ((/* implicit */int) var_8);
                            arr_71 [6LL] [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294966784ULL))));
                            var_47 = ((/* implicit */_Bool) (-(var_1)));
                            var_48 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-103))));
                            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3697491254U)) ? (var_15) : (((/* implicit */unsigned long long int) (~(-79856450)))))))));
                        }
                        for (signed char i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
                        {
                            arr_74 [i_0] [i_16] [i_15] [i_16] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)169)) : ((~(1943761086)))));
                            var_50 += ((/* implicit */int) (unsigned char)223);
                            arr_75 [i_14] [i_14] [i_15] [i_16] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)48379))));
                            var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((var_12) ? (909653074) : (((/* implicit */int) (unsigned char)64)))))));
                            arr_76 [i_14] [i_14] [i_15] [i_14] [i_16] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)144))));
                        }
                    }
                    var_52 = ((/* implicit */unsigned long long int) (+(((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)64974))))));
                    var_53 = ((/* implicit */_Bool) (unsigned char)192);
                }
            } 
        } 
    }
    var_54 = ((/* implicit */long long int) (+((~(((/* implicit */int) (short)8837))))));
}
