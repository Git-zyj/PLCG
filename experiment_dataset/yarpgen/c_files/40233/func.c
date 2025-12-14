/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40233
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
    var_16 = ((long long int) 4303310027696978058LL);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [(short)18] [i_2] [i_0] = ((/* implicit */long long int) (signed char)-41);
                                arr_17 [i_0] [14LL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_0])))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-28)))))));
                                var_17 &= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-3))));
                                arr_18 [16LL] [i_3] [16LL] [i_2] [16LL] [i_0] = ((/* implicit */_Bool) 90712320792061880LL);
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((long long int) var_10)), ((+(min((arr_7 [i_0]), (((/* implicit */long long int) (_Bool)1))))))));
                    arr_20 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) var_13)))));
                }
            } 
        } 
        arr_21 [(signed char)4] = ((/* implicit */unsigned short) (~(max((var_9), (((/* implicit */long long int) (_Bool)1))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((arr_13 [i_0] [i_5] [i_6]), (((/* implicit */unsigned char) (_Bool)1))));
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_23 [i_0])), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) % (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_0])))))));
                    arr_29 [i_0] [i_0] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) | (var_5)))))))));
                }
            } 
        } 
        arr_30 [i_0] [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_4 [i_0] [i_0])))), (((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        arr_39 [i_10] [i_10] [(unsigned char)19] [i_8 + 2] [(unsigned char)19] [i_7] = (signed char)28;
                        arr_40 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_4)))));
                        arr_41 [i_10] [i_8] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)81))));
                        /* LoopSeq 3 */
                        for (signed char i_11 = 2; i_11 < 18; i_11 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) (~(var_4)));
                            arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) 137438953470LL);
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_20 *= ((long long int) (+(((/* implicit */int) (_Bool)1))));
                            arr_47 [i_7] [i_8] [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)167)) + ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 4) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) || ((_Bool)1)));
                            arr_51 [i_7] [i_7 - 2] [18LL] [18LL] [i_7] &= ((/* implicit */_Bool) ((signed char) var_12));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            for (signed char i_15 = 1; i_15 < 17; i_15 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_22 -= ((/* implicit */signed char) arr_49 [i_7] [i_7] [i_7] [i_7] [i_7]);
                        arr_58 [i_16] [i_7] [i_16] [i_7] [i_7] = ((/* implicit */unsigned short) arr_48 [5LL] [5LL] [i_15] [i_15] [i_16]);
                        /* LoopSeq 4 */
                        for (unsigned int i_17 = 3; i_17 < 18; i_17 += 4) 
                        {
                            arr_62 [(unsigned char)5] [i_7] [(_Bool)1] [(unsigned char)5] [i_16] [i_17] [i_17] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_7] [i_14] [(signed char)2] [i_17])))))));
                            var_23 = ((/* implicit */_Bool) (~(arr_22 [i_7] [i_14] [i_15 + 3])));
                        }
                        for (signed char i_18 = 4; i_18 < 17; i_18 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)17))) : (5586062144148072939LL)))))));
                            arr_65 [i_18] [i_7] [i_16] [i_16] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_42 [i_15 - 1] [i_18 - 2] [i_7 - 1]))));
                            arr_66 [3LL] [i_16] [i_16] [18LL] [i_16] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-32737))))) <= ((+(var_3)))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                        {
                            var_25 *= (!(((/* implicit */_Bool) var_1)));
                            arr_70 [i_19] [i_16] [i_15 - 1] [i_16] [i_7] = var_5;
                        }
                        for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                        {
                            arr_74 [i_16] [i_16] [i_14] [i_15] [i_14] [i_16] = ((/* implicit */long long int) var_7);
                            var_26 = ((long long int) (-(var_12)));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (6114316451542675210LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)17)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)80))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        }
                        arr_75 [i_7 - 2] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((signed char) (unsigned short)44621));
                        arr_76 [i_16] = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_14))) < (var_12)))));
                    }
                    for (unsigned short i_21 = 4; i_21 < 17; i_21 += 3) 
                    {
                        arr_80 [i_7] [i_7] [i_7] [i_7] [i_15] [i_21] |= ((/* implicit */short) ((long long int) arr_5 [i_7]));
                        arr_81 [i_21] [i_15] [i_14] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_7] [i_7] [i_15] [i_21] [i_15])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) : (3474277707U)));
                        var_28 = ((signed char) (!(var_7)));
                        arr_82 [i_7] [i_7] [i_14] [i_15 - 1] [i_7] = ((/* implicit */signed char) (((-9223372036854775807LL - 1LL)) < (arr_11 [i_7 + 1] [i_15 + 3] [i_21] [i_21 - 4] [i_21 - 1])));
                        arr_83 [i_21] [i_15] [i_15] [(unsigned short)8] [i_7] = ((/* implicit */_Bool) (+(((long long int) (signed char)15))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 20; i_22 += 1) 
                    {
                        for (long long int i_23 = 1; i_23 < 17; i_23 += 4) 
                        {
                            {
                                arr_89 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                                arr_90 [i_7] [i_7] [i_7] [i_7] [i_22] [i_7] [i_7] = ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)-12))))));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_23 + 1] [i_23 + 1])) ? (((/* implicit */int) ((unsigned short) (signed char)-122))) : (((/* implicit */int) ((signed char) var_1)))));
                                var_30 = ((/* implicit */long long int) (-(1095110739U)));
                                var_31 = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_24 = 2; i_24 < 19; i_24 += 1) /* same iter space */
    {
        var_32 = (+(max((arr_0 [i_24 - 1] [i_24 + 1]), (((/* implicit */long long int) var_14)))));
        var_33 = ((/* implicit */long long int) max(((signed char)15), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((var_11), (arr_5 [i_24]))))) < (min((var_9), (-1LL))))))));
    }
    for (signed char i_25 = 0; i_25 < 10; i_25 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_26 = 2; i_26 < 9; i_26 += 4) 
        {
            for (long long int i_27 = 1; i_27 < 9; i_27 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        for (unsigned char i_29 = 0; i_29 < 10; i_29 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                                var_35 = var_13;
                                arr_110 [i_25] [i_26 - 2] [i_28] [i_28] [i_29] = ((/* implicit */_Bool) arr_34 [i_28]);
                                arr_111 [i_25] [i_25] [i_25] [i_25] [i_25] [2LL] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-59))));
                                var_36 = var_1;
                            }
                        } 
                    } 
                    arr_112 [i_25] [i_25] [i_26] [i_27] = var_4;
                }
            } 
        } 
        arr_113 [i_25] = ((arr_77 [i_25] [i_25] [i_25] [i_25] [(_Bool)1] [i_25]) != (arr_92 [i_25]));
    }
}
