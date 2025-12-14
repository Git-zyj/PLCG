/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199294
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) -386554263)) | (4181439976U)));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((_Bool) ((((/* implicit */_Bool) 4181439955U)) ? (-16385161) : (-16385171)))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) ? ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [0LL] [0LL])))))))));
        arr_3 [i_0] [5U] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((-(((((/* implicit */_Bool) -1481364766)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (113527312U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        var_15 = ((unsigned int) (unsigned char)112);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) max((-1481364766), (-1481364763)));
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 19ULL)) ? (16385160) : (((/* implicit */int) (signed char)100))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 22; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            var_17 &= ((/* implicit */signed char) ((arr_13 [i_2 + 1]) - (arr_13 [i_2 - 2])));
                            var_18 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                            arr_18 [i_1] [i_1] [i_2 - 1] [i_3] [i_4 - 1] [i_5 + 1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (short)2046)) ? (((/* implicit */unsigned int) -10)) : (var_7)));
                            arr_19 [i_1] [i_1] [i_1] [i_2 - 3] [i_3] [i_3] [9] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 16385160)) && (((/* implicit */_Bool) 2147483642)))))));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 ^= ((/* implicit */signed char) var_1);
                            var_20 &= ((/* implicit */long long int) ((unsigned int) (~(((arr_16 [i_6] [i_1] [3LL] [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (signed char)-47)))))));
                            var_21 ^= ((/* implicit */long long int) (unsigned char)41);
                            var_22 ^= ((/* implicit */unsigned char) 376406237);
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-1123274349), (-16385152)))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (16385188) : (-1765407500)))) / (arr_20 [i_1] [i_1] [i_3] [i_4] [i_7] [i_4] [i_7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [3U])) ? (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_24 [19U] [19U] [22LL] [i_4] [17LL] [i_4 - 2] = ((/* implicit */long long int) arr_5 [i_1]);
                            var_24 = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)148)) < (((/* implicit */int) (unsigned char)148)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_4 + 3] [i_2 - 2] [i_3] [i_4] [i_4 + 3])) + (((/* implicit */int) arr_23 [i_7] [i_4 + 1] [i_3] [i_2 - 1] [i_1]))))) : (7784686500525045533LL)));
                        }
                        arr_25 [(signed char)8] = ((/* implicit */unsigned short) (short)6978);
                        var_25 = ((/* implicit */long long int) (~(min((((int) (_Bool)0)), (arr_8 [i_1] [i_4 + 3])))));
                    }
                } 
            } 
            arr_26 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)-16)), (((long long int) -3779857969376991665LL))));
            var_26 &= ((/* implicit */signed char) ((unsigned char) (unsigned char)70));
            var_27 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-100)))));
            arr_27 [i_2 - 2] [i_1] [i_1] = ((/* implicit */int) (-(2097151ULL)));
        }
        /* vectorizable */
        for (unsigned char i_8 = 3; i_8 < 22; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)44)))))));
                            arr_39 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)44)) ? (((((/* implicit */_Bool) var_10)) ? (arr_21 [17LL]) : (((/* implicit */long long int) ((/* implicit */int) (short)127))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)64)) + (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))))));
                        }
                    } 
                } 
                arr_40 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16385161)) ? (((/* implicit */int) (unsigned char)183)) : (1005625572)));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    arr_43 [(unsigned short)14] [i_8] [i_8] [i_1] [i_8 + 1] &= ((/* implicit */int) var_3);
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 1632485291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4181439976U)));
                }
            }
            var_30 = ((/* implicit */short) (~(((/* implicit */int) (short)123))));
            var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8 - 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8 + 1] [i_8] [i_8] [i_8] [i_8]))) : (arr_11 [i_8 - 1] [i_8])));
            var_32 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 113527319U))));
            var_33 = ((/* implicit */signed char) 2868498019U);
        }
    }
    var_34 &= ((/* implicit */unsigned short) ((unsigned int) (unsigned char)0));
    var_35 = ((/* implicit */int) ((long long int) var_3));
}
