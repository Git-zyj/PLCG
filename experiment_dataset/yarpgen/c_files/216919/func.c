/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216919
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) 6256698690609694251ULL)) ? (((/* implicit */unsigned long long int) 1906102150561212209LL)) : (0ULL))))));
        var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0]))));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 15246996039119464163ULL)) ? (-137253099) : (((/* implicit */int) (signed char)-1))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned long long int) arr_2 [i_1]);
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52542)) ? (1906102150561212230LL) : (((/* implicit */long long int) -1073741824))))) ? (-1906102150561212231LL) : (((((/* implicit */_Bool) -1)) ? (1906102150561212230LL) : (((/* implicit */long long int) arr_3 [(signed char)2]))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) min((arr_9 [i_2]), (arr_9 [i_2])))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (var_1)))));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) / (min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) arr_10 [i_2]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        arr_17 [2ULL] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_16 [8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) : (arr_4 [6] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4584681219846127964LL)) ? (((/* implicit */int) var_3)) : (arr_3 [i_4])));
                    var_18 = ((/* implicit */long long int) var_0);
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (var_1) : (arr_19 [i_4])));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_3])))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_3])) : (arr_3 [i_3]))) : (((/* implicit */int) arr_10 [i_3]))));
        /* LoopSeq 3 */
        for (unsigned short i_6 = 2; i_6 < 7; i_6 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) arr_8 [i_3]);
            var_23 = ((/* implicit */int) ((((6597069766656LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)97))))) % (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) arr_4 [8LL] [8LL]))))));
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_24 += ((/* implicit */unsigned long long int) -1);
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 1; i_8 < 6; i_8 += 2) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (1906102150561212209LL)));
                arr_29 [i_3] [i_3] [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8 + 2] [i_3] [i_8 + 1])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_5 [i_8 + 3]))));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            arr_33 [i_3] [0LL] [0LL] &= ((arr_20 [i_9] [i_9] [(unsigned short)8] [i_3]) % (arr_20 [7] [i_3] [i_3] [i_3]));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3])) ? (14737963387918341694ULL) : (((/* implicit */unsigned long long int) 17U))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        for (int i_11 = 2; i_11 < 22; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 22; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned long long int) (~(min((arr_39 [6LL] [i_14] [i_10]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) arr_35 [i_11 - 2])))))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) (signed char)97)) * (((/* implicit */int) (unsigned short)0)))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) ((long long int) arr_43 [11LL] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_12] [i_11 + 2]));
                }
            } 
        } 
    } 
    var_30 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-119))))) : (min((var_1), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) var_0))));
    var_31 = (~(min((((((/* implicit */_Bool) var_5)) ? (1906102150561212211LL) : (var_12))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_3))))))));
}
