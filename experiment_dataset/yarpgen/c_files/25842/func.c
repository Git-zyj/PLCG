/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25842
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */_Bool) 24ULL);
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) var_18)))) > ((-(((/* implicit */int) arr_5 [i_0]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) arr_6 [i_0 + 1] [20U]);
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        arr_13 [i_3] [(short)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17592186044416ULL)) || (((/* implicit */_Bool) (signed char)-100))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) 
        {
            var_22 = ((/* implicit */short) (+((~(24U)))));
            arr_16 [i_4] = ((/* implicit */int) var_15);
            arr_17 [i_4] [i_4] [(signed char)6] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (signed char)-96)) : (var_10))));
        }
        var_23 = ((/* implicit */unsigned short) var_10);
        var_24 *= ((/* implicit */short) var_17);
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                var_25 ^= ((/* implicit */unsigned long long int) var_10);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) arr_9 [i_7] [i_7] [i_7]);
                            var_27 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (arr_20 [11U] [i_3 + 2]));
                            var_28 = ((/* implicit */unsigned char) arr_15 [i_5] [i_5]);
                            arr_28 [i_5] = ((/* implicit */unsigned short) var_10);
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((arr_6 [i_3] [i_3 + 2]) / (arr_6 [i_3] [i_3 + 2]))))));
                        }
                    } 
                } 
            }
            arr_29 [i_5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)114))) & (-5850434707352032200LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) : (1717414478U)));
            var_30 = ((/* implicit */short) ((arr_20 [i_3] [i_3 + 2]) > (arr_20 [i_3] [i_3 + 1])));
        }
        for (unsigned char i_9 = 1; i_9 < 8; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [(short)10] [(unsigned char)6] [i_9 + 3] [i_10] [i_10] [i_10] [i_10])) ? (((((/* implicit */_Bool) arr_10 [i_3 + 2])) ? (arr_24 [10U] [i_9 - 1]) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((arr_8 [i_3 + 2] [i_9 + 1] [i_10] [i_9 + 1]) <= (((/* implicit */int) (unsigned short)36843)))))));
                var_32 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_3])) ^ (((/* implicit */int) (unsigned short)37565))))) * (var_3));
            }
            var_33 = var_18;
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                arr_38 [(unsigned short)2] [i_9 + 1] [4ULL] = ((/* implicit */unsigned char) ((unsigned int) arr_26 [i_9] [i_9] [i_9] [i_9 + 4] [i_9]));
                var_34 = ((unsigned int) arr_9 [i_9 + 3] [i_3 + 2] [i_3 + 2]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            arr_45 [i_11] [i_13] [i_3 + 2] = ((/* implicit */unsigned long long int) (unsigned short)28704);
                            var_35 = ((/* implicit */long long int) ((arr_0 [i_9 - 1] [i_3 - 1]) == (arr_0 [i_9 - 1] [i_3 + 1])));
                        }
                    } 
                } 
                var_36 = (unsigned short)27988;
                arr_46 [i_3] [i_9 + 4] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28692))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)));
            }
            /* LoopSeq 1 */
            for (short i_14 = 1; i_14 < 11; i_14 += 4) 
            {
                arr_51 [(unsigned char)9] [6U] = ((/* implicit */int) arr_44 [i_3 + 1] [i_9 - 1] [2]);
                arr_52 [i_3] [i_3] [i_9] [i_14] = ((/* implicit */signed char) var_8);
                arr_53 [i_14] = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)0)))) * (((((/* implicit */_Bool) arr_14 [i_9])) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned short)13747))))));
                arr_54 [5ULL] [5ULL] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) >> (((((((/* implicit */_Bool) var_8)) ? (arr_30 [i_3 + 2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (2842023357U)))));
                arr_55 [i_3] = ((/* implicit */short) ((int) arr_44 [i_9 - 1] [i_3 - 1] [(_Bool)1]));
            }
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                for (unsigned char i_16 = 2; i_16 < 11; i_16 += 2) 
                {
                    for (unsigned int i_17 = 1; i_17 < 8; i_17 += 1) 
                    {
                        {
                            arr_64 [(short)1] [i_16 - 2] [i_15] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_25 [i_17] [i_16 + 1] [i_16] [i_9] [i_3]));
                            var_37 = ((((/* implicit */_Bool) arr_3 [i_9 + 4] [i_16 - 2] [i_17])) ? (arr_50 [i_3 + 2] [i_3 + 2] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7528399411120516222ULL)))));
                            arr_65 [4] [i_9] [i_9] [i_15] [11U] [i_17 + 1] [i_17 + 4] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)253))));
                            arr_66 [5] [(_Bool)1] [i_15] [5] [i_3 - 1] = ((/* implicit */_Bool) ((short) (signed char)73));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_38 = ((/* implicit */unsigned int) arr_9 [i_3 - 1] [i_3 + 2] [i_3 - 1]);
            arr_69 [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [4LL]))));
            /* LoopNest 2 */
            for (unsigned int i_19 = 3; i_19 < 11; i_19 += 1) 
            {
                for (int i_20 = 1; i_20 < 10; i_20 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned int) var_3);
                        arr_75 [i_19] [i_18] = ((/* implicit */unsigned char) ((int) (unsigned char)13));
                        var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_60 [i_20] [i_3] [i_3] [i_18] [i_3]))));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37544)) | (((/* implicit */int) arr_23 [i_3 + 2] [i_3 + 2] [i_19] [i_20]))));
                    }
                } 
            } 
        }
    }
    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((unsigned int) max((var_17), (var_0))))));
}
