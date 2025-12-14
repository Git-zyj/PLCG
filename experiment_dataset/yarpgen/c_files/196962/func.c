/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196962
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) var_0);
                            var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (short)30182))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))));
            }
            /* LoopSeq 1 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)-115))))));
                var_21 = ((/* implicit */unsigned char) ((var_14) ? (2147483647) : (((/* implicit */int) (unsigned short)28404))));
            }
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) var_0);
            /* LoopSeq 1 */
            for (int i_7 = 3; i_7 < 8; i_7 += 2) 
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_0] [(signed char)4] [(signed char)4]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (711333318U)));
                arr_25 [i_0] [3LL] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32548)) ? (((/* implicit */int) arr_23 [i_0] [i_0])) : (((/* implicit */int) (short)32548))))) % (-2704421887999257379LL)));
                var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_12)) ? (2147483647) : (var_9)))));
            }
            arr_26 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 1; i_9 < 10; i_9 += 3) 
            {
                {
                    arr_32 [i_0] [i_0] [i_9] = ((/* implicit */long long int) (signed char)127);
                    /* LoopSeq 1 */
                    for (signed char i_10 = 1; i_10 < 8; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) 711333318U)) ? (arr_30 [i_8 - 1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_8] [(signed char)9])) != (((/* implicit */int) var_3)))))))))));
                        arr_35 [i_0] [i_0] [i_9 + 1] [i_10 - 1] = ((/* implicit */int) var_13);
                    }
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            {
                                arr_40 [4] [i_0] [i_9] [4] = ((/* implicit */signed char) arr_7 [2LL] [i_9] [i_11] [10U]);
                                arr_41 [i_0] = ((int) (+(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_42 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)46755)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28404))) : (18ULL)));
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_46 [i_0] = ((/* implicit */signed char) (-(arr_31 [5ULL] [i_0] [i_13])));
                        var_26 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (-2147483633) : (((/* implicit */int) var_1)))));
                    }
                    for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((arr_39 [(unsigned char)5] [i_8] [(short)10] [i_9 - 1] [(short)1]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_28 += ((/* implicit */unsigned short) (short)32767);
                        arr_49 [i_0] [i_14] [i_0] [i_14] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_8] [i_8 - 1] [i_9 + 1] [i_9] [i_8 - 1])) ? (var_0) : (((/* implicit */int) arr_9 [i_8] [i_8 - 1] [i_9 + 1] [i_9] [i_9 + 1]))));
                        var_29 += ((/* implicit */signed char) var_1);
                    }
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        arr_52 [i_8] [i_8] [i_8] [i_0] [1U] = ((/* implicit */long long int) (short)-32532);
                        var_30 = ((/* implicit */short) arr_7 [i_8 - 1] [i_8] [i_8 - 1] [i_8]);
                        var_31 = ((/* implicit */short) ((int) ((var_10) << (((((/* implicit */int) (unsigned char)250)) - (225))))));
                    }
                }
            } 
        } 
    }
    for (short i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
    {
        arr_55 [i_16] [i_16] = ((/* implicit */short) arr_34 [i_16] [6] [i_16] [i_16] [9]);
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                for (signed char i_19 = 4; i_19 < 9; i_19 += 2) 
                {
                    {
                        var_32 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) var_5))))), ((~(((/* implicit */int) (unsigned short)18789))))));
                        arr_64 [i_16] [(short)10] [i_18] [i_18] = ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2704421887999257379LL)) ? (((/* implicit */long long int) var_10)) : (var_16)))) * (((((/* implicit */_Bool) 4294967295U)) ? (0ULL) : (((/* implicit */unsigned long long int) -2147483647))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_16] [1LL] [i_16]))))), (max((arr_30 [i_16] [(signed char)4]), (arr_30 [i_16] [i_16]))))))));
    }
    for (short i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((int) var_0)))));
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) 2147483647)) : (18ULL))))));
    }
    /* vectorizable */
    for (short i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
    {
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_0))));
        var_37 = ((/* implicit */signed char) ((_Bool) var_2));
    }
    var_38 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_22 = 2; i_22 < 10; i_22 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */short) ((int) 3938868120U));
        var_40 |= ((/* implicit */unsigned int) ((short) arr_71 [6LL]));
        var_41 = (short)32767;
    }
    /* vectorizable */
    for (short i_23 = 2; i_23 < 10; i_23 += 3) /* same iter space */
    {
        var_42 |= (((+(((/* implicit */int) var_12)))) << (((((/* implicit */int) arr_70 [i_23 - 2] [i_23 + 1])) - (60))));
        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3343979718U)) ? (((/* implicit */int) arr_72 [i_23 - 1])) : (((/* implicit */int) arr_72 [i_23 - 2])))))));
    }
}
