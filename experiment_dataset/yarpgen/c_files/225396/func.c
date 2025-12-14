/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225396
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_2))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            arr_13 [i_0] [(unsigned short)12] [i_0] [i_0] [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)6478))))))));
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_4 + 1]))));
                            var_18 *= ((/* implicit */unsigned long long int) min((min(((-(arr_1 [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)46713))))))), (((/* implicit */long long int) var_10))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_0))));
                        }
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_20 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)0)))), ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_4))))))));
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_2] [i_5] = ((/* implicit */signed char) arr_3 [i_1] [i_1] [i_2]);
                        }
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (((((/* implicit */_Bool) (unsigned short)23487)) ? (((/* implicit */unsigned long long int) -1292523738430647340LL)) : (17325360067792342244ULL)))))));
                        arr_17 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((long long int) var_15)) | (((/* implicit */long long int) arr_6 [i_0 + 2] [i_1] [i_1] [i_1])))))));
                        var_22 -= min((((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) | (((var_1) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))))), (((/* implicit */long long int) ((int) arr_11 [i_3 - 1] [i_1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2]))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))));
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (unsigned char)0))));
                                arr_23 [i_0] [i_1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_1] = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) max(((unsigned short)7097), ((unsigned short)0)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        arr_27 [i_1] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((142741726856310414LL), (((/* implicit */long long int) (signed char)97))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_1] [i_8] [i_8 + 2] [i_8 - 1]))) : (((12904643018991207762ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 2] [i_8 - 2] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 2])) ? (arr_15 [i_0 + 2] [i_8 - 1] [i_0 + 2] [i_8] [i_8 - 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_8 - 1] [i_8 - 2]))))) ? (-4656866644230780523LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8 + 1] [i_0 - 2] [i_0 - 2]))))))));
                        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 2] [(signed char)13] [i_0 - 2] [i_8 - 2] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12)))) ? ((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */int) arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0])) + (33))) - (25))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 1069547520))))))));
                        arr_28 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((!(arr_4 [i_1]))) ? (((/* implicit */int) arr_0 [i_2])) : (((((/* implicit */int) arr_20 [i_8] [i_8 + 1] [i_1] [(unsigned char)11] [i_2] [i_1] [i_0])) & (((/* implicit */int) (signed char)63))))))) <= (max((var_13), (((/* implicit */long long int) ((signed char) arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_2] [i_2] [15ULL] [i_8 + 2])))))));
                    }
                    arr_29 [i_0] [i_1] |= ((/* implicit */unsigned short) 0ULL);
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (int i_11 = 1; i_11 < 14; i_11 += 1) 
                {
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [7ULL] [(unsigned short)10] [(unsigned char)0] [7ULL] [i_9] [(signed char)15]), (((/* implicit */unsigned long long int) (signed char)-126))))) ? (((/* implicit */int) max((var_3), (((/* implicit */short) arr_37 [i_0 - 1] [i_0 - 1] [i_9] [12] [i_11] [i_11]))))) : (((/* implicit */int) arr_21 [2ULL] [i_0] [10] [i_10] [i_10] [2ULL] [i_11]))))) ? (((unsigned long long int) (-(((/* implicit */int) arr_7 [i_10]))))) : ((((+(arr_15 [i_0 + 2] [i_9] [i_0] [i_0] [i_9] [(unsigned short)16]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [12U] [i_9] [i_9]), ((signed char)39)))))))));
                        var_27 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) arr_30 [i_0 + 2]))), (max((arr_30 [i_0 + 2]), (arr_30 [i_0 - 1])))));
                        arr_39 [i_0] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */long long int) arr_20 [i_0 - 1] [(signed char)5] [i_0 - 1] [i_11] [i_0 - 1] [(signed char)5] [2ULL]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_12 = 1; i_12 < 14; i_12 += 4) 
        {
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                {
                    var_28 -= (+(((unsigned long long int) arr_7 [i_0])));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 1) 
                        {
                            {
                                var_29 |= arr_46 [i_0] [i_0];
                                arr_51 [i_0 + 1] [i_12] [i_0] [6LL] [i_15] |= ((/* implicit */_Bool) max((((/* implicit */int) arr_11 [10U] [i_12 + 3] [10U] [i_0 - 1] [i_0 - 1] [i_12 + 3] [i_15 + 1])), (arr_6 [i_0 + 2] [i_0 + 2] [i_0] [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 3; i_17 < 15; i_17 += 1) 
                        {
                            {
                                var_30 += ((/* implicit */unsigned int) min(((short)-20796), (((short) ((((/* implicit */_Bool) (unsigned char)81)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))))))));
                                arr_58 [i_0] [(unsigned short)4] [i_0 + 2] [i_0 + 2] [(signed char)1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)118))))) : (((((/* implicit */_Bool) arr_25 [(signed char)16] [(signed char)16] [10ULL] [2U] [i_0])) ? (((/* implicit */unsigned long long int) 7846290083527385059LL)) : (var_8))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)3896))))) : (4294967285U))))));
                            }
                        } 
                    } 
                    var_31 += (~(((unsigned long long int) (signed char)48)));
                    arr_59 [i_12] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_47 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 2])) ? (var_14) : (((/* implicit */long long int) arr_47 [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2] [(_Bool)1])))), (((/* implicit */long long int) min((max((var_15), (arr_20 [i_0] [i_12] [i_12] [i_12] [i_12 + 2] [i_12] [i_12]))), (arr_26 [i_0 - 1] [i_12 - 1] [i_12 + 1]))))));
                }
            } 
        } 
        arr_60 [5LL] = ((/* implicit */short) var_10);
    }
    var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
}
