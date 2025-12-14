/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190334
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
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_14)), (arr_2 [(unsigned char)4] [i_1 + 2] [i_1 + 1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)50)), (arr_2 [i_0] [i_1 - 1] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_1 + 2]))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)126)), (arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)21)) | (((/* implicit */int) arr_0 [(_Bool)1]))))) ? (max((arr_8 [i_2]), (((/* implicit */unsigned long long int) arr_5 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))))))))));
                    arr_9 [i_0] [i_1] [i_2] [(signed char)1] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) (signed char)(-127 - 1))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))));
                        arr_12 [i_0] [i_0] [i_0] [(signed char)2] = ((/* implicit */unsigned char) (signed char)-102);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 4; i_4 < 8; i_4 += 4) 
                        {
                            arr_15 [5ULL] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_1 - 1] [i_0]))) : (arr_8 [i_0])));
                            arr_16 [(signed char)0] [i_1 + 1] [i_1 + 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) arr_14 [i_1 + 1] [i_1 + 1] [i_2] [i_4 - 1] [(signed char)7]));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1659383439U))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_23 [i_6] [(_Bool)0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
                            arr_24 [i_0] [(signed char)4] [i_0] [(signed char)5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_3 [i_1 - 1])) : ((+(((/* implicit */int) var_5))))));
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) arr_22 [i_0] [i_0] [i_1] [i_1] [i_1] [3U]);
                        var_21 = (!(((/* implicit */_Bool) (short)32766)));
                    }
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_1 + 2] [i_1] [i_1])) >> (((((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1])) - (52624)))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)121)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_8] [i_2] [i_1] [i_1] [6ULL])) : (((/* implicit */int) arr_20 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_8 - 1]))))));
                        var_24 = ((/* implicit */unsigned long long int) (short)-9350);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_27 [i_0] [i_0] [i_0] [(short)8] [i_0]))))))) ? (((/* implicit */int) arr_18 [(short)7] [i_8] [i_8] [i_8 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_22 [9LL] [i_1] [i_2] [i_1] [i_1] [i_2]))));
                        arr_30 [i_8] [i_1] [i_2] [i_8] [i_8] [i_2] |= ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (short)-9350)))));
                        var_26 = ((/* implicit */short) ((signed char) var_9));
                    }
                }
                var_27 ^= ((signed char) var_1);
                var_28 &= ((/* implicit */int) var_8);
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) (_Bool)1);
                            var_30 = ((/* implicit */signed char) (_Bool)1);
                            arr_35 [i_0] [i_1] [i_9] [i_1] = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */int) arr_31 [(unsigned short)9] [i_1 - 1] [i_1 - 1] [8U])), (-2147483642))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) var_10);
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) (_Bool)1)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
