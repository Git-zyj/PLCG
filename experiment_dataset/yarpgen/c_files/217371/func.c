/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217371
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((8493618395236735297LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) < (var_3))))));
    var_16 = ((((/* implicit */_Bool) max((-1083344931), ((-(-1083344931)))))) ? ((-(var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) 1083344930)))));
        var_18 = ((/* implicit */signed char) (((_Bool)1) ? (1083344912) : (-1083344930)));
    }
    for (long long int i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1083344932)))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 2])))) : (((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) (unsigned char)220))))));
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_7 [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? ((+(((/* implicit */int) var_4)))) : (min((-1083344931), (((/* implicit */int) (unsigned char)35))))))));
            arr_8 [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_0 [i_1 - 2] [i_2 - 1])) > (((/* implicit */int) (unsigned char)31)))));
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 23; i_3 += 2) 
            {
                for (unsigned char i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)211)) == (arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))) ? (((int) (unsigned char)35)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)3938)) != (-1083344945))))));
                            arr_16 [i_3] [i_1] [i_3] [i_4] [i_1 - 2] [i_1] [i_3] = var_11;
                        }
                    } 
                } 
            } 
            var_21 = (unsigned char)45;
        }
        for (short i_6 = 1; i_6 < 23; i_6 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) var_0);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 23; i_8 += 4) 
                {
                    for (int i_9 = 4; i_9 < 23; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_25 [i_9] [i_9 - 4] [i_9] [i_9] [i_6]))));
                            arr_28 [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) (~((-(arr_12 [i_1] [i_1 - 2] [i_1 - 2] [i_8 + 1] [i_8 - 1] [i_9 - 4])))));
                            arr_29 [i_6 + 1] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9 - 2])) ? (arr_12 [i_9 - 3] [i_9 + 1] [i_9 - 4] [i_9 - 1] [i_9 + 1] [i_8]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) var_9)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) : (arr_13 [i_6] [i_7] [i_8] [i_9])));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_10 = 3; i_10 < 22; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        {
                            arr_37 [i_1] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_6])) == (((/* implicit */int) arr_35 [i_1 + 1] [i_1 + 2] [i_6 - 1] [i_10 - 2] [i_10 + 1]))))) == (((((/* implicit */int) arr_5 [i_1])) + (1083344930)))));
                            arr_38 [i_1] [i_1] [i_11] [i_10] [i_12] = ((/* implicit */_Bool) (((((~(((/* implicit */int) ((_Bool) arr_33 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))) + (2147483647))) << (((((((/* implicit */_Bool) arr_15 [i_1] [i_6 - 1] [i_1] [i_11] [i_12])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (arr_12 [i_1] [i_1] [i_10 - 2] [i_11] [i_1] [i_12])))) : (8209947834859084521LL))) - (73LL)))));
                            var_24 = ((/* implicit */unsigned int) ((int) (-((~(1083344957))))));
                            var_25 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) -1083344958)) ^ ((~(7421844452149505969ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)101)) ? (1083344959) : (((/* implicit */int) (unsigned char)220)))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (arr_27 [i_1] [i_1] [i_1] [i_6] [i_10] [i_1] [i_12])))))))));
                            arr_39 [i_1] [i_6 + 1] [i_1] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (arr_12 [i_10 + 1] [i_10 - 3] [i_10] [i_10] [i_10 - 3] [i_6])))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */int) var_11)), (arr_10 [i_1] [i_6 + 1] [i_10] [i_12]))) : (((/* implicit */int) (unsigned char)48)))) : ((~(((((/* implicit */int) arr_34 [i_1 + 2] [i_6] [i_10 - 1] [i_6])) << (((/* implicit */int) arr_5 [i_1]))))))));
                        }
                    } 
                } 
            } 
            arr_40 [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) -1083344942)), (var_3)));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
    {
        arr_43 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)36)) / ((-(1163553670)))));
        var_26 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) || (((/* implicit */_Bool) arr_14 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))) : (((/* implicit */int) arr_32 [i_13] [i_13] [i_13] [i_13])))));
        arr_44 [i_13] [i_13] = ((/* implicit */short) (~(((long long int) arr_15 [i_13] [i_13] [i_13] [i_13] [i_13]))));
    }
}
