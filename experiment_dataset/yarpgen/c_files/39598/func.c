/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39598
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_6))))));
        var_19 *= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_20 = ((/* implicit */int) arr_6 [3LL] [(_Bool)1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)62932)) | (((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((arr_4 [i_1]) - (arr_4 [i_1])));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [i_2] [i_1] [i_3] = ((/* implicit */long long int) var_11);
                    var_21 = ((/* implicit */int) arr_13 [i_1]);
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        arr_17 [12] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    arr_22 [(signed char)12] [i_5] [(signed char)12] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) arr_18 [i_4] [i_5] [(short)7])));
                    arr_23 [i_5] [(short)11] [i_6] = ((/* implicit */unsigned short) ((max((arr_16 [i_6]), (arr_16 [i_6]))) + (((/* implicit */long long int) (-(((/* implicit */int) ((-750274689) > (((/* implicit */int) arr_18 [i_4] [i_4] [i_6]))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_5] = ((/* implicit */unsigned long long int) 750274690);
                        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) arr_19 [i_4] [i_5] [i_5])), (((/* implicit */unsigned long long int) (!((_Bool)1))))))) ? (((((((/* implicit */int) arr_21 [(unsigned char)13] [i_5] [(_Bool)1] [i_5])) | (((/* implicit */int) arr_18 [i_4] [0LL] [0LL])))) >> (((max((var_13), (((/* implicit */long long int) (signed char)125)))) - (113LL))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_2)))))))));
                        arr_27 [i_7 - 1] [i_5] [i_5] [i_4] = arr_24 [i_7] [i_7] [i_6] [i_7 - 1];
                    }
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_4] [i_5] [i_6])), (2496583422U)));
                }
            } 
        } 
        arr_28 [i_4] = ((/* implicit */short) var_0);
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_8] [i_8] [18ULL])) ? (arr_2 [i_8] [i_8]) : (arr_2 [i_8] [i_8]))) % (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_30 [5U]) : (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8]))))))));
        arr_31 [i_8] = ((/* implicit */signed char) min(((+(arr_19 [i_8] [i_8] [i_8]))), (arr_19 [i_8] [i_8] [i_8])));
    }
    var_25 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    for (long long int i_9 = 3; i_9 < 11; i_9 += 4) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned short) arr_32 [i_9]);
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_17))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28672))) ^ (arr_29 [i_9 + 2])))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (arr_16 [i_9])))) ? (((/* implicit */int) min((arr_24 [i_9] [11LL] [4LL] [i_9 + 2]), (arr_21 [i_9 + 1] [(signed char)11] [i_9] [i_9 - 2])))) : (((/* implicit */int) arr_24 [i_9] [i_9 - 3] [i_9 - 3] [i_9])))) : (((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9]))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_15))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                {
                    arr_42 [i_9] [i_9] = ((/* implicit */short) arr_18 [i_9 + 3] [i_9 + 3] [i_9 + 3]);
                    arr_43 [4] [4] [(unsigned short)11] [(unsigned char)0] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) (~(((/* implicit */int) arr_34 [i_10]))))));
                    arr_44 [i_9] [i_10] [i_11] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_32 [i_9 - 1])), (min((var_12), (((/* implicit */unsigned long long int) (unsigned short)36863))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(short)16] [i_10] [i_11] [(short)16]))) : ((+(arr_36 [i_9 - 3] [i_9 - 1])))));
                    var_28 = ((/* implicit */int) (~(arr_19 [i_9 + 1] [i_9 + 1] [i_9 + 3])));
                    var_29 = ((/* implicit */_Bool) (-2147483647 - 1));
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (arr_24 [i_12] [i_12] [(unsigned char)18] [i_12]))))))) || (((/* implicit */_Bool) ((unsigned short) arr_39 [1ULL] [i_12] [(unsigned short)3] [1ULL]))))))));
        var_31 = ((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned char)128)), (max((((/* implicit */int) (signed char)-126)), (arr_39 [i_12] [6ULL] [i_12] [6ULL])))))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            for (int i_14 = 1; i_14 < 11; i_14 += 4) 
            {
                {
                    arr_56 [(unsigned char)0] [i_12] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) var_15)) : (arr_30 [i_14 + 1])))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_32 [(unsigned char)0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28672)) ? (0ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (-750274690)))) : (arr_1 [i_12] [i_12])))));
                    arr_57 [i_12] [i_12] [6LL] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (signed char)60))));
                }
            } 
        } 
    }
}
