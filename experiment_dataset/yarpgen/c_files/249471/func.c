/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249471
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))))))));
            var_12 = ((/* implicit */unsigned int) max((var_12), ((~(((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (1340627732U)))))));
            var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) 1340627732U)) ? (2954339563U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (arr_4 [i_0 + 1] [i_1 - 2] [i_0 + 1])))))));
            arr_6 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2642523109U))));
            arr_7 [i_0 + 1] [(_Bool)0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1])) ? (1340627733U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4721))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (1221438982))))));
        }
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) arr_2 [i_0] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])) ? (var_0) : (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [9U])) & (var_4)))));
        arr_8 [(unsigned short)8] = ((/* implicit */unsigned short) (((+(arr_4 [i_0] [i_0 + 1] [i_0]))) >= ((+(((/* implicit */int) (unsigned short)24294))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_2] [i_3] [i_4 - 1] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_17 [i_0 + 1] [0] [(unsigned short)0] [i_4 + 1] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_15 -= ((/* implicit */signed char) ((((((var_5) + (2147483647))) >> (((/* implicit */int) var_10)))) ^ (((((/* implicit */int) (unsigned short)24294)) >> (((((/* implicit */int) (unsigned short)11700)) - (11697)))))));
                            arr_20 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [(_Bool)1] [i_4 + 1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(unsigned char)7] [i_3]))) : (1915396228U)))) ? (((/* implicit */unsigned int) ((((-129718697) + (2147483647))) >> (((/* implicit */int) arr_9 [i_0]))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_4 - 1])) ? (((/* implicit */unsigned int) -1221438982)) : (var_4)))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_0 + 1] [i_4 + 1] [i_3] [(unsigned char)8] [i_2] [i_2] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_2] [3] [i_3])) ? (((/* implicit */int) arr_5 [(short)1] [(short)1])) : (((/* implicit */int) arr_5 [i_0] [i_4 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)13)) <= (((/* implicit */int) (_Bool)1))))) : ((+(((/* implicit */int) arr_16 [i_3] [i_3]))))));
                            arr_24 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_4 + 1] [7] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_1))))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)55)))) ^ (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))));
                            var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1030796057U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2379571074U)))));
                            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_2] [i_0 + 1]))))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) arr_18 [i_0 + 1] [i_2] [i_3] [i_4] [i_7] [i_4])))) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)31)))))));
                        }
                        arr_27 [i_0] [i_0] [(signed char)4] [i_4 - 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_4])) ^ (((/* implicit */int) arr_15 [i_4 + 1] [i_3] [i_0] [i_3] [i_2] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_4] [(_Bool)1]))))) : ((~(var_4)))));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((~(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (unsigned char)149))))));
                            arr_30 [6LL] [i_8] [i_3] [i_4 - 1] [i_8] = ((/* implicit */short) (((~(-610468597))) >= (((/* implicit */int) ((2954339564U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))));
                            var_20 = ((((/* implicit */int) (!(var_6)))) >= (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_2 [i_4] [i_4 + 1])))));
                            arr_31 [i_8] [i_8] [1LL] [i_4 - 1] [i_4] [7ULL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (var_0)))) ? (((((/* implicit */_Bool) arr_28 [i_2] [5] [i_4] [i_8])) ? (arr_14 [i_8 + 1] [i_4 + 1] [i_0] [i_0]) : (((/* implicit */unsigned int) 1221438982)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)178)) - (((/* implicit */int) (unsigned char)253))))));
                            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_25 [i_2] [i_8 + 1] [5U] [i_3] [i_2] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_0])) : (var_5)))))));
                        }
                        for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            var_22 *= ((/* implicit */signed char) ((((99720289U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9 - 1]))))) ? (((((/* implicit */_Bool) 1805569623)) ? (var_5) : (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (unsigned short)11782))))));
                            arr_34 [i_2] [i_2] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1224463512)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [3U]))))) : (((((/* implicit */int) var_9)) >> (((var_3) - (17360484327772937532ULL)))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_10] [i_10] [2LL] [i_11] [i_11] [i_11])) >> (((((/* implicit */int) var_8)) - (215))))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (signed char)81))))));
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_47 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1391007151U)) ? (((/* implicit */unsigned int) -1221438982)) : (104754696U)));
                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)13)) ^ (((/* implicit */int) var_7)))) | ((~(((/* implicit */int) (signed char)-33))))));
                arr_48 [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_2)) >> (((/* implicit */int) var_10))))));
                arr_49 [(unsigned short)10] [i_11] [i_12] [i_10 + 1] = ((/* implicit */_Bool) (((+(4500457880642584215LL))) ^ (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
            }
        }
        arr_50 [i_10 + 1] = ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)35)) <= (((/* implicit */int) (unsigned char)199)))) ? ((~(arr_17 [(unsigned char)1] [i_10 + 1] [i_10] [i_10] [5ULL]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_10] [i_10] [i_10])) ^ (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-4500457880642584231LL) <= (((/* implicit */long long int) 4195247007U)))))) : (((((/* implicit */_Bool) (~(arr_4 [i_10 + 1] [i_10 + 1] [i_10])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4195247007U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)254))))))));
    }
    var_25 = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) var_1))))))));
}
