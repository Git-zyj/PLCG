/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25862
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_1))))) && (((/* implicit */_Bool) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_11 [i_1] = ((/* implicit */unsigned char) 777706919U);
                                var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(arr_4 [9U] [9U] [9U])))) - (min(((-(var_13))), (arr_9 [i_4] [i_4 + 1] [0U] [i_4] [i_4] [i_4 - 1] [i_4 - 3])))));
                                var_16 = ((((/* implicit */_Bool) arr_6 [i_0] [9U] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_7 [7ULL] [i_1] [i_1] [3U] [2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532)))))) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_4 - 4] [i_4] [i_0]))))) : (((/* implicit */int) var_10)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [(unsigned char)5] [i_1]))))) * (arr_4 [i_0] [i_1] [i_2 - 3])))) / (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_2 + 3])) ? ((~(arr_0 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [2LL])) && (((/* implicit */_Bool) arr_0 [i_2 - 1]))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))) && (((/* implicit */_Bool) (+(8321583490554768606LL))))));
        arr_12 [(unsigned char)8] [i_0] = 1572698249;
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))) ? ((-(24U))) : ((-(arr_4 [i_0] [i_0] [i_0 - 2])))))), (((long long int) arr_3 [i_0] [i_0 - 1]))));
    }
    for (long long int i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
    {
        arr_15 [9LL] = (((+(1572698246))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5] [i_5])) && (((/* implicit */_Bool) arr_6 [i_5] [i_5 - 2] [i_5]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)5))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                arr_28 [i_6] [i_8] [i_5] [i_5] [i_6] = ((long long int) ((arr_24 [i_8 + 1] [i_8 + 1] [i_8] [i_9]) + (((((/* implicit */_Bool) 1572698249)) ? (arr_18 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5])))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (1268738749) : (((/* implicit */int) (unsigned short)0)))) - (((/* implicit */int) var_10))))) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)5))))))));
                                var_23 ^= arr_6 [i_5] [i_6 + 4] [i_5];
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_7 + 1])) ? (arr_20 [i_5 + 1] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6]))))) ^ ((~(16U)))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((1572698249), (-1139870198))), (max((-2147483646), (-1572698247)))))) ? (4294967271U) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)245)))), (max((((/* implicit */int) var_2)), (-18)))))))))));
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_5] [8] [i_5] [i_5] [i_5])) ? (((((/* implicit */int) (unsigned short)12)) & (-1032040735))) : (((/* implicit */int) (unsigned char)0))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        arr_31 [i_10] [i_10] = ((/* implicit */unsigned int) ((int) (-(1572698246))));
        /* LoopSeq 1 */
        for (unsigned short i_11 = 2; i_11 < 13; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [6LL] [6LL] [i_11 - 2] [i_11] [i_11 - 2])) ? (-10) : (((/* implicit */int) ((unsigned short) var_4)))));
                        arr_42 [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_10] [i_11] [i_12])) / (-2147483642)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_35 [i_10] [2ULL] [i_12])))) : (arr_39 [i_11 - 1] [i_11 + 2] [i_12] [i_13] [2U])));
                    }
                } 
            } 
            arr_43 [i_10] = ((/* implicit */long long int) ((unsigned int) 20U));
        }
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(-1139870202)))))) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (unsigned short)10))))) : (((((/* implicit */unsigned long long int) 3)) + (max((var_7), (var_0)))))));
    var_29 = ((/* implicit */unsigned long long int) var_3);
}
