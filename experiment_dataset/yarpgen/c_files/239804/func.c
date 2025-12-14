/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239804
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
                            {
                                arr_11 [i_4] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-47))));
                                var_19 = arr_1 [i_3];
                                var_20 = ((/* implicit */unsigned short) arr_5 [i_0]);
                            }
                            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
                            {
                                var_21 *= (((~(((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0])))) + (((/* implicit */int) (signed char)46)));
                                arr_15 [i_0] [i_1] [(unsigned short)3] [i_0] [i_5] [i_5] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32)))))) - (6825827429377281776LL)));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */int) var_10);
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1 - 1] [i_3] [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_6] [i_0] [i_2 - 4] [i_2 + 1])) : (((/* implicit */int) (signed char)-47))));
                                arr_18 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_2] [(unsigned short)10] [i_0] [i_6]))));
                                arr_19 [i_0 + 2] [i_0 + 2] [i_6] [i_6] [i_3] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_6] [i_3] [i_2 + 1] [i_1])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)25605)) : (arr_0 [i_0] [i_0])))));
                            }
                            var_24 = ((/* implicit */short) (-(var_11)));
                            arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_3] = ((/* implicit */short) arr_5 [i_0 - 1]);
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_10 [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1] [12]), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) var_7))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 2) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_17 [i_8 - 1] [i_9] [i_0 + 2] [i_9] [i_0 + 1])) ? (arr_28 [i_0] [i_1 - 1] [i_7] [i_8 - 1] [i_9 + 1]) : (arr_28 [i_0] [i_0] [i_9] [i_8 - 1] [(_Bool)0])))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_0 [i_0] [i_8]))));
                                arr_30 [i_0 - 1] [i_1] [i_1] [i_1] [2ULL] [i_7] [i_9] |= ((/* implicit */int) (unsigned short)52580);
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */_Bool) max(((signed char)52), ((signed char)120)));
                var_29 = ((/* implicit */long long int) max((var_29), (((arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) (~((~(((/* implicit */int) arr_23 [(unsigned short)11] [(unsigned short)11] [i_1 - 1]))))))) : (max((((arr_16 [i_0] [i_0] [i_1 - 1] [14ULL]) ? (((/* implicit */long long int) var_12)) : (var_15))), (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_1] [14U] [i_0] [14U] [i_0])))))))))));
            }
        } 
    } 
    var_30 += ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 2) 
    {
        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_12 = 1; i_12 < 12; i_12 += 1) /* same iter space */
                {
                    arr_38 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) arr_13 [i_10] [i_10 - 1] [(unsigned char)1] [i_12] [i_10 - 1]);
                    /* LoopSeq 3 */
                    for (long long int i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
                    {
                        arr_41 [i_10] [i_10] [i_11] [i_10] [i_10] [(short)0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_10] [i_12 + 1]))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_5 [i_10])))) ? (max((((/* implicit */int) var_9)), (arr_36 [i_10] [i_10]))) : (((/* implicit */int) ((unsigned short) var_15)))))) : (var_2)));
                        arr_42 [i_10] [i_10] [i_12 + 1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_10])) ? (((/* implicit */int) ((unsigned short) arr_39 [i_10 + 2] [i_12 + 1] [i_10 + 1] [i_11 + 1] [i_13 - 1]))) : (((((((/* implicit */int) arr_22 [i_10])) + (2147483647))) << (((arr_39 [i_12] [i_12 + 1] [i_10 + 1] [i_11 + 1] [i_13 + 1]) - (294613770)))))));
                    }
                    for (long long int i_14 = 1; i_14 < 12; i_14 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) (+(max((((/* implicit */int) (short)2457)), (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_37 [i_10]))))))));
                        var_33 = ((/* implicit */unsigned int) arr_22 [i_10]);
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            arr_47 [i_11] [i_11] [i_12 - 1] [i_14] [i_14] = ((((((/* implicit */int) var_5)) < (((/* implicit */int) arr_43 [i_10] [i_10] [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_10 - 2] [i_10] [i_10 + 2] [i_10 - 1]))) : (((((/* implicit */_Bool) (~(709156808)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12728))) % (arr_46 [i_10] [i_10] [i_11] [i_11] [i_12] [i_11] [i_15]))) : (((/* implicit */unsigned long long int) arr_29 [i_10] [i_11] [i_11] [i_11] [i_14] [i_15] [i_15])))));
                            var_34 = ((/* implicit */short) (signed char)-109);
                        }
                        var_35 *= ((/* implicit */short) -1015739339);
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_16 [i_12] [i_12] [i_12 + 1] [i_11]) ? (((/* implicit */int) arr_16 [i_12] [i_12] [i_12 + 1] [i_11])) : (((/* implicit */int) arr_16 [i_12] [i_12] [i_12 + 1] [i_11]))))) ? ((-(((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) (unsigned short)44988))))));
                    }
                    for (signed char i_16 = 1; i_16 < 12; i_16 += 2) 
                    {
                        var_37 &= ((/* implicit */unsigned short) arr_4 [i_16 + 1] [i_12] [i_12] [i_11 + 1]);
                        var_38 = ((/* implicit */int) (~(5808223613831013759LL)));
                        arr_50 [i_10 + 1] [i_11] [i_11] [i_16] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_22 [i_11 + 1]), (arr_22 [i_11 - 1])))) ? (((/* implicit */unsigned int) ((arr_39 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_16] [i_16 - 1]) >> (((((/* implicit */int) arr_22 [i_11 + 1])) + (41)))))) : ((~(var_3)))));
                        var_39 &= ((/* implicit */_Bool) arr_2 [i_11] [i_16]);
                    }
                    var_40 += ((/* implicit */unsigned short) max(((~(((/* implicit */int) (short)2694)))), (((int) arr_5 [i_10 - 2]))));
                }
                /* vectorizable */
                for (short i_17 = 1; i_17 < 12; i_17 += 1) /* same iter space */
                {
                    arr_53 [i_11] [i_11] [3LL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(1246938497159648172LL)))) ? (((((/* implicit */_Bool) arr_31 [i_10])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10 + 2] [i_11] [i_10 + 2] [i_11 + 2] [i_17 + 1])))));
                    var_41 += ((/* implicit */_Bool) 1176898931U);
                }
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_61 [i_10 - 1] [i_11] [i_18] [i_11] [i_20] = ((/* implicit */long long int) -1261332702);
                                var_42 &= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_22 [i_10 + 1])))), ((~(((/* implicit */int) arr_22 [i_10 + 2]))))));
                                var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)47)) ? ((((!(((/* implicit */_Bool) arr_49 [i_18] [i_18])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (arr_58 [i_11 - 1] [i_10] [i_11] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116)))));
                                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_3) : (arr_27 [i_10] [i_11] [i_18] [i_11] [i_20])));
                            }
                        } 
                    } 
                } 
                arr_62 [i_10] [i_10] [i_11] = ((/* implicit */signed char) var_2);
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((-5808223613831013763LL) + (9223372036854775807LL))) << (((var_17) - (3374122977U)))))))))));
    var_46 |= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_17)));
}
