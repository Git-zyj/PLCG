/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44637
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
    var_17 = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 9331232511760217231ULL)) || (((/* implicit */_Bool) var_7))))), (((long long int) var_4)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [(_Bool)1] [i_3] = ((/* implicit */_Bool) max(((unsigned char)215), (((/* implicit */unsigned char) (_Bool)1))));
                        var_18 = ((max((((((/* implicit */_Bool) (short)10186)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_2 [i_3] [i_2])))) != (((/* implicit */int) (unsigned short)45138)));
                        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_5) >> (((unsigned long long int) arr_4 [i_0] [i_0])))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0] [i_3]);
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)19)) > (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_8)))))))) * (((((/* implicit */int) arr_9 [i_0] [i_0] [2ULL] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_13 [i_0] = ((/* implicit */long long int) (signed char)-50);
    }
    for (short i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        var_20 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_15 [i_4] [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((int) 2457342918U)) : (((/* implicit */int) arr_14 [i_4]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15981))))) ? (arr_15 [i_4] [(signed char)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_16 [i_4])), ((short)-15981))))))));
        var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) (short)-15985)) : (((/* implicit */int) (signed char)58))));
    }
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        arr_20 [6ULL] = ((/* implicit */unsigned long long int) ((unsigned short) var_13));
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned int) var_5)) : (arr_18 [i_5]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))))))));
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_32 [i_5] [i_6] [i_7] [(unsigned short)8] = ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_25 [i_5] [i_6] [i_7] [i_8]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) min((var_11), (((/* implicit */signed char) (_Bool)1))))) : (arr_31 [i_9] [i_7] [(_Bool)1] [i_8] [i_9])))) <= (((((/* implicit */_Bool) (signed char)-27)) ? (arr_21 [i_7]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [4]))) % (var_12)))))));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_9]))));
                                var_24 = ((/* implicit */long long int) min((var_24), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [1LL] [i_6] [i_6] [i_7] [i_6] [i_9])) ? (arr_24 [i_6] [i_6] [i_8]) : (var_0)))) ? (arr_21 [i_5]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))))), (((/* implicit */long long int) arr_23 [i_5] [i_6 - 2] [i_7]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) var_16);
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */signed char) var_13)), (arr_26 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]))))))) ? (var_10) : (((/* implicit */unsigned int) arr_31 [i_5] [i_6 - 2] [i_5] [i_7] [i_7]))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 4) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_38 [i_5] [i_6] [i_7] [i_10] [i_11] [(signed char)13] = ((/* implicit */unsigned short) arr_29 [4ULL] [i_6] [i_7] [1LL] [i_7] [(short)8]);
                                arr_39 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */long long int) arr_33 [i_6 - 1] [1ULL] [18LL] [i_10 - 1]);
                                arr_40 [(unsigned char)17] [i_10 + 1] [i_6] [i_7] [i_6 - 1] [i_6] [i_5] = ((/* implicit */unsigned char) (+(((2155173069729074297LL) | (((/* implicit */long long int) arr_30 [i_10 - 1] [i_6] [i_6 - 2] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_41 [16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (var_14) : (((/* implicit */unsigned long long int) ((arr_36 [i_5]) / (((/* implicit */long long int) max((arr_29 [6ULL] [3LL] [i_5] [i_5] [3LL] [(unsigned short)1]), (((/* implicit */unsigned int) var_13))))))))));
    }
}
