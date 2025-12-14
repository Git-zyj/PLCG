/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194393
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
    var_19 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((38978839497173528LL) & (((/* implicit */long long int) 1366156141))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((var_3) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) arr_4 [i_2 + 1] [i_0 + 1]))));
                arr_9 [i_2] [i_0] &= ((/* implicit */signed char) arr_6 [i_2 + 2]);
            }
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29993)) | (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_3] [i_3] [i_0] [i_0 - 1]))));
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (_Bool)0);
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_0 [(unsigned short)13] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))));
                            var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_4 + 1] [i_6 - 1])) ? (arr_18 [13U] [(_Bool)0] [i_4 + 1] [i_6 + 2]) : (arr_18 [i_0 - 1] [i_0 - 1] [i_4 + 1] [i_6 + 1])));
                        }
                    } 
                } 
            } 
            var_24 = ((((/* implicit */_Bool) 9223372036854775795LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)116))) : (3231751712980160970LL));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 1; i_7 < 24; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 2; i_9 < 23; i_9 += 1) 
                    {
                        {
                            arr_31 [i_0 - 1] [i_3] [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_9 - 1] [i_9])) ? (((((/* implicit */_Bool) 776666555)) ? (((/* implicit */int) var_14)) : (2147483647))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                            var_25 = ((/* implicit */long long int) (_Bool)1);
                            var_26 = ((/* implicit */short) 9223372036854775807LL);
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (arr_21 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]) : (18446744073709551615ULL)));
                        }
                    } 
                } 
                arr_32 [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3090665714U)) ? (2903186370454879660ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2003175540))))));
                var_28 = ((/* implicit */signed char) (((((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_3] [(signed char)12]))))) - (((/* implicit */long long int) 3224349567U))));
            }
            for (unsigned short i_10 = 1; i_10 < 24; i_10 += 4) /* same iter space */
            {
                arr_37 [i_10] [18U] [i_3] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((unsigned short) 776666549)))));
                arr_38 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0 - 1] [i_10])) ? (-427600061) : (((/* implicit */int) (short)-16384))));
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_12 = 1; i_12 < 24; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 3) 
                {
                    for (unsigned short i_14 = 1; i_14 < 23; i_14 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) var_1);
                            arr_51 [i_14] [i_13] [i_14 + 1] [(signed char)12] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_43 [i_14 - 1] [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_43 [i_14 - 1] [i_0 + 1] [i_0 + 1]))));
                            arr_52 [i_13] [i_0] [i_13] = ((/* implicit */short) ((arr_12 [i_12 + 1] [i_11] [i_0 - 1]) * (arr_12 [i_0 + 1] [i_11] [i_12 - 1])));
                            arr_53 [i_0] [i_13] [i_0 + 1] [i_0] [(unsigned short)22] = (+(-5483799418451318476LL));
                            arr_54 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17724)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */unsigned int) -1)) : (4294967295U)))) : ((-9223372036854775807LL - 1LL))));
                        }
                    } 
                } 
            } 
            var_31 += ((/* implicit */_Bool) 8387584U);
        }
    }
}
