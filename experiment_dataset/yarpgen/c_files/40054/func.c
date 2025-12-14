/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40054
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
    var_13 ^= (((+(((/* implicit */int) (signed char)20)))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967282U))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_1] = ((((/* implicit */int) var_3)) % (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1] [11LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) 14U))))))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    arr_12 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((34U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20)))));
                    arr_13 [i_0] [i_3] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_3 [(unsigned short)6])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [2LL] [i_3])))))))));
                    var_15 -= ((/* implicit */unsigned char) arr_5 [(unsigned short)15] [i_3]);
                }
            } 
        } 
        arr_14 [i_0] = arr_1 [i_0];
    }
    for (signed char i_5 = 4; i_5 < 9; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 3; i_8 < 6; i_8 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [(short)0])) ? (((/* implicit */int) arr_9 [(short)14])) : (((/* implicit */int) var_9)))) + (((((/* implicit */int) arr_9 [(unsigned char)6])) + (((/* implicit */int) arr_9 [(unsigned char)14])))))))));
                        arr_25 [i_8] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(arr_2 [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_9 = 3; i_9 < 8; i_9 += 1) 
        {
            var_17 |= ((/* implicit */unsigned short) (((((_Bool)0) || (((/* implicit */_Bool) (signed char)-20)))) && (arr_20 [i_5] [i_5] [i_5])));
            arr_28 [i_9] = ((/* implicit */unsigned char) arr_27 [i_9]);
            arr_29 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_9])) ? (((/* implicit */long long int) var_2)) : (var_6)))) ? (((((/* implicit */_Bool) arr_10 [i_9] [i_9 - 3] [i_9])) ? (arr_6 [i_9]) : (((/* implicit */unsigned long long int) arr_16 [i_5] [i_5 - 4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (arr_16 [i_5] [i_5 - 2])))))));
            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_9])) ? (((/* implicit */int) arr_1 [i_5 - 3])) : ((+(((/* implicit */int) (unsigned short)17610))))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9 - 3] [i_5 + 1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_22 [i_9 + 1] [i_5 - 2])))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_11] [(_Bool)1] [i_11] [i_5 - 4] [i_10 - 2] [i_11]))));
                arr_37 [i_10] [1U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_10 - 1] [i_5 - 2])) ? (((/* implicit */int) var_9)) : (arr_16 [i_10 - 1] [i_5 - 2])));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_5 - 2] [i_5 - 2])) >= (((/* implicit */int) arr_36 [i_5 - 2] [i_5 - 2]))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_10] [i_5] [i_5 - 2] [i_10 - 2] [i_10 - 2] [i_11])) ? (((/* implicit */int) arr_24 [i_10] [i_10] [i_5 - 4] [i_10 + 1] [i_12] [i_13])) : (((/* implicit */int) arr_24 [i_10] [i_10] [i_5 - 2] [i_10 - 2] [1U] [i_10]))));
                            arr_43 [i_5] [i_5] [i_10] [i_12] [i_13] = ((/* implicit */short) ((arr_35 [i_10] [i_10 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_10])))));
                        }
                    } 
                } 
                arr_44 [i_11] &= ((((/* implicit */int) arr_8 [i_5 + 1] [i_5 - 1])) >= (((/* implicit */int) arr_8 [i_5 + 1] [i_5 - 1])));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_23 *= ((/* implicit */short) arr_0 [i_14]);
                /* LoopNest 2 */
                for (long long int i_15 = 3; i_15 < 7; i_15 += 3) 
                {
                    for (int i_16 = 2; i_16 < 8; i_16 += 1) 
                    {
                        {
                            arr_52 [7ULL] [(short)9] [i_14] [i_15] [i_10] [i_16] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (unsigned short)59150))))) ? (((arr_20 [0ULL] [i_10] [i_14]) ? (((/* implicit */int) arr_26 [i_14] [i_14])) : (((/* implicit */int) arr_45 [i_5] [i_10 - 2] [i_14] [(_Bool)1])))) : (((/* implicit */int) var_12))));
                            arr_53 [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_33 [(signed char)5] [i_15 - 2] [i_10])) * (((/* implicit */int) arr_51 [i_10] [i_10])))) : (((/* implicit */int) arr_5 [i_14] [i_5 - 3]))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_17 = 2; i_17 < 8; i_17 += 4) 
            {
                var_24 &= ((/* implicit */unsigned int) (+((+(arr_23 [i_5] [i_5] [i_10] [(unsigned short)0])))));
                var_25 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_23 [i_17] [i_17] [i_10] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_17]))) : (arr_23 [i_5 + 1] [(unsigned short)4] [i_17] [i_10])))));
                var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_17 + 1] [i_5 - 3] [i_17])) ? (((/* implicit */int) arr_3 [i_17 - 1])) : (arr_4 [i_5 - 2] [i_5 - 2] [i_17 + 1])));
                var_27 -= ((/* implicit */unsigned int) var_9);
            }
            for (signed char i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                arr_58 [(_Bool)1] [i_10] = ((/* implicit */unsigned char) var_3);
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 10; i_20 += 3) 
                    {
                        {
                            arr_65 [i_5 - 4] [i_10 + 1] [i_18] [i_10] = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_10] [i_10 + 1] [i_10]))));
                            arr_66 [2] [i_10] [2LL] [(unsigned char)0] [i_20] &= ((/* implicit */int) ((arr_56 [i_20] [i_5 - 2] [(unsigned short)9] [(short)6]) | (arr_56 [i_5] [i_5 - 4] [i_5 - 4] [i_19])));
                            var_28 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_55 [i_5] [i_10] [i_19])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_30 [(unsigned short)2])))) > (((/* implicit */int) var_12))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_21 = 1; i_21 < 9; i_21 += 1) 
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_19 [i_21]))))) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_33 [i_10] [i_5] [i_10])) - (49))))) : ((+(((/* implicit */int) arr_27 [i_10]))))));
                    arr_69 [(unsigned short)1] [i_10] [(unsigned short)3] [i_18] [(unsigned short)1] [i_18] = ((/* implicit */long long int) var_2);
                }
                arr_70 [i_5] [i_10] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5 + 1] [i_5 - 4]))) == (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            }
            arr_71 [i_5] [i_10 + 1] [(unsigned short)4] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_10 - 2] [i_10]))));
        }
    }
    var_30 = ((/* implicit */_Bool) var_12);
    var_31 &= ((/* implicit */unsigned short) var_7);
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_8)) ? (var_11) : (var_11)))))))))));
}
