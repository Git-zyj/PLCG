/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5429
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
    var_19 = ((/* implicit */short) (!(((_Bool) (_Bool)0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (_Bool)0);
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) (short)-17353);
                    var_22 ^= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) ((short) (_Bool)1))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_23 = (!(((_Bool) (signed char)-1)));
                    arr_10 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) ((_Bool) (_Bool)1))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))));
                }
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((short) (!(((_Bool) (_Bool)0)))));
                            var_26 -= ((/* implicit */short) (!((!((!((_Bool)1)))))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned int) (_Bool)1);
                                arr_20 [i_1] [i_4] [(short)12] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)12))));
                            }
                            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) /* same iter space */
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((short) (-((-(18446744073709551615ULL))))));
                                arr_23 [i_0] [(short)9] [i_4] [i_5] [i_5] [i_1] = ((/* implicit */short) ((unsigned long long int) 0ULL));
                                arr_24 [(signed char)12] [(signed char)12] [i_1] = ((/* implicit */short) (_Bool)1);
                                var_29 = ((short) (_Bool)1);
                                var_30 = ((_Bool) (!(((/* implicit */_Bool) ((short) (short)(-32767 - 1))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
                            {
                                var_31 = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (_Bool)1)))));
                                var_32 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (_Bool)0)))));
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)0)))));
                                var_33 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) (_Bool)0)))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 3) /* same iter space */
                            {
                                var_34 ^= ((/* implicit */_Bool) 17180507926954014174ULL);
                                var_35 |= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-75))));
                                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (_Bool)1))));
                            }
                            arr_30 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */short) ((_Bool) (-((-(((/* implicit */int) (_Bool)1)))))));
                            var_37 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 14; i_11 += 1) 
                    {
                        for (short i_12 = 1; i_12 < 16; i_12 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) max((var_38), (((_Bool) 0ULL))));
                                var_39 = ((/* implicit */short) min((var_39), (((short) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) ((short) (-(0ULL))));
                        var_41 = ((/* implicit */unsigned long long int) (signed char)-24);
                        var_42 &= ((/* implicit */unsigned int) (~(((unsigned long long int) (-(((/* implicit */int) (short)0)))))));
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) 18446744073709551615ULL))));
                    }
                    for (unsigned int i_14 = 2; i_14 < 15; i_14 += 4) 
                    {
                        var_44 -= ((/* implicit */signed char) ((short) ((_Bool) ((short) (_Bool)0))));
                        arr_46 [(_Bool)1] [i_1] [(signed char)7] [i_14] = ((/* implicit */short) ((unsigned int) (_Bool)1));
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 17; i_15 += 4) 
                        {
                            var_45 = ((/* implicit */signed char) ((_Bool) ((short) (~(((/* implicit */int) (_Bool)1))))));
                            var_46 = ((/* implicit */_Bool) ((short) (!((!(((/* implicit */_Bool) (signed char)23)))))));
                            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) (short)-18490))));
                        }
                        var_48 = ((/* implicit */unsigned long long int) (~((-((+(4294967295U)))))));
                        /* LoopSeq 1 */
                        for (short i_16 = 1; i_16 < 16; i_16 += 2) 
                        {
                            var_49 *= ((_Bool) (~(((/* implicit */int) ((signed char) (signed char)32)))));
                            var_50 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((unsigned int) 457271205U))))));
                            arr_51 [i_0] [i_1] [i_10] [16U] [i_10] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 0ULL))))))));
                            var_51 = ((/* implicit */_Bool) (-(5442595609461409994ULL)));
                        }
                    }
                    for (signed char i_17 = 1; i_17 < 16; i_17 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 17; i_18 += 2) /* same iter space */
                        {
                            var_52 = ((/* implicit */signed char) (short)0);
                            arr_57 [i_1] = ((short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))));
                        }
                        for (short i_19 = 0; i_19 < 17; i_19 += 2) /* same iter space */
                        {
                            var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) (signed char)-9))));
                            var_54 = ((/* implicit */unsigned long long int) ((_Bool) (short)0));
                            var_55 = ((/* implicit */unsigned long long int) ((_Bool) ((short) (-(3808878415U)))));
                        }
                        var_56 = (!(((_Bool) ((_Bool) 2400903492719173883ULL))));
                        arr_60 [i_0] [(signed char)1] [i_1] [i_17] [i_1] [i_1] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((_Bool) 9989925110496373397ULL)))))));
                    }
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) (short)4096))))))));
                    var_58 &= (_Bool)1;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_21 = 0; i_21 < 17; i_21 += 3) 
                    {
                        var_59 = ((/* implicit */short) ((signed char) (short)4032));
                        var_60 = ((/* implicit */short) ((unsigned long long int) ((_Bool) (short)881)));
                        var_61 = ((/* implicit */_Bool) min((var_61), (((/* implicit */_Bool) (short)-9709))));
                        var_62 -= ((/* implicit */signed char) (~((~(((/* implicit */int) (short)-19343))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    var_63 -= ((/* implicit */unsigned int) ((_Bool) (+(4294967295U))));
                    var_64 = ((/* implicit */short) (_Bool)1);
                }
                /* vectorizable */
                for (short i_23 = 0; i_23 < 17; i_23 += 4) 
                {
                    var_65 ^= ((/* implicit */unsigned int) (_Bool)1);
                    var_66 = ((/* implicit */short) (signed char)45);
                }
            }
        } 
    } 
    var_67 = ((/* implicit */signed char) (short)(-32767 - 1));
}
