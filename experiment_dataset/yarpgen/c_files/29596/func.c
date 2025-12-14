/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29596
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
        var_18 = ((/* implicit */short) var_15);
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_13 [i_3] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)(-32767 - 1)))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_2))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_4] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)20363))));
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
                            arr_21 [i_0] [i_0] [i_1] [(unsigned short)4] [(unsigned short)4] [i_4] [i_5] &= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        }
                        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~(var_4))))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                            var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)7))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((628165266U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))) : (((/* implicit */int) (_Bool)1)))))));
                            arr_28 [i_4] [i_1] [i_2] [i_4] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned char)97))));
                            arr_29 [i_0] [i_4] [i_1] [i_2] [i_4] [i_4] [i_7] = ((/* implicit */int) (((_Bool)1) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            var_24 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_2)))) ? (3185959804U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16634)))));
                            arr_30 [i_4] = ((/* implicit */int) var_7);
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        arr_33 [9] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))));
                        arr_34 [i_0] [i_1 - 1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) (_Bool)1);
                        var_25 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) 127)) * (var_4)));
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((int) -1870902340390738705LL));
                    }
                    for (short i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        arr_38 [14U] [i_1] [i_2] [(unsigned char)1] = ((/* implicit */unsigned char) var_5);
                        var_26 |= ((/* implicit */long long int) ((_Bool) (short)-6384));
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        arr_42 [i_0] [i_1] [i_10] [i_10] = ((((/* implicit */_Bool) -4873087006279851551LL)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_12))));
                        arr_43 [i_1] [i_2] [i_2] [i_1] [i_1] &= ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)511)));
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            arr_48 [i_0] [i_0] [i_10] [i_10] [i_11] = ((/* implicit */int) (unsigned short)8826);
                            arr_49 [i_0] [i_10] [i_2] [i_10] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -1475307761622005712LL)) ? (((/* implicit */unsigned long long int) ((long long int) var_15))) : (134217600ULL)));
                        }
                        for (unsigned short i_12 = 4; i_12 < 17; i_12 += 2) 
                        {
                            arr_52 [i_0] [i_1] [i_10] [i_10] [i_12] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)11);
                            arr_53 [i_1] [i_1] |= ((/* implicit */signed char) (-(1487994766361431821ULL)));
                            arr_54 [i_0] [i_2] [i_10] = ((/* implicit */_Bool) ((int) (signed char)57));
                            var_27 &= ((/* implicit */unsigned char) (signed char)3);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65025)))));
                        }
                    }
                    for (long long int i_13 = 4; i_13 < 17; i_13 += 3) 
                    {
                        arr_57 [i_13] [i_0] |= ((/* implicit */_Bool) (unsigned short)65025);
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            var_29 &= ((/* implicit */unsigned int) ((_Bool) var_13));
                            var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)497))));
                            var_31 = ((/* implicit */int) (unsigned short)13);
                            arr_60 [i_0] [i_1 + 1] [(short)9] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) (+(-1420961288)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            arr_65 [i_1] &= (~((-(((/* implicit */int) (_Bool)1)))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14111331703138226668ULL)));
                        }
                        for (unsigned int i_16 = 1; i_16 < 17; i_16 += 2) 
                        {
                            arr_68 [i_16] [i_13] [i_16] [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                            arr_69 [i_1] [i_1] [12LL] [i_16] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_10))));
                            arr_70 [i_0] [i_0] [i_16] [i_0] = 18115535456958829298ULL;
                            arr_71 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1561385484)) ? (((/* implicit */int) (short)3100)) : (((/* implicit */int) (signed char)0))));
                        }
                        arr_72 [i_0] = ((/* implicit */unsigned char) (~(var_14)));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_17 = 2; i_17 < 15; i_17 += 2) 
                    {
                        var_33 = ((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)-8)));
                        var_34 += (-(var_3));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    }
                    for (short i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        arr_78 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2075062255)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) var_9))))));
                        var_36 = (((!(((/* implicit */_Bool) (short)-23596)))) ? (((/* implicit */int) (_Bool)1)) : ((-(685266312))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) 
                    {
                        arr_82 [i_0] [i_1] [i_0] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) : (8747791757194657376LL)))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65025)))));
                        arr_83 [2LL] [i_1] [2LL] [(unsigned char)4] [i_19] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)53)) && (((/* implicit */_Bool) (unsigned short)16817))));
                    }
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        arr_87 [i_20] [i_2] [i_1] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((7007524769900485400ULL) & (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) -1))));
                        arr_88 [i_0] [i_1] [i_2] [i_20] = ((/* implicit */short) (((_Bool)1) ? (var_11) : (2251799813554176LL)));
                        /* LoopSeq 2 */
                        for (short i_21 = 0; i_21 < 18; i_21 += 3) 
                        {
                            arr_91 [i_21] [i_20] [i_20] [i_20] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)47366)))) : ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (361848703670241405ULL)));
                            arr_92 [i_20] [i_1] [i_1 - 1] [i_1] [i_1] = ((((/* implicit */_Bool) ((long long int) (signed char)22))) ? (((((/* implicit */_Bool) (unsigned short)57065)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_22 = 0; i_22 < 18; i_22 += 4) 
                        {
                            arr_95 [i_0] [i_0] [i_2] [i_20] [i_20] = (~(0));
                            var_38 = ((/* implicit */short) var_0);
                            arr_96 [i_0] [i_20] [i_0] [i_20] [i_20] [i_1] [i_22] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57065)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))) : (var_3)))));
                        }
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
    {
        arr_100 [i_23] = var_9;
        arr_101 [i_23] = ((((/* implicit */_Bool) (unsigned short)32736)) ? (((/* implicit */int) ((-66634266) != (((/* implicit */int) var_12))))) : (((int) 31)));
        arr_102 [i_23] &= ((/* implicit */long long int) var_1);
    }
}
