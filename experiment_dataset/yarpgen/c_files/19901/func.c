/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19901
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (arr_0 [3])))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
                var_17 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_2 [i_0 - 1] [i_0 - 1]))) <= (((int) ((((/* implicit */int) var_14)) >> (((arr_0 [6]) + (3856319071899600653LL))))))));
                var_18 = max(((signed char)-102), ((signed char)108));
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)25014))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            for (int i_4 = 4; i_4 < 19; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) min((arr_13 [i_2] [i_2] [9] [i_2]), (((/* implicit */unsigned short) arr_3 [i_3 - 1] [i_4 - 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_3 - 1] [i_4 - 2] [i_4 - 2])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */short) arr_14 [14U] [(unsigned short)16] [i_4] [i_4]);
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) var_3);
                            arr_21 [i_2] [i_2] [(signed char)13] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((2794475593U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)179))))))));
                        }
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) ((signed char) -459513880))) : (((/* implicit */int) (signed char)101))));
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3])), (((var_5) ? (((/* implicit */int) var_6)) : (arr_16 [i_2]))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)76))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3 + 1] [i_3 - 1] [i_4 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_4 + 3] [i_3 + 1]))) : (arr_17 [i_2] [i_4] [13LL] [i_2])));
                            var_27 = ((/* implicit */unsigned short) ((unsigned long long int) arr_10 [i_3 + 1] [i_5] [i_7]));
                            var_28 = (-(arr_6 [i_2]));
                        }
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_27 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))));
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0U)) ? (arr_2 [i_2] [(signed char)3]) : (((/* implicit */int) (_Bool)1)))))))));
                            var_30 = ((/* implicit */_Bool) max((max((((/* implicit */int) (short)-26004)), (-726159614))), (((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 + 1] [i_3])) ? (var_12) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1] [i_3]))))));
                        }
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) 311101543)) ? (-6155654635138680144LL) : (((/* implicit */long long int) -713239953)))) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_9] [i_5] [i_4 + 2] [i_2])))));
                            arr_30 [i_2] [i_2] [i_2] [i_5] [(short)14] [i_2] [20U] &= ((/* implicit */short) (((-(var_10))) + (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_3] [i_5] [i_5]), (arr_4 [i_9] [i_4 + 3] [i_3 - 1])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2] [i_3 + 1])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) var_5))));
                            arr_35 [i_3] [i_3] [i_4 + 1] [i_5] [i_10] = ((/* implicit */unsigned short) arr_22 [i_3]);
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_4 + 3])) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_4 - 4])) : (arr_16 [i_3 + 1])));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
        {
            var_34 = ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (short)15600)) : (((/* implicit */int) (signed char)101)));
            var_35 = ((/* implicit */signed char) ((int) ((signed char) (signed char)120)));
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    for (short i_14 = 3; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */int) ((short) arr_13 [i_2] [i_2] [i_2] [i_2]));
                            var_37 = ((/* implicit */short) arr_17 [i_2] [i_2] [i_13] [i_14]);
                            arr_46 [15LL] [i_11] [i_12] [i_13] [i_14 - 1] [i_13] [i_14] = ((/* implicit */_Bool) 1142087447U);
                            arr_47 [i_2] [i_2] [i_11] [i_12] [(_Bool)1] [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_2] [i_11] [i_11] [i_13] [i_14 + 2])))) ^ (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16291))) : (3152879846U)))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */short) ((_Bool) ((unsigned short) -1486808729)));
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [i_2] [i_11] [i_2] [i_11] [i_2] [14] [(unsigned short)1])) : (((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [(unsigned short)20] [i_2] [i_11] [i_11]))));
        }
        for (short i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
        {
            var_40 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_22 [i_15])) ? (arr_22 [i_15]) : (arr_22 [i_15]))));
            arr_50 [i_15] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)0)), (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (2035704503)))) ? (((/* implicit */int) arr_19 [i_15] [i_15] [i_2] [i_2] [i_15] [i_15] [i_15])) : (((/* implicit */int) ((unsigned char) var_13)))))));
        }
    }
    for (short i_16 = 2; i_16 < 13; i_16 += 2) 
    {
        var_41 = ((unsigned short) max((((((/* implicit */int) arr_49 [(short)16] [(short)16])) % (arr_43 [i_16] [i_16 + 2] [i_16 + 2] [i_16] [21] [i_16]))), (((/* implicit */int) arr_13 [i_16] [i_16 + 2] [i_16 + 2] [i_16 - 1]))));
        var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 49598514U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0)))) - (((/* implicit */int) (short)9489))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 1; i_17 < 13; i_17 += 3) 
        {
            for (short i_18 = 1; i_18 < 15; i_18 += 3) 
            {
                {
                    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_12 [i_16] [i_16]))))) ? ((((_Bool)1) ? (arr_6 [i_18 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_16 + 3] [i_17 + 3] [i_18 - 1] [i_18 + 1] [i_18 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_17] [i_17]))))))));
                    var_44 = ((/* implicit */signed char) max((((/* implicit */short) var_5)), (((short) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_48 [i_17 + 1] [i_18]) : (arr_48 [i_17 + 3] [i_18]))) + (max((((/* implicit */unsigned int) var_12)), (arr_48 [i_17 + 1] [i_18])))));
                                var_46 = ((/* implicit */unsigned char) (!(((_Bool) arr_40 [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_16 - 2] [i_16 + 2]))));
                                var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_20] [i_19] [i_18] [13U] [13U] [i_16 + 2])) && (((/* implicit */_Bool) (unsigned char)255)))))) : (arr_52 [i_20])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_18 + 1] [i_18] [i_18] [i_18 - 1] [0]))))) : (((((/* implicit */_Bool) ((var_7) ? (arr_17 [i_16] [7] [(signed char)1] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_20])))))) ? (((int) var_12)) : (((/* implicit */int) arr_8 [i_18 + 1] [i_18 + 1] [i_18]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_22 [i_16]))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (((((-1400551760325092691LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)98))))) | (((/* implicit */long long int) (-(var_12))))))));
        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_16 - 2] [i_16 + 2] [i_16] [i_16] [i_16 - 1] [i_16] [i_16])) ? (arr_52 [i_16 - 2]) : (((/* implicit */unsigned long long int) 899238918U))))) ? (((((/* implicit */_Bool) arr_52 [i_16 + 3])) ? (arr_52 [i_16 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_16 + 1] [i_16] [i_16] [i_16] [i_16] [i_16 - 1] [i_16]))))) : (((((/* implicit */_Bool) arr_52 [i_16 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766))) : (arr_52 [i_16 + 1])))));
    }
}
