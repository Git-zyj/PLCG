/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37228
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((/* implicit */signed char) ((-1449386734) >= (((/* implicit */int) ((unsigned short) arr_2 [i_0 - 1])))));
        arr_5 [i_0 + 1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9209185776160164404ULL)) ? (1449386745) : (((/* implicit */int) (short)32767))))), ((~(2358895009U))))) & (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-102)))))));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_3 [i_1 + 1] [i_1 + 1]))) ^ (min((((/* implicit */unsigned long long int) arr_2 [i_1 - 1])), (arr_3 [i_1 + 1] [i_1 + 1])))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_3 + 3]))))), (min((((((/* implicit */unsigned long long int) arr_1 [i_1 - 1])) - (var_2))), (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))) : (var_6)))))))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (signed char)-78)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)55483), (((/* implicit */unsigned short) (signed char)-3)))))))) || (((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 23; i_5 += 3) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_20 [i_4] [i_1] [i_1] [20ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4292004274U)) ? (1048512) : (((/* implicit */int) (_Bool)1))));
                        arr_21 [i_1] [i_1] [i_4] [i_1] &= var_6;
                    }
                } 
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned int) (_Bool)0)))));
        arr_24 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)55483)), (((/* implicit */unsigned long long int) 1449386745))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65530)) ? (-1769255847) : (((/* implicit */int) (_Bool)1))))))) : (3U)));
        arr_25 [i_7] [i_7] = ((/* implicit */_Bool) arr_23 [i_7] [i_7]);
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8]))) + (((max((var_9), (((/* implicit */unsigned long long int) (unsigned short)65535)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7)))))))));
        arr_29 [i_8] = ((/* implicit */_Bool) (+(arr_12 [i_8])));
    }
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((var_4) < (var_6)))) << (((((((/* implicit */int) var_0)) + (822068115))) - (822125812))))) << (((/* implicit */int) ((var_8) > (((/* implicit */long long int) var_5))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 4; i_9 < 15; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 2; i_11 < 15; i_11 += 4) 
            {
                {
                    arr_40 [(unsigned char)15] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)55513))));
                    arr_41 [(unsigned short)5] [i_9] [2ULL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1)) >= (282512900)));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_22 [i_9]))));
                    var_16 += arr_11 [i_10] [12] [i_10];
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            {
                arr_46 [i_13] [i_12] = ((/* implicit */unsigned int) (+(1769255864)));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) max((((var_2) << (((var_2) - (8071121593831065399ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
                    var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (-1449386727) : (129942496)))) : (min((var_9), (((/* implicit */unsigned long long int) (_Bool)1)))))) * (((/* implicit */unsigned long long int) (+(arr_22 [i_12]))))));
                }
                arr_49 [i_12] = ((/* implicit */_Bool) ((unsigned long long int) ((var_2) + (max((arr_3 [i_12] [i_12]), (((/* implicit */unsigned long long int) arr_16 [i_12] [i_12] [i_12])))))));
                arr_50 [i_13] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_12])), (max((((unsigned int) arr_0 [i_12])), (4274886221U)))));
            }
        } 
    } 
}
