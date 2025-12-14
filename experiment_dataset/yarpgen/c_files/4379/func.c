/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4379
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
    var_16 = ((/* implicit */signed char) ((unsigned short) var_5));
    var_17 = ((/* implicit */unsigned int) 14);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) 15393162788864LL)) ? (9223372036854775807LL) : (15393162788864LL));
                    var_18 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (798327367U))));
                    arr_8 [i_0] [i_0] [(_Bool)1] [1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [6ULL] [i_3 + 3] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_6)))));
                                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_3 + 3] [i_3 - 1] [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 1] [i_3 + 3])), (((((/* implicit */int) ((_Bool) var_5))) + (min((31), (((/* implicit */int) var_15))))))));
                                arr_14 [(_Bool)1] [i_1] [i_2] [(unsigned char)1] [(_Bool)1] = ((/* implicit */short) max((max((var_12), (((((/* implicit */unsigned long long int) var_14)) / (var_12))))), (((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_0] [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 1]), (arr_12 [i_1] [i_1] [i_1] [(unsigned short)5] [i_1] [i_3 + 3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_5] [i_6] [i_7 - 1] [(short)1]))))) ? (arr_6 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]) : (((/* implicit */int) arr_21 [i_0] [i_5] [i_7 + 1] [i_7])))))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                            var_22 ^= ((/* implicit */unsigned short) ((unsigned long long int) (-(var_9))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~((+(var_1))))))));
                        }
                    } 
                } 
            } 
            var_24 -= ((/* implicit */int) (-(-15393162788864LL)));
            arr_24 [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned short)1] [i_5] [i_0] [i_5] [(signed char)5] [i_5] [i_0])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_9 [1ULL])))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 7; i_9 += 1) 
        {
            arr_28 [i_9] = (!(((/* implicit */_Bool) var_9)));
            arr_29 [i_9] = arr_12 [4U] [(short)5] [(short)5] [i_9 + 2] [i_9] [(unsigned short)8];
        }
        for (unsigned long long int i_10 = 1; i_10 < 7; i_10 += 2) 
        {
            var_25 *= var_12;
            arr_33 [i_0] [i_10] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (short)-9436))))))))) < (max((-15393162788847LL), (((/* implicit */long long int) 255U))))));
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 23; i_11 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_10))));
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(arr_34 [i_11]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 3; i_14 < 23; i_14 += 2) 
                {
                    arr_43 [i_11 - 1] [i_11 - 1] [i_11 - 3] [i_11] [(unsigned short)22] [i_11 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)1023))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_36 [0LL] [i_13] [i_14])) : (((/* implicit */int) arr_38 [i_12] [0U] [i_12])))))));
                }
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            arr_51 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60))) < (4294967040U)));
                            arr_52 [i_11 - 3] [(unsigned short)3] [i_13] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)42300)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64535))) : (11867112238218541298ULL)));
                            arr_53 [i_11] [6ULL] [6ULL] [i_15] [0ULL] [i_13] [i_12] = ((/* implicit */unsigned long long int) ((unsigned int) arr_35 [i_11]));
                        }
                    } 
                } 
                var_29 = ((/* implicit */long long int) arr_42 [i_11] [8] [i_13] [8]);
                var_30 = ((/* implicit */short) ((unsigned long long int) arr_37 [i_11] [i_11 - 1]));
            }
            for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                arr_56 [i_11] [i_12] [i_17] = ((/* implicit */short) ((unsigned short) arr_37 [i_11] [i_11]));
                arr_57 [i_11 - 2] [i_11] [i_11] = ((/* implicit */long long int) var_4);
                var_31 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
            }
            arr_58 [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_47 [i_12]))));
            arr_59 [i_11 - 3] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_11 - 1])) ? (arr_50 [i_11] [22U] [i_11] [i_12] [i_12] [i_11 - 2] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            arr_60 [i_11 - 1] = ((((/* implicit */int) arr_54 [10U] [i_11 + 1] [i_11 - 1])) != (((/* implicit */int) arr_54 [i_11 - 1] [i_11 - 1] [i_11 - 3])));
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 12; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (unsigned char)134))));
                    var_33 = ((/* implicit */int) ((arr_66 [i_18] [i_18] [i_18]) ^ (((/* implicit */unsigned long long int) ((long long int) 990389176U)))));
                }
            } 
        } 
        arr_71 [(signed char)10] = ((/* implicit */_Bool) (+(var_6)));
    }
    var_34 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) var_7)))))))));
}
