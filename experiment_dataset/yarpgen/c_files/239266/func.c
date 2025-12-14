/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239266
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */long long int) arr_5 [(signed char)10]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) arr_3 [i_0])) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_12 [i_3] [i_2] [i_0 - 1])), (arr_5 [i_1]))))))) << (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 - 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            arr_13 [(signed char)13] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_1])))))))) : (((((arr_9 [i_1] [i_1] [i_1]) < (((/* implicit */unsigned int) var_12)))) ? (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) var_11)) : (arr_3 [i_0])))) : ((~(arr_0 [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_19 [i_4] [i_5] [i_5] = ((/* implicit */long long int) (unsigned char)44);
                arr_20 [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_16 [i_4]))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_9 [i_4] [2ULL] [i_4])))))))) | (((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) arr_11 [i_4] [(short)12] [i_5] [(_Bool)1]))))) ? ((~(4269824312684604108ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(signed char)9])) ? (arr_9 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                arr_21 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) (short)25043);
                var_19 *= ((/* implicit */unsigned int) arr_12 [i_4] [i_5] [i_5]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 3) 
    {
        var_20 = ((/* implicit */long long int) var_8);
        arr_24 [i_6] [i_6] |= ((/* implicit */unsigned int) (unsigned char)14);
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
    {
        var_21 -= ((/* implicit */int) (!(arr_1 [i_7 + 2])));
        arr_27 [i_7] = ((arr_22 [i_7]) != (arr_22 [i_7 + 1]));
        arr_28 [(short)0] |= ((/* implicit */long long int) ((unsigned char) arr_22 [i_7 + 1]));
    }
    /* vectorizable */
    for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_8] [5LL] [(short)0]))) || (((/* implicit */_Bool) ((signed char) arr_4 [i_10] [10ULL] [i_8])))));
                arr_38 [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (short)32746))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (signed char i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) var_0);
                            var_24 -= (-(((/* implicit */int) (unsigned char)20)));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_12 - 1])) != (((/* implicit */int) arr_16 [i_12 + 2]))));
                        }
                    } 
                } 
                arr_43 [i_10] [i_9] [i_8 + 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_4)) : (arr_9 [i_9] [i_9] [i_9])))) >= (arr_15 [i_8 + 1] [i_10])));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_47 [i_8] [i_9] = ((/* implicit */long long int) (+(arr_31 [i_9])));
                var_26 -= ((/* implicit */signed char) (~((~(((/* implicit */int) arr_7 [i_8 - 1] [i_8 - 1] [i_13] [i_13]))))));
                arr_48 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) (+(((var_2) ? (arr_3 [i_9]) : (((/* implicit */int) arr_39 [i_8] [i_9] [i_13] [i_9] [i_8] [i_8]))))));
            }
            for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                arr_51 [i_8] [(signed char)8] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_22 [i_8])) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_8] [i_8]))))));
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_49 [i_8 + 1] [i_9] [i_9]))));
                var_28 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -989021588000222700LL)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) arr_12 [i_8] [i_9] [i_9]))))));
                var_29 *= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_40 [i_8 + 2] [i_14]))));
            }
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((int) arr_37 [i_9] [i_15] [(unsigned short)0])))));
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            var_31 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_31 [i_16])))) & (arr_61 [i_8] [i_9] [i_15] [i_17] [(signed char)0])));
                            var_32 ^= ((/* implicit */unsigned short) (!(arr_2 [i_8 - 1])));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_22 [i_8]))));
                        }
                    }
                } 
            } 
        }
        arr_62 [0] [0] = ((/* implicit */unsigned short) ((arr_32 [i_8 + 3] [i_8 + 3] [i_8 - 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [14U] [i_8] [i_8] [14U]))));
        arr_63 [(short)3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_8] [i_8 + 2]))));
        arr_64 [i_8] &= ((/* implicit */long long int) (!((_Bool)1)));
        arr_65 [i_8] [i_8 + 2] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_8 - 1])) ? (arr_35 [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    }
}
