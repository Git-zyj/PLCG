/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23033
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
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) max(((signed char)0), (var_7)))), (min((((/* implicit */long long int) arr_2 [i_0])), (var_12))))) * (((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_2 [i_0]))), (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0 - 1])))))))));
        var_15 = ((/* implicit */unsigned char) min(((signed char)-1), (var_7)));
        arr_4 [i_0 - 1] = ((/* implicit */signed char) ((min((((unsigned int) (signed char)-13)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) (signed char)-2))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 - 2]), (((/* implicit */unsigned short) arr_2 [i_0 - 1]))))))));
        var_16 ^= ((/* implicit */_Bool) min((((unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (signed char)0)), (arr_0 [i_0 - 1])))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_9 [13LL] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)-1))))));
        arr_10 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1])) >> (((/* implicit */int) arr_7 [i_1]))))) ? ((~(((8529865060656888270ULL) | (((/* implicit */unsigned long long int) arr_8 [i_1])))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9916879013052663346ULL)) || (((/* implicit */_Bool) arr_6 [i_1])))) ? (((/* implicit */long long int) -1135051439)) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)106)))))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2]);
        arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned char)2])) ? (arr_8 [i_2]) : (((/* implicit */int) min((arr_11 [i_2]), (arr_1 [i_2]))))));
        var_17 = ((/* implicit */long long int) var_5);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((arr_19 [i_3] [2]), (max((arr_22 [i_4 + 1] [i_4] [i_4 + 1]), (arr_22 [i_4 + 2] [i_4] [i_4 + 2]))))))));
                    var_19 ^= ((/* implicit */int) (~(((3747381840U) | (((/* implicit */unsigned int) arr_18 [i_4 + 3]))))));
                }
            } 
        } 
        arr_23 [i_3] = ((/* implicit */short) arr_18 [i_3]);
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_7))));
            var_21 = ((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) ((_Bool) (unsigned char)8)))));
            var_22 = ((((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) arr_22 [22LL] [i_3] [i_6])) : (((/* implicit */int) arr_22 [i_3] [i_3] [i_3])))) | (((/* implicit */int) (!(((/* implicit */_Bool) 3662133718U))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 22; i_8 += 1) 
                {
                    {
                        arr_31 [i_8] [i_8] [i_6] [i_8] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3663210108242995953ULL)))) : (min((((/* implicit */unsigned long long int) max((arr_25 [i_8 + 1]), (((/* implicit */unsigned int) arr_27 [i_3] [17]))))), ((~(9916879013052663361ULL)))))));
                        var_23 = ((/* implicit */long long int) ((unsigned long long int) max((arr_29 [i_7]), (arr_29 [i_7]))));
                        arr_32 [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((7195832633620729247ULL), (((/* implicit */unsigned long long int) 547585456U))))) ? (max((9916879013052663345ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8529865060656888249ULL)) ? (((/* implicit */int) (signed char)-1)) : (arr_21 [6U] [(_Bool)1])))))) : (((/* implicit */unsigned long long int) arr_30 [i_6] [i_6] [i_8] [17] [i_6]))));
                    }
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            arr_35 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -422988349)) || (((/* implicit */_Bool) 219581669U))))) < (((/* implicit */int) ((short) 1756807851878958656LL)))))) >> (((arr_30 [4ULL] [i_3] [i_9] [i_3] [i_3]) - (1009301594392616663LL)))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (unsigned char i_11 = 3; i_11 < 22; i_11 += 3) 
                {
                    {
                        arr_40 [5LL] [(unsigned char)2] [5LL] [i_3] = ((/* implicit */_Bool) (unsigned char)0);
                        var_24 = ((/* implicit */unsigned char) 547585456U);
                    }
                } 
            } 
        }
    }
    var_25 = ((/* implicit */signed char) (-(max((((unsigned int) var_3)), (((/* implicit */unsigned int) var_9))))));
}
