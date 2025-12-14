/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225548
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
    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)51235), (((/* implicit */unsigned short) (short)32751))))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((unsigned short) (unsigned short)4080)), (((/* implicit */unsigned short) var_10)))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_1)))), (((var_11) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56)))))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)248)) && (((/* implicit */_Bool) var_1))))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_10 [(unsigned short)3] [i_0] [0LL] [i_2] [i_3]))));
                        var_18 = ((/* implicit */unsigned short) 31ULL);
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14285)) ? (((long long int) max((((/* implicit */long long int) arr_5 [i_1])), (8793945538560LL)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) (unsigned char)122)) - (95)))))))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [5ULL] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_9 [i_0 + 1] [i_0] [i_0 - 1] [i_1] [i_1 - 4]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-30)))))), ((+(arr_9 [i_0 + 1] [i_0] [i_0 + 2] [i_1] [i_1 - 4])))));
                        arr_16 [i_0] [i_0 + 2] [8ULL] [i_0 + 2] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */signed char) arr_6 [i_0])), (min(((signed char)29), (((/* implicit */signed char) (_Bool)1))))));
                        var_21 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [6ULL]);
                    }
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_1 + 1] [i_1] [i_2] [15ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [4LL])) && (((/* implicit */_Bool) arr_12 [(unsigned short)4] [i_2] [(_Bool)1] [i_0])))) ? (((((/* implicit */int) arr_6 [i_0])) | (((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned char)1] [i_5 + 1])))) : ((+(((/* implicit */int) (_Bool)1)))))))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((signed char) ((((/* implicit */_Bool) (unsigned short)51235)) ? (-3LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)32751)) ? (arr_5 [i_0]) : (((/* implicit */int) var_10))))));
                        arr_22 [i_0] [i_0] [20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [22U] [i_1] [2U] [2U])) ? (((/* implicit */int) (unsigned short)43617)) : (((/* implicit */int) arr_0 [i_6]))))) ? ((+(((/* implicit */int) arr_11 [(unsigned short)10] [i_1] [i_0])))) : (((/* implicit */int) arr_11 [i_0 - 1] [i_1 - 2] [i_0]))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_21 [i_0] [i_0] [i_1 - 1] [i_2] [(unsigned short)17] [(signed char)17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0]))));
                                arr_27 [i_2] [i_2] [i_2] [i_7] [i_8] &= ((/* implicit */signed char) arr_4 [i_8] [11U]);
                                var_26 = ((((/* implicit */_Bool) min((arr_21 [i_0 + 4] [i_1 - 2] [i_1 - 3] [i_1 + 4] [i_7 - 1] [i_7 - 1]), (arr_21 [i_0 - 1] [i_1 - 2] [i_7] [(short)12] [i_7 - 1] [i_7 - 1])))) && (((_Bool) (_Bool)0)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) arr_2 [i_0 + 4])) : (((/* implicit */int) (unsigned char)151)))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? (max((arr_20 [i_1 - 3] [i_0]), (arr_20 [i_1 - 3] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1] [i_2] [i_9] [i_10])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned short)18)))))))))));
                                arr_32 [i_0] [i_0] [9U] [(signed char)0] [(signed char)0] = ((/* implicit */short) min((((unsigned long long int) ((short) arr_29 [(signed char)22] [i_1] [i_9] [i_9]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)7])) ? (((/* implicit */int) (short)16320)) : (((/* implicit */int) arr_8 [i_0] [i_9] [i_0]))))))))));
                                arr_33 [i_10] [i_9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 4] [i_1 - 1])) ? (2656894674593985691ULL) : (((unsigned long long int) (unsigned short)65535))))) ? (arr_5 [i_0]) : (((/* implicit */int) (unsigned short)21916))));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)16))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_0] [i_0 - 1] [i_0]), (arr_11 [i_0 + 4] [i_0 + 4] [i_0]))))) : (((arr_26 [6LL] [i_0] [i_0 + 1] [13LL] [i_1 + 4] [i_1 - 2]) - (arr_26 [i_0 + 1] [i_0] [i_0 + 1] [i_1] [i_1 - 2] [i_1 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
