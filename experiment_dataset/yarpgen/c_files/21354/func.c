/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21354
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
    var_20 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)19676))))));
                        arr_9 [i_0] [(unsigned char)0] [9] [i_2] [(signed char)7] [i_3] = ((/* implicit */signed char) 11208048276547040591ULL);
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_2 [(unsigned char)6] [i_4] [i_5])))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_8)))))));
                var_24 = ((/* implicit */int) ((unsigned int) arr_2 [(signed char)2] [i_4] [i_5 + 1]));
                arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (-3055190807725048097LL) : (-3055190807725048103LL)))) ? (((/* implicit */unsigned long long int) arr_12 [i_5] [(signed char)7] [i_4] [3LL])) : (((unsigned long long int) -3055190807725048073LL))));
            }
            arr_15 [9U] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((-3055190807725048097LL) * (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 3055190807725048096LL))))))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3055190807725048096LL)) && (((/* implicit */_Bool) var_5))));
            arr_16 [i_0] [i_4] = ((/* implicit */unsigned short) arr_2 [(short)2] [i_0] [(unsigned char)1]);
        }
        for (unsigned short i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((signed char) var_9));
            var_26 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_6 + 1] [5ULL] [i_0]))));
            arr_22 [i_0] [(unsigned short)3] = ((_Bool) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 3) 
            {
                for (unsigned short i_8 = 1; i_8 < 8; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned int) (~(((var_14) / (((/* implicit */unsigned long long int) 3055190807725048104LL))))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_19))));
                            arr_33 [(signed char)5] [i_8] [i_7] [i_7] [i_7] [6ULL] [(signed char)9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_8 - 1] [i_8] [i_8] [9] [i_8 - 1]))));
                            arr_34 [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((var_5) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_38 [i_6] [(signed char)2] = ((/* implicit */unsigned int) var_14);
                var_29 = ((/* implicit */unsigned short) ((arr_32 [(short)8] [i_0] [8LL] [i_6 + 1] [0U] [i_6] [i_6]) > (((long long int) var_14))));
                arr_39 [i_0] [(short)1] [i_10] [3U] = ((/* implicit */short) arr_29 [i_0] [i_0] [(short)8] [(unsigned short)9] [(signed char)8] [(_Bool)1]);
                arr_40 [7ULL] [(short)4] [6U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned long long int) var_7))))) ? ((+(arr_8 [(_Bool)1]))) : (((/* implicit */int) ((_Bool) 3055190807725048123LL)))));
            }
        }
        for (unsigned short i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 1; i_13 < 6; i_13 += 3) 
                {
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        {
                            arr_52 [2ULL] [i_11] [i_13] = ((/* implicit */short) arr_23 [i_11]);
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_13 + 1] [(signed char)2] [i_12]))) : (var_19)));
                            arr_53 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_13 + 1] [i_11 + 1])) ? (var_18) : (((/* implicit */unsigned long long int) 3055190807725048096LL))));
                        }
                    } 
                } 
                var_31 -= ((/* implicit */int) arr_11 [i_0]);
                arr_54 [(_Bool)1] [i_0] [i_11] [(signed char)4] = ((/* implicit */signed char) ((_Bool) var_2));
                arr_55 [i_11] [i_11] [(_Bool)1] = ((/* implicit */unsigned int) (~((~(arr_23 [i_11])))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    for (signed char i_17 = 3; i_17 < 9; i_17 += 3) 
                    {
                        {
                            arr_64 [i_11] [i_11] [i_15] [i_16] [3U] [i_11] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3055190807725048096LL)) ? (-3055190807725048095LL) : (-3055190807725048088LL))) % (((/* implicit */long long int) var_7))));
                            arr_65 [i_11] = ((/* implicit */_Bool) ((arr_43 [0U] [i_17 + 1]) + (arr_43 [i_0] [i_15])));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((long long int) ((signed char) var_14))))));
                            var_33 -= ((/* implicit */long long int) ((short) var_8));
                            arr_66 [i_0] [i_11] [i_15] [i_16] [i_11] [(short)3] = ((/* implicit */short) ((((/* implicit */int) arr_17 [1] [i_11 - 1])) != (((/* implicit */int) var_16))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((long long int) (~(var_18)))))));
                arr_67 [i_11] = ((/* implicit */short) (~(((/* implicit */int) arr_25 [i_11]))));
            }
            var_35 = ((/* implicit */unsigned long long int) ((unsigned int) ((var_5) | (arr_59 [i_0] [4ULL] [(unsigned short)8]))));
        }
        for (unsigned short i_18 = 1; i_18 < 9; i_18 += 1) /* same iter space */
        {
            arr_72 [(unsigned char)0] [(unsigned short)9] [i_18] = ((/* implicit */unsigned int) (~(-3055190807725048100LL)));
            arr_73 [i_18] [(unsigned short)2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -3055190807725048097LL)) ? (arr_62 [i_18] [i_18 + 1] [(unsigned short)4] [i_18] [i_18 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (arr_70 [i_18] [1LL] [(signed char)8]))))));
        }
        arr_74 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3055190807725048102LL)) ? (var_9) : (((/* implicit */long long int) arr_46 [i_0]))));
    }
}
