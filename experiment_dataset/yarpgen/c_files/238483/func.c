/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238483
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
    var_18 = ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) var_10);
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) (unsigned char)127)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-2027564245) : (arr_0 [(_Bool)1] [i_1])))));
        arr_7 [i_1] [10] = ((/* implicit */signed char) ((var_12) + (((/* implicit */int) arr_4 [i_1] [i_1]))));
        arr_8 [i_1] = ((/* implicit */signed char) (unsigned char)127);
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] |= ((/* implicit */unsigned int) (unsigned char)129);
        arr_12 [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) <= (((/* implicit */int) arr_5 [i_2])))))) / (var_14)));
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 24; i_3 += 4) 
        {
            arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((-2147483633) & (((/* implicit */int) (short)8191))));
            arr_17 [i_2] = ((/* implicit */unsigned int) var_2);
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                arr_20 [5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)155))))) + (arr_13 [i_3])));
                arr_21 [18U] [i_3 - 1] [24LL] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_3 + 1])) ? (((/* implicit */int) (short)7317)) : (arr_15 [i_3 - 2] [i_3 - 1]))))));
                var_20 *= ((/* implicit */short) (+((-(((((/* implicit */int) (unsigned char)129)) + (arr_15 [(unsigned char)17] [0LL])))))));
                arr_22 [i_4] = (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (short)32767))));
                var_21 = ((/* implicit */signed char) ((min(((~(3660290023U))), (((/* implicit */unsigned int) (short)-8920)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483630)) ? (arr_2 [i_3 - 1] [16]) : (((/* implicit */int) (_Bool)1))))) != (((((/* implicit */_Bool) 2109825785)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8905))) : (17516097242304883900ULL))))))));
            }
            for (int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                arr_25 [i_5] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)8064)))))))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_23 [i_5])), (arr_2 [i_3 + 1] [i_3 - 2])))) / (var_14)));
                arr_26 [i_2] [i_2] [(signed char)11] [i_5] |= ((/* implicit */long long int) (((~(((/* implicit */int) ((2088960U) != (1650044022U)))))) + (((/* implicit */int) arr_18 [i_2]))));
            }
        }
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) var_16))));
                arr_32 [i_7] &= ((/* implicit */int) (_Bool)1);
            }
            for (unsigned int i_8 = 2; i_8 < 23; i_8 += 3) 
            {
                arr_35 [i_2] [i_6] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_23 [i_6]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    arr_39 [(signed char)3] [i_8] [(signed char)3] [2LL] = arr_37 [i_2] [i_6] [i_9 - 1] [i_8 + 2] [i_8] [i_6];
                    var_24 = ((/* implicit */unsigned int) arr_33 [i_2] [i_2] [i_2]);
                    var_25 = ((/* implicit */short) arr_29 [i_2]);
                    arr_40 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (short)8922);
                }
            }
            var_26 = ((/* implicit */_Bool) ((min((1758102621U), (((/* implicit */unsigned int) min((arr_30 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) (unsigned char)255))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6])) ? (var_13) : (((/* implicit */int) arr_19 [(unsigned short)6] [i_6] [(unsigned short)6] [(unsigned short)6])))))))))));
            arr_41 [(signed char)17] [(_Bool)1] = ((/* implicit */unsigned char) -5189252125018883923LL);
            arr_42 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_2] [i_6])), (arr_24 [i_2] [i_6] [i_6] [i_2])))) || (((/* implicit */_Bool) arr_2 [i_6] [i_6]))));
        }
        for (long long int i_10 = 4; i_10 < 23; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) arr_43 [i_2] [i_2] [3ULL]);
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2] [i_2])) ? (arr_49 [i_2] [i_10 - 2] [i_11] [i_10 - 2] [i_2]) : (((/* implicit */int) arr_43 [(unsigned char)24] [i_10] [i_10])))))));
                        arr_50 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -845422522)) ? (5189252125018883923LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_13 = 1; i_13 < 23; i_13 += 1) 
            {
                arr_54 [i_2] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7800))) + (-5189252125018883923LL))) != (arr_29 [i_10 - 3])));
                arr_55 [i_13] [i_10 - 1] [i_10 - 1] [i_13 + 1] = max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_19 [i_13 - 1] [18LL] [i_10 - 1] [(unsigned char)3])) : (var_11)))));
                arr_56 [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_24 [i_10] [i_10 + 2] [i_10] [i_10 - 2])) != (5977860664984300312ULL)));
            }
        }
    }
}
