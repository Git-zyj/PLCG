/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191320
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)57)) && (((/* implicit */_Bool) 3930913806U))));
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((short) var_10)), (((/* implicit */short) min((var_12), (((/* implicit */unsigned char) var_7))))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((_Bool) max(((unsigned char)101), ((unsigned char)48))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_0))));
                    arr_6 [i_1] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) 9223372036854775807LL);
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((var_1), (((/* implicit */short) (!(((/* implicit */_Bool) var_14))))))))));
                }
            } 
        } 
        arr_7 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0 - 2] [i_0] [i_0 - 3])))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_11))))) >> (((((/* implicit */int) arr_9 [i_3])) - (23420)))));
        arr_11 [(short)0] = ((/* implicit */signed char) (short)-21275);
        /* LoopSeq 4 */
        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_8 [i_4]))));
            arr_14 [i_4] [i_4] [(unsigned char)14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) : (arr_8 [(unsigned char)15]))) >> (((((/* implicit */int) (unsigned short)21352)) - (21320)))));
            var_22 = ((/* implicit */unsigned short) (+(arr_13 [i_3])));
        }
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                arr_21 [i_6 - 1] [13U] [i_5] [i_3] = ((/* implicit */unsigned short) -1926498100330975876LL);
                var_23 -= ((/* implicit */unsigned int) var_4);
                arr_22 [i_3] [2U] [i_3] = ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 - 1] [i_5]))));
            }
            /* LoopNest 3 */
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_34 [i_3] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_9]))));
                            var_25 ^= ((/* implicit */unsigned long long int) 32);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_10 = 3; i_10 < 16; i_10 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (299430639) : (((/* implicit */int) var_12)))));
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 16; i_11 += 3) 
            {
                var_27 = ((/* implicit */short) 1926498100330975876LL);
                /* LoopSeq 3 */
                for (long long int i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
                {
                    arr_42 [i_3] [i_11] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_12] [i_11 - 1] [i_10] [i_10] [i_3]))));
                    arr_43 [i_12] [i_11] [i_11] [i_11] [i_11] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_11] [i_10 - 1] [i_11] [i_12])) >> (((/* implicit */int) arr_23 [5ULL] [i_10 - 2] [i_10] [i_10 - 2]))));
                    var_28 = ((/* implicit */int) (-(((3965919838U) >> (((var_0) - (706276207U)))))));
                }
                for (long long int i_13 = 0; i_13 < 17; i_13 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) var_1);
                    var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)48))));
                }
                for (long long int i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */long long int) ((short) (short)8184));
                    var_32 = ((/* implicit */int) (~(1926498100330975876LL)));
                    var_33 = ((/* implicit */unsigned int) ((_Bool) var_0));
                    var_34 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                }
            }
        }
        for (unsigned char i_15 = 3; i_15 < 16; i_15 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_31 [i_3] [(unsigned char)10] [i_3])))));
            arr_51 [i_3] [i_3] [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_3] [i_15] [4U] [i_15 - 2]))));
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 2) 
    {
        arr_56 [i_16] = ((/* implicit */_Bool) -8408845517986059450LL);
        /* LoopNest 2 */
        for (unsigned char i_17 = 2; i_17 < 22; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                {
                    var_36 = min((((/* implicit */unsigned int) max((min(((unsigned short)48468), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), (arr_54 [i_17]))))))), (((((/* implicit */_Bool) var_3)) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3692))))));
                    var_37 = ((/* implicit */unsigned char) max(((+(1926498100330975869LL))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_57 [i_18] [i_17])) ^ (((/* implicit */int) var_4)))))))));
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_52 [i_16]), (((/* implicit */unsigned short) ((signed char) var_14)))))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_57 [i_16] [i_16])) : (((/* implicit */int) arr_55 [i_16] [i_16])))) - (11180)))));
    }
    for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
    {
        var_39 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_63 [i_19] [i_19]))))), (max((((/* implicit */unsigned int) var_13)), (arr_63 [i_19] [i_19])))));
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)48012)), (4691836384070128511ULL)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_19] [i_19])))))));
    }
}
