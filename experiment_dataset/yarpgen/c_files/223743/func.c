/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223743
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((arr_0 [i_1 - 1]), (max((arr_0 [i_1 + 2]), (arr_0 [i_1 - 1])))));
                    var_15 -= ((/* implicit */unsigned char) arr_5 [i_0]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2091924269)) ? (2060283705U) : (((/* implicit */unsigned int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */short) min(((~(arr_0 [i_4]))), (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_3]) : (((/* implicit */int) (short)-30311))))));
                arr_12 [i_4] [i_3] [i_4] |= ((/* implicit */unsigned char) arr_7 [i_3] [i_4] [i_3] [i_3]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_15 [i_5 + 1])), (arr_2 [i_5 + 1] [i_5 + 1] [i_5 + 1]))), (((/* implicit */unsigned long long int) arr_15 [i_5 + 1]))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) (short)-30311);
                            arr_27 [i_5] [i_7] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */signed char) arr_21 [i_5 + 1] [i_5 + 1]);
                            arr_28 [i_5] [i_6] [i_7] [i_7] [i_9] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
                        }
                        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5 + 1]))))) ? (((((/* implicit */_Bool) arr_14 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 + 1]))) : (13418108378473557769ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_5 + 1]), (arr_14 [i_5 + 1])))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] = ((/* implicit */_Bool) (+((~((~(884060429374560168ULL)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) arr_5 [i_10 + 1]);
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    var_21 = ((/* implicit */signed char) 1447991271U);
                    arr_38 [i_10] [i_11] [i_12] [i_11] [i_13] = ((/* implicit */int) (short)-13476);
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        arr_42 [i_10] [i_10] [i_10] [i_10] [i_14] = ((/* implicit */int) (short)-30311);
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(18082300740560474683ULL)))) ? (min((((/* implicit */int) (unsigned short)61476)), (arr_0 [i_10 + 1]))) : (arr_0 [i_10 + 1])));
                        var_23 &= (-(min((5028635695235993846ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))));
                    }
                    var_24 = arr_40 [i_10] [i_11] [i_12] [i_10] [i_13];
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(7671876003110868542LL)))), ((-((~(arr_29 [i_10])))))));
                    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_11] [i_15]))));
                    var_27 = max(((+(arr_18 [i_10 + 1]))), (((((/* implicit */_Bool) arr_46 [i_10])) ? (((/* implicit */int) arr_46 [i_10])) : (-1438048665))));
                }
                arr_47 [i_11] [i_11] [i_11] [i_11] &= min((((/* implicit */long long int) (~(((/* implicit */int) arr_36 [i_10 + 1] [i_11] [i_11] [i_12]))))), (min((((/* implicit */long long int) arr_36 [i_10] [i_11] [i_12] [i_11])), (8589934080LL))));
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) 1447991271U))));
                arr_48 [i_10] [i_11] = ((/* implicit */int) min((((/* implicit */long long int) (~(min((arr_18 [i_12]), (arr_45 [i_10] [i_10 + 1] [i_10 + 1] [i_10])))))), (min((((/* implicit */long long int) arr_6 [i_10 + 1] [i_10 + 1] [i_10 + 1])), (arr_35 [i_10] [i_10])))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                arr_52 [i_10] [i_11] [i_11] [i_11] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_11] [i_10 + 1] [i_11] [i_16] [i_16]))));
                /* LoopSeq 2 */
                for (unsigned char i_17 = 3; i_17 < 13; i_17 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_10] [i_10 + 1] [i_17 - 2] [i_17]))));
                    var_30 = ((/* implicit */unsigned short) arr_14 [i_10]);
                    var_31 = ((/* implicit */unsigned long long int) (unsigned char)93);
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_17 - 1] [i_10 + 1] [i_16] [i_10])) ? (arr_45 [i_17 + 3] [i_10 + 1] [i_16] [i_10]) : (((/* implicit */int) (short)30311))));
                }
                for (unsigned char i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 1; i_19 < 15; i_19 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_56 [i_11] [i_11] [i_11] [i_18] [i_19] [i_11]))));
                        arr_60 [i_10] [i_11] [i_10] [i_19] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_50 [i_10 + 1] [i_19] [i_19] [i_19 + 2]))));
                        var_34 += ((/* implicit */short) arr_55 [i_11]);
                    }
                    var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_10 + 1] [i_11] [i_16] [i_10 + 1]))));
                    var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_16]))));
                }
                var_37 += ((/* implicit */unsigned char) ((arr_6 [i_10] [i_10 + 1] [i_16]) ? (((/* implicit */int) arr_6 [i_10 + 1] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) arr_6 [i_10] [i_10 + 1] [i_10 + 1]))));
            }
        }
        /* LoopNest 2 */
        for (long long int i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            for (unsigned int i_21 = 0; i_21 < 17; i_21 += 4) 
            {
                {
                    var_38 = ((/* implicit */unsigned char) (~((+(arr_29 [i_10])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
                    {
                        arr_70 [i_10] [i_10 + 1] [i_10] = ((/* implicit */int) (short)(-32767 - 1));
                        arr_71 [i_10] [i_10] [i_20] [i_21] [i_22] [i_22] = ((/* implicit */signed char) (+(-1115172279)));
                    }
                    var_39 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_10]))))), ((+((-(arr_2 [i_10] [i_10] [i_10])))))));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_59 [i_10])), (max((2006588523U), (((/* implicit */unsigned int) arr_6 [i_10] [i_10] [i_10])))))), (((/* implicit */unsigned int) arr_26 [i_10] [i_10] [i_10 + 1] [i_10] [i_10] [i_10] [i_10]))));
        arr_72 [i_10] [i_10] = ((/* implicit */unsigned int) (-(((arr_17 [i_10 + 1] [i_10 + 1]) ? (((/* implicit */int) arr_17 [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) arr_17 [i_10 + 1] [i_10 + 1]))))));
    }
}
