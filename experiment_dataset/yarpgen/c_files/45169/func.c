/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45169
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [(signed char)12] [(signed char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned short)13935))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_1] [i_0])) ? (4494291538874467271ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) : (63LL)))));
                    var_11 = ((long long int) ((((/* implicit */int) (unsigned short)65529)) ^ (((/* implicit */int) (unsigned char)247))));
                }
            } 
        } 
        var_12 ^= ((/* implicit */unsigned short) (+(((long long int) arr_1 [i_0]))));
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
        var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)127))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
        {
            var_14 = ((/* implicit */int) (+(3217696388U)));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                arr_18 [i_4 - 1] [i_4 + 1] [(unsigned char)14] [(unsigned char)14] = ((/* implicit */unsigned char) (unsigned short)65531);
                var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) * (arr_11 [i_4]))));
                var_16 = ((/* implicit */long long int) (signed char)70);
            }
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_4 + 4])) <= (arr_4 [i_4 + 2] [i_4 + 3] [i_7 + 1])));
                    arr_25 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)247)) << (((-1LL) + (22LL)))));
                }
                for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)120)) && (((/* implicit */_Bool) 1183765027216549429ULL))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_4 + 3] [i_4 - 2] [i_4 - 2] [i_4 + 2])) ? (((/* implicit */int) arr_5 [i_3] [i_4] [i_3] [i_4 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-73)))))));
                }
                var_20 *= ((unsigned int) (signed char)70);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34119))) - (((long long int) (unsigned char)247))));
            }
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-37)) * (((/* implicit */int) (signed char)-73))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_24 [i_4 + 1] [i_9 + 2] [i_9] [i_3])) + (24)))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    for (unsigned int i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((signed char) arr_6 [i_10]));
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_10 - 1] [i_10] [i_11 - 2])) || (((/* implicit */_Bool) arr_7 [i_4 - 2] [i_10 + 2] [i_4 - 2] [i_11 + 2]))));
                        }
                    } 
                } 
                arr_39 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_5);
            }
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_3]))) ? (((((/* implicit */int) arr_28 [i_3] [i_3])) >> (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) arr_33 [i_4] [i_4 + 3] [i_4 - 2] [i_4 + 4]))));
        }
        for (unsigned short i_12 = 1; i_12 < 16; i_12 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_12 + 2] [i_12 + 1] [15] [i_3] [i_3] [(unsigned char)4])) != (((/* implicit */int) (unsigned char)64))));
            var_28 = ((/* implicit */long long int) var_5);
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    {
                        var_29 |= ((/* implicit */int) (((+(var_6))) & (((/* implicit */long long int) ((((arr_43 [i_13] [i_13] [i_13] [i_13]) + (2147483647))) << (((arr_1 [i_3]) - (147895492U))))))));
                        arr_49 [i_3] [i_12] [i_13] [i_14] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 2899664901U)) * (0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-23))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (38475964) : (var_2)))) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_42 [i_3])))))));
        }
        for (unsigned short i_15 = 1; i_15 < 16; i_15 += 2) /* same iter space */
        {
            var_31 -= ((/* implicit */unsigned char) ((arr_12 [i_15 - 1]) >= (((/* implicit */unsigned long long int) arr_38 [i_3] [i_3] [i_3] [i_15 - 1] [i_15 + 2]))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (unsigned short)55727))) * (((/* implicit */int) arr_36 [i_15] [7] [i_15] [i_15 + 1] [i_15 - 1] [i_15 + 1])))))));
        }
        arr_53 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)30))))));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_1)));
        arr_54 [i_3] [i_3] &= ((/* implicit */unsigned short) (unsigned char)255);
    }
}
