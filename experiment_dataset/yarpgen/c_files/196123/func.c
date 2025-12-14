/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196123
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_20 += ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)40)))), (min((((/* implicit */int) arr_3 [0U] [i_1])), (((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (var_5) : (((/* implicit */int) (unsigned char)14))))))));
            var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [4ULL]))) - (18446744073709551615ULL)))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */signed char) var_3);
                            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 3])), (arr_0 [i_0 + 3] [i_1 + 1])))), ((-(((unsigned long long int) var_13))))));
                            var_23 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)13)) * (((/* implicit */int) (unsigned char)243))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) + (1729791533U)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1])) ? (((max((((/* implicit */unsigned long long int) (signed char)-111)), (arr_2 [i_0] [(_Bool)1] [i_0]))) ^ (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_2])))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [(short)0] [5U] [i_1 + 1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            arr_16 [i_0 + 4] [i_1 + 1] [i_0 + 4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) > (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)13))))));
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20347))));
                            var_26 *= ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
                            var_27 *= var_12;
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-72))));
        }
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 8; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)113)) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (17169530430266501711ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 1] [(_Bool)1])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))));
                            var_31 ^= (unsigned short)6;
                            arr_26 [i_0] [2LL] [i_0 + 2] [i_0 + 2] [i_8] [i_0 + 2] [i_10] = ((/* implicit */unsigned short) ((arr_14 [(unsigned short)7] [i_10 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516)))));
                        }
                        arr_27 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)226))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (short)-21937)) : (((/* implicit */int) (unsigned short)65528))))) : (3U));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        var_32 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_11]))));
        var_33 = ((/* implicit */signed char) min((var_33), (arr_29 [i_11])));
    }
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) (unsigned char)67)))));
                            var_35 *= ((/* implicit */unsigned long long int) ((arr_30 [i_14]) + (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)239), (((/* implicit */unsigned char) (signed char)127))))))));
                        }
                    } 
                } 
                arr_42 [i_12] [i_13] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) 2147483647)) % (var_3)))));
                arr_43 [i_12] [(signed char)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_38 [i_13] [i_12])), (arr_33 [3ULL] [i_13] [i_12]))))));
                arr_44 [i_12] = ((/* implicit */signed char) var_14);
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) var_6))));
            }
        } 
    } 
}
