/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31204
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24931))) <= (arr_0 [i_0])))), (((signed char) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)19416)) ? (arr_0 [(short)4]) : (arr_0 [i_0])));
                    var_15 = ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((signed char) var_0))))) : (min((3794530752U), (3794530752U))));
                    var_16 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_4 [i_2] [i_2 + 3] [i_2 - 1])) == (arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 2])))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_2 [i_2 + 2]))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_7 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (arr_7 [i_0] [(_Bool)1] [i_1] [i_2 + 3])))));
                    var_17 = ((/* implicit */unsigned char) ((arr_7 [10LL] [i_0] [i_2 - 1] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(signed char)3] [i_0] [(signed char)3])))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) arr_4 [i_0] [i_0] [i_0])))))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (unsigned char)67))))), (((long long int) var_8))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [0U]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-24923)) && (((/* implicit */_Bool) arr_0 [i_0]))))) == (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) ((unsigned long long int) 2087691836))) ? (((/* implicit */int) (short)24931)) : (-2087691814)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_3] [(unsigned char)12] [i_5] [i_6] [i_5])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) ((((/* implicit */int) arr_15 [5U] [i_6] [i_5])) == (((/* implicit */int) arr_11 [i_7 - 1]))))))))));
                                var_21 = ((((((/* implicit */_Bool) min((4213848869062219326ULL), (((/* implicit */unsigned long long int) 3794530752U))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)69))))) >> (((((/* implicit */int) arr_16 [i_7 + 1] [i_6] [(signed char)21] [i_3])) - (48))));
                                var_22 = ((/* implicit */unsigned int) min((((max((((/* implicit */int) var_8)), (arr_22 [i_3] [i_3] [i_5] [i_3] [i_5]))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-24931)) : (((/* implicit */int) arr_19 [i_3])))))), (((/* implicit */int) ((((unsigned long long int) 2087691832)) == (((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                                var_23 ^= ((/* implicit */short) arr_12 [i_7] [i_3]);
                            }
                        } 
                    } 
                    arr_23 [i_5] [i_5] [i_4] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_3]))))), (((short) var_12)))))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_3] [i_4] [i_5]))) ? ((+(((/* implicit */int) arr_15 [i_5] [i_4] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -302144481)))))));
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                {
                    var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_25 [4] [i_4] [i_8])) ? (((/* implicit */unsigned long long int) arr_21 [i_8])) : (14232895204647332290ULL))), (((/* implicit */unsigned long long int) var_10))))) ? (((unsigned long long int) ((var_5) ? (((/* implicit */int) (short)-24921)) : (((/* implicit */int) arr_20 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) var_9))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)3530)) ? (((/* implicit */int) arr_20 [i_3] [i_4])) : (var_0))) : ((~(((/* implicit */int) arr_19 [i_3]))))))) / (max((((-7869853366021953063LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (unsigned char)138))))));
                    arr_27 [i_3] [i_4] [3U] [i_8] = ((/* implicit */unsigned long long int) arr_10 [i_3]);
                }
                for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    arr_30 [i_9] = ((/* implicit */short) min((14232895204647332290ULL), (((/* implicit */unsigned long long int) -4134563896055729135LL))));
                    arr_31 [i_3] [i_3] = ((/* implicit */signed char) arr_11 [i_9]);
                    arr_32 [i_3] [i_4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (2087691812)))) ? (((((/* implicit */int) arr_20 [0U] [0U])) | (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) arr_16 [i_3] [i_4] [i_9] [i_9]))))))) ? (max((((/* implicit */unsigned int) arr_29 [i_3] [i_4] [i_9])), (min((((/* implicit */unsigned int) var_10)), (3683462051U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_27 = ((/* implicit */unsigned long long int) arr_14 [i_3] [i_4] [i_4]);
                    var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2204563802U)) ? (((/* implicit */int) arr_26 [i_3] [i_4] [i_3])) : (arr_29 [i_3] [i_3] [i_9])))) ? (min((var_6), (((/* implicit */int) var_7)))) : (((/* implicit */int) min(((short)-19416), (((/* implicit */short) (unsigned char)81))))))) : (((/* implicit */int) min((((/* implicit */short) arr_12 [i_3] [i_9])), (arr_11 [i_3]))))));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (short i_11 = 4; i_11 < 20; i_11 += 3) 
                    {
                        for (int i_12 = 4; i_12 < 21; i_12 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4134563896055729144LL), (((/* implicit */long long int) arr_11 [i_11 - 4]))))) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) var_6)), (arr_28 [i_3] [i_10] [i_3] [i_12 - 4])))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                                arr_40 [i_3] [i_3] [i_3] [(unsigned char)11] [i_11] [i_12 - 2] = ((/* implicit */long long int) var_3);
                                var_30 *= ((/* implicit */short) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_24 [i_12 - 2] [i_12] [i_12 - 2] [i_11 + 3])) ? (arr_24 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_11 - 3]) : (arr_24 [i_12 - 1] [i_12] [i_12 + 2] [i_11 - 3])))));
                            }
                        } 
                    } 
                } 
                arr_41 [i_3] = ((/* implicit */short) max((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_13))))), (((-4134563896055729147LL) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4] [i_3] [i_3])))))));
            }
        } 
    } 
}
