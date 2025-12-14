/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46117
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1737)) != (((/* implicit */int) (signed char)87))))), (arr_3 [i_0])))), (((short) 17708224199848853298ULL))));
            var_15 = ((/* implicit */long long int) var_10);
        }
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_12 [i_0] [i_2] [2U] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (min((((((/* implicit */_Bool) 738519873860698318ULL)) ? (17708224199848853298ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63798))))), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)6] [i_2])))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_6)), (var_0))) * (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-1))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)63799)) : (((/* implicit */int) (_Bool)1))))));
                        var_17 = ((/* implicit */signed char) min(((+((~(((/* implicit */int) arr_1 [i_0] [i_2])))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_19 [i_5] [i_5] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_8 [i_0]) : (arr_8 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((((/* implicit */long long int) (unsigned short)31264)), (9223372036854775807LL)))));
                        arr_20 [i_0] [i_2] [i_3] [i_5] |= min((((/* implicit */signed char) ((_Bool) arr_14 [i_0] [i_0] [i_0]))), (min((arr_15 [i_0] [3LL] [i_2] [i_2] [3LL] [i_5]), (arr_15 [i_2] [i_3] [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1]))));
                        arr_21 [i_3] [i_2] [i_3] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)24717)))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_3]))));
                        arr_22 [i_0] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((signed char) var_8))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5]))))) : (arr_8 [i_3])))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            arr_25 [i_6] [i_5] [i_3] [(short)10] [i_2] [(signed char)0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (((((/* implicit */_Bool) arr_9 [i_2] [i_3] [4ULL])) ? (min((((/* implicit */unsigned long long int) var_8)), (17708224199848853298ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_18 [i_6] [(unsigned short)7] [i_0] [(unsigned short)7]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((((((long long int) 17708224199848853298ULL)) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_5] [i_6])) - (34482))))))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_3] [i_5] [i_6]))) ? (((/* implicit */int) min((arr_11 [i_3] [i_2] [(_Bool)1]), (arr_11 [i_3] [i_3] [i_0])))) : (((/* implicit */int) ((unsigned short) (unsigned short)0)))));
                        }
                    }
                }
            } 
        } 
        var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)65535))))))));
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_7))));
    var_22 = ((/* implicit */signed char) (unsigned short)34272);
}
