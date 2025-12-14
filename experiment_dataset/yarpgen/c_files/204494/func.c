/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204494
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(13981209287382516777ULL)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
            arr_8 [i_0] [(unsigned short)17] = ((/* implicit */unsigned long long int) var_4);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_11 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_1 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0])) + (24448))) - (31)))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) && (((/* implicit */_Bool) ((long long int) 8160U)))));
            }
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_15 [i_0] = ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    var_18 = ((/* implicit */signed char) arr_0 [i_4 + 1] [i_0]);
                    var_19 = var_7;
                    arr_18 [(short)5] [i_0] = var_9;
                    var_20 = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [(_Bool)1])) < (arr_13 [(signed char)6] [i_0] [(unsigned short)1]))) ? (11720447321948572184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_3] [i_3])))));
                }
                var_21 = ((/* implicit */unsigned short) (unsigned char)54);
            }
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_22 = ((/* implicit */long long int) ((arr_20 [i_0] [i_1] [(unsigned short)3]) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                arr_21 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_7 [i_0]));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1 - 1] [i_6 + 1])) & (((/* implicit */int) arr_10 [i_1 - 1] [i_6 + 1]))));
                    var_23 = ((/* implicit */unsigned char) var_8);
                    var_24 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1 - 1] [i_5]);
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) (~(arr_13 [i_1 - 1] [i_0] [i_7 + 1])));
                    var_26 = ((/* implicit */unsigned long long int) var_7);
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (18446744073709551615ULL)));
                }
                arr_30 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((arr_28 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_28 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((unsigned short) (signed char)-52))));
            }
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (0) : (((/* implicit */int) (unsigned short)56289))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned char)63))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_34 [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_8 - 1] [15LL] [i_8]);
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_32 [(_Bool)1] [(signed char)1] [(signed char)1]))) - (((/* implicit */int) arr_27 [i_8 - 1] [i_8] [i_8] [11LL]))));
            arr_36 [i_0] = ((/* implicit */long long int) var_5);
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_10 = 3; i_10 < 16; i_10 += 4) /* same iter space */
            {
                var_29 += ((/* implicit */unsigned char) arr_38 [2ULL]);
                var_30 = ((/* implicit */unsigned long long int) arr_22 [i_0] [(_Bool)1] [i_9] [i_9 - 1] [i_0]);
            }
            for (long long int i_11 = 3; i_11 < 16; i_11 += 4) /* same iter space */
            {
                arr_46 [i_0] [i_0] [i_9 - 1] [i_11 + 3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_9] [i_0] [i_0]))) : (var_2))))));
                arr_47 [13LL] [i_9 - 1] [i_11] [i_0] = ((/* implicit */long long int) var_9);
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    var_31 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_22 [i_0] [10ULL] [13ULL] [10ULL] [i_0])) | (((/* implicit */int) (signed char)103)))));
                    arr_50 [i_12] [(short)13] [i_0] [i_0] [i_9 - 1] [4ULL] = ((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_9] [i_9] [i_12])))));
                    arr_51 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (_Bool)1))) * (((/* implicit */int) var_7))));
                    arr_52 [i_0] [i_0] [i_9 - 1] [4LL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) 7680)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_4))))));
                }
                var_32 = ((/* implicit */unsigned short) ((arr_16 [i_11 + 1] [i_9 - 1]) | (arr_16 [i_11 + 3] [i_9 - 1])));
            }
            for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                arr_56 [i_0] [(short)10] [i_13] = arr_33 [i_0];
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_25 [i_0] [i_9 - 1] [i_0] [(signed char)11]))))) > (((/* implicit */int) ((((/* implicit */_Bool) 12ULL)) && (((/* implicit */_Bool) arr_12 [i_0] [i_9] [i_9])))))));
            }
            var_34 = ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_44 [i_9] [i_9 - 1] [i_0] [i_9 - 1])));
        }
    }
}
