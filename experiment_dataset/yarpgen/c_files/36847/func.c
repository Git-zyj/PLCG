/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36847
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((arr_11 [i_2 + 1] [i_2 + 2] [i_2] [i_2]), (((/* implicit */long long int) 786997754U))))), (((unsigned long long int) arr_11 [i_2 + 2] [i_2 + 1] [i_2] [i_2]))));
                                arr_13 [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_9)))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_1))) : (((/* implicit */unsigned long long int) max((8242395943361443588LL), (160172901977635687LL)))))) * (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((arr_7 [(unsigned char)13] [i_2] [i_3] [i_4]) * (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0] [i_1] [i_2] [i_3])))))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) var_14);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((arr_0 [i_1 + 1]) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_16 = ((long long int) var_1);
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (unsigned char i_7 = 4; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_24 [i_5] [i_7] = var_8;
                    arr_25 [i_7] [i_7] [(unsigned short)7] = ((/* implicit */unsigned char) ((unsigned int) var_14));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        for (short i_9 = 2; i_9 < 7; i_9 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    for (int i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_34 [i_8] [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [i_9 + 4] [i_9] [i_9 - 1])))) ? (((max((((/* implicit */unsigned long long int) (_Bool)1)), (16700896882337073551ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2)))))))) : (((/* implicit */unsigned long long int) var_6))));
                            arr_35 [i_8] [i_8] [i_8] [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_9 + 3] [i_8])) : (var_10)))));
                            arr_36 [i_10] [i_8] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) 652825025U);
                            /* LoopSeq 2 */
                            for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                            {
                                arr_39 [i_8] [i_8] = ((/* implicit */int) min((max(((~(var_6))), (((/* implicit */long long int) (+(arr_31 [i_12] [i_9] [i_12])))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (arr_9 [i_12] [i_11] [i_8] [i_8])))) <= (18446744073709551614ULL))))));
                                arr_40 [i_8] [i_10 + 1] [i_10] [i_11] [0U] [i_9] [0U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_8])) / (((/* implicit */int) arr_19 [19U] [19U] [i_12]))))), (arr_33 [i_8] [i_8] [i_8] [i_8])))) ? (((arr_23 [i_10 - 1] [i_11] [i_12]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9]))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((unsigned short) 8598683489014491674LL))))))));
                                arr_41 [i_8] [i_12] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (var_0)))) % ((+(-8598683489014491678LL)))));
                                arr_42 [i_8] [i_8] [i_8] [i_11] [i_8] [i_12] = ((/* implicit */long long int) min((((min((((/* implicit */unsigned long long int) arr_29 [i_8])), (arr_27 [i_12]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10 - 1] [i_9]))))), (((((((/* implicit */_Bool) arr_37 [0LL] [i_9] [i_9] [i_9] [i_8] [i_9] [i_9 + 1])) || (((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) var_6))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                            {
                                arr_45 [i_8] [i_9] [i_10] [i_10] [1LL] [i_13] = ((/* implicit */signed char) ((short) arr_21 [i_8] [i_8] [i_10] [i_8]));
                                arr_46 [i_8] [i_9] [(unsigned char)5] [i_11] [i_13] [i_10] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                                arr_47 [i_13] [i_8] [i_10] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned int) 1410137951306609144ULL);
                            }
                        }
                    } 
                } 
                arr_48 [i_8] [i_8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_8]))))) ? (min((-935440176066729826LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_7)))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_9 + 1] [i_9] [i_8] [i_8] [i_8])) || ((_Bool)1)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            {
                arr_54 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (-8598683489014491675LL)))) : (((var_1) / (((/* implicit */unsigned long long int) var_4)))))) : (min(((+(arr_20 [i_14]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_1)))))));
                arr_55 [i_14] [i_14] [i_15] = ((/* implicit */unsigned char) max((((long long int) arr_5 [i_14])), (((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_14] [i_15])) - (((/* implicit */int) arr_5 [i_15])))))));
                arr_56 [i_14] [i_14] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min((arr_53 [i_14] [i_14] [i_15]), (var_2)))))) ? (((((/* implicit */_Bool) ((arr_21 [i_14] [i_14] [i_14] [i_14]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_14])))))) ? (((-1163334591145337727LL) | (((/* implicit */long long int) var_7)))) : (((((/* implicit */_Bool) arr_22 [i_14] [i_14] [(unsigned char)5] [i_15])) ? (((/* implicit */long long int) var_4)) : (-8598683489014491682LL))))) : (((/* implicit */long long int) ((((unsigned int) var_14)) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_14] [i_15] [i_15]))))))))));
                arr_57 [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
}
