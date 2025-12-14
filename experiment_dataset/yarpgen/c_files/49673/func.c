/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49673
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
    var_15 = ((/* implicit */int) var_14);
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_17 -= ((/* implicit */unsigned int) ((arr_0 [0]) % (arr_0 [(unsigned short)6])));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_8)) == (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_18 *= ((/* implicit */unsigned int) arr_5 [i_1] [i_1]);
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((arr_9 [i_1] [16] [i_2] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 -= ((/* implicit */long long int) ((arr_6 [i_4 + 1] [i_3]) <= (arr_6 [i_5] [i_2])));
                            arr_16 [i_1] [i_1] [i_3 + 1] [i_4 + 1] [i_5] [i_3] = ((/* implicit */int) ((unsigned short) (_Bool)1));
                        }
                    } 
                } 
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_20 [i_6] [i_6] [i_6 - 1] [i_6] = ((/* implicit */int) arr_13 [i_1]);
                arr_21 [i_1] [i_6] [i_6] = ((/* implicit */signed char) ((1970258095) << (((((/* implicit */int) (signed char)95)) - (95)))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_13 [i_7])) + (((unsigned long long int) arr_13 [i_7]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7] [i_2 + 2])) ^ (1970258088))))));
                    arr_27 [i_1] [i_2 + 1] [i_1] [i_8] [i_1] = ((/* implicit */short) arr_23 [i_2 - 1] [i_2 - 2] [(unsigned char)13] [i_8 - 2]);
                }
                for (int i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    arr_30 [i_1] [i_2] [i_1] [i_9] = ((/* implicit */unsigned int) arr_29 [i_9 + 2] [(short)13] [i_7] [i_9] [i_9]);
                    arr_31 [i_1] [i_9] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) ^ ((-(-1970258096)))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_23 [i_9] [i_7] [i_2] [i_1]))));
                    var_24 = ((/* implicit */int) var_3);
                }
                arr_32 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */int) ((var_0) <= (arr_25 [i_1] [i_1])))) <= ((-(((/* implicit */int) (short)1))))));
            }
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                arr_35 [0LL] [i_2] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_2]))));
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */int) arr_10 [i_2 + 2] [(_Bool)1] [i_2 - 2] [i_2] [i_2 + 2] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2 - 1] [16U] [i_2 - 2] [i_1])) + (32239))))))));
            }
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                for (int i_12 = 1; i_12 < 22; i_12 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_11] [i_2 - 2] [i_11]))))))));
                        var_27 = ((/* implicit */short) ((arr_15 [i_12 + 1] [i_12] [i_2 + 2] [i_2 - 1] [i_2]) << (((arr_26 [i_12 - 1] [i_12 - 1] [i_12]) - (989955482237589917LL)))));
                        arr_42 [i_2] [i_2] [i_2 - 1] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_12 - 1] [i_11] [i_12] [i_12] [i_1] [i_2])) && (((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_11] [i_2]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (_Bool)1))));
            arr_45 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_13]))) % (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_13]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */int) (unsigned char)27))))))));
            var_29 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_25 [i_1] [i_13]))))));
            var_30 *= ((/* implicit */short) ((signed char) -1970258097));
        }
        var_31 = (+(arr_14 [i_1] [i_1] [i_1] [(signed char)14] [i_1] [i_1] [i_1]));
    }
    for (long long int i_14 = 3; i_14 < 17; i_14 += 2) 
    {
        arr_48 [i_14 - 2] [i_14 - 3] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((1073709056), (((/* implicit */int) (short)-23320))))), (9791556853841216507ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5666)) ? (-1970258097) : (((/* implicit */int) (_Bool)1)))))));
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) max(((short)32322), (((/* implicit */short) (signed char)84)))))));
    }
    var_33 -= ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
    {
        for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 10; i_17 += 4) 
            {
                {
                    arr_55 [(_Bool)1] = ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 10; i_19 += 2) 
                        {
                            {
                                var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((int) arr_8 [i_15]))))) <= (((((/* implicit */_Bool) arr_15 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_16] [i_15])))))));
                                arr_60 [i_16] [i_17] [i_18] [(short)1] = ((/* implicit */long long int) (((~(((/* implicit */int) var_1)))) != (((1970258086) << (((15555444293686703955ULL) - (15555444293686703955ULL)))))));
                                var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2051684302U)))))));
                                var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((-(arr_57 [i_15] [i_16] [i_18] [i_19]))) << (((((((/* implicit */int) var_14)) + (67))) - (10))))))));
                                var_37 = ((/* implicit */long long int) max((var_37), (((((/* implicit */_Bool) ((long long int) var_4))) ? ((+(arr_29 [i_15] [i_15] [i_17] [i_19] [i_19]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_15] [i_16])) - (((/* implicit */int) arr_43 [i_16])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
