/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191143
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_5 [i_3] [i_1] [i_1])), (var_10))))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [9LL] [9LL] [9LL] = 5822052369174659658LL;
                                arr_14 [12U] [(_Bool)1] [(unsigned char)0] [10ULL] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_1] [3] [i_4])))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2] [9U]))))) | (max((((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (unsigned short)31744))))));
                                arr_15 [(short)4] [(short)4] [i_2] [(unsigned char)12] [(short)4] [(unsigned char)12] [(short)4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_0] [(unsigned char)10] [i_0] [i_3] [(unsigned char)10] [(_Bool)1] [12ULL])) | (arr_8 [(signed char)12] [13ULL] [(unsigned short)12] [(_Bool)1])))) ? ((-(2061944205801132543ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1387350331)) : (-6687628329970853992LL)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                arr_16 [(short)1] [i_3] [(signed char)7] [(unsigned short)4] [i_0] [(unsigned short)4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [(_Bool)1])))))))) >> (((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) -1782105376544269836LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_8 [i_0] [i_1] [i_3] [5U]))) : (((/* implicit */unsigned long long int) var_2))))));
                            }
                            for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                            {
                                arr_19 [(short)4] [4ULL] [i_2] [(signed char)5] [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [(short)7] [i_3]);
                                arr_20 [(unsigned short)13] [(_Bool)1] [(unsigned short)13] [11U] [(unsigned short)13] [3U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [1U]))))) | ((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [(signed char)5] [(signed char)5] [8])))))))) ? (((((/* implicit */_Bool) max((arr_17 [i_0] [(unsigned short)11] [i_0] [(unsigned short)11] [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)127))))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) (_Bool)1))))) : ((+(6237343875181598818ULL))))) : (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (2117399240637582891LL))) >> (((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) var_16)) - (5917))))))))));
                                var_19 *= ((/* implicit */unsigned int) ((unsigned short) 1519742010U));
                            }
                            arr_21 [i_1] = ((/* implicit */unsigned int) (+(((((((var_13) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned short)0)))) | (-2117399240637582890LL)))));
                            var_20 *= ((/* implicit */short) arr_7 [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            arr_28 [i_6] [(_Bool)1] [3U] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_12)))) + (2147483647))) >> (((((max((var_14), (var_14))) >> (((((/* implicit */int) (unsigned char)121)) - (119))))) - (760723322U)))));
                            var_21 = ((/* implicit */int) (~(var_9)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
                {
                    for (int i_9 = 4; i_9 < 13; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_0] [i_1] [i_1] [(unsigned char)3] [i_10 + 1] [i_0] [i_10 + 1]), (((/* implicit */int) arr_6 [i_8 + 1]))))) ? (((((/* implicit */_Bool) (+(arr_8 [(_Bool)1] [(_Bool)1] [i_10] [(_Bool)1])))) ? (((((/* implicit */_Bool) var_13)) ? (arr_12 [i_0] [(_Bool)1] [(unsigned short)8] [i_8] [i_8] [i_8] [i_10]) : (((/* implicit */int) (short)7035)))) : (((((/* implicit */_Bool) arr_25 [6U])) ? (var_5) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_33 [i_1] [i_1]))), (arr_34 [(short)5] [i_10 + 1] [i_9 - 3] [i_8 + 2] [i_8 - 1]))))));
                                arr_35 [8U] [8U] [8U] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(var_6)))), (((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned int) 2100533510))))) ? (var_13) : (((/* implicit */long long int) ((var_9) >> (((((/* implicit */int) var_12)) - (26))))))))));
                                arr_36 [(short)0] [7ULL] [i_8] [i_1] [i_0] = ((/* implicit */short) (((((~(((/* implicit */int) arr_34 [i_8] [4] [(signed char)0] [i_8 + 2] [(short)13])))) + (2147483647))) >> (((max((((/* implicit */unsigned int) arr_34 [(_Bool)1] [(_Bool)1] [2LL] [i_8 + 1] [i_10])), (var_2))) - (985034502U)))));
                                arr_37 [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_24 [i_10 + 1] [4U] [i_0]) | (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) var_13)) ? (30ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((long long int) var_4)))));
                                var_23 = ((/* implicit */int) max((((var_14) >> (((var_4) - (3285450587U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), ((((-(var_10))) >> (((max((1070572581), (((/* implicit */int) var_7)))) - (1070572534)))))));
}
