/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200933
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) 866238403U))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 &= ((/* implicit */unsigned int) var_9);
            var_15 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))) != (((long long int) min((arr_3 [i_1] [i_1] [9]), (((/* implicit */unsigned char) var_10)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 13; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = (((!(((/* implicit */_Bool) arr_18 [i_3 - 1] [i_2] [i_3] [i_2] [i_4 + 2] [i_4 + 2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1] [i_4 - 1]))) : (((((/* implicit */_Bool) arr_3 [6U] [i_3] [(unsigned char)1])) ? (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38595))) : (-2795691044124217142LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_2]))))));
                            arr_19 [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) arr_9 [i_4]);
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2])) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (1U))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_6] [i_7] [(_Bool)1] [i_9])) < ((-(((/* implicit */int) var_1)))))))));
                            var_19 = ((/* implicit */signed char) ((arr_22 [i_7 - 2] [i_7 + 1] [7U]) == (((/* implicit */int) (unsigned short)15))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7 - 2] [(_Bool)1] [i_7] [i_7 + 2] [i_0])) ? (arr_17 [i_7 + 2] [i_7] [i_7] [i_7 - 1] [i_0]) : (arr_17 [i_7 - 1] [i_7 - 2] [(signed char)4] [i_7 - 2] [i_6])));
            }
            var_21 = ((((((/* implicit */int) (unsigned char)243)) < (((/* implicit */int) var_12)))) ? (arr_25 [i_6] [i_6] [i_6] [i_0]) : (((/* implicit */int) arr_6 [i_6] [i_0])));
            arr_31 [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_6]) : (arr_0 [i_0])));
            var_22 = ((/* implicit */long long int) var_6);
        }
        /* LoopSeq 2 */
        for (signed char i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_5 [i_10]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_10] [i_10])) < (((/* implicit */int) arr_11 [(unsigned char)0] [(unsigned char)0])))))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_30 [i_0] [i_0] [i_0] [i_10] [i_10]) : (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 4293651034U)) >= (arr_17 [i_0] [i_10 - 1] [i_10 + 1] [i_10] [i_10]))))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] [i_10])));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                for (unsigned char i_12 = 2; i_12 < 14; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        {
                            var_24 *= ((/* implicit */signed char) (-(var_9)));
                            arr_45 [i_0] [i_10] [i_11] [(signed char)9] [i_13] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_13])) ? (arr_15 [(unsigned short)0] [(unsigned short)0] [i_11] [i_12] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)44)))))) ? (((/* implicit */int) arr_13 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_10] [(signed char)12] [(short)10] [i_13]))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_14 = 1; i_14 < 14; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((max((((arr_18 [i_0] [i_0] [i_0] [i_14] [i_14] [i_0] [i_15]) * (arr_10 [i_14] [i_14] [i_15]))), (((/* implicit */unsigned int) arr_7 [i_0])))) + (max((((/* implicit */unsigned int) arr_44 [i_0] [i_14] [i_14] [i_14] [i_14 + 1] [i_14])), (min((arr_10 [i_0] [i_0] [i_15]), (((/* implicit */unsigned int) arr_12 [i_0] [12LL] [i_15] [i_15] [i_15])))))))))));
                var_26 -= ((/* implicit */unsigned int) ((((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_15] [15U] [10ULL] [i_0]))) / (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 611256891U)) && (((/* implicit */_Bool) var_10)))))) : (arr_21 [i_14 + 1] [i_0]))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_27 [i_0] [i_15] [i_0] [i_14] [i_15])) ? (arr_25 [i_0] [i_14] [i_0] [i_15]) : (((/* implicit */int) arr_2 [i_0] [i_14] [i_15])))), (((/* implicit */int) (_Bool)1)))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_16 = 4; i_16 < 14; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    {
                        arr_54 [i_0] [i_14] [i_16] [i_17] = ((/* implicit */_Bool) arr_34 [i_17] [i_16] [i_14] [i_0]);
                        var_27 = ((/* implicit */int) (~(((((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (arr_15 [i_0] [i_14] [i_0] [i_16] [i_17]))) ? (1U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
                        var_28 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_8)), ((signed char)44)))) ? (arr_43 [i_14] [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [(unsigned short)8]) : (((/* implicit */int) arr_23 [i_16 - 2] [i_14] [i_16] [i_16]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_16]))) & (((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14] [(short)2])))))))));
                        var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_9 [i_17]))));
                        var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_14 - 1] [i_16 + 2] [i_17] [i_17] [i_17]))));
                    }
                } 
            } 
        }
    }
    for (int i_18 = 0; i_18 < 14; i_18 += 3) 
    {
        var_31 = ((/* implicit */unsigned char) 9223372036854775807LL);
        var_32 &= ((/* implicit */signed char) (((((~(((/* implicit */int) max((var_5), ((short)14333)))))) + (2147483647))) << (((((unsigned int) (_Bool)1)) - (1U)))));
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            var_33 *= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_18] [i_18] [i_19] [i_19]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (short)-10804))) * (arr_36 [i_18] [i_18] [i_18] [i_19])))));
            var_34 = ((/* implicit */long long int) arr_7 [i_18]);
        }
    }
}
