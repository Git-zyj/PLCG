/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2105
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
    var_13 = (+(((/* implicit */int) var_8)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_2 - 1] = ((/* implicit */unsigned int) (((+(2726622376674265054ULL))) < (((/* implicit */unsigned long long int) ((arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (var_5))) : (((((/* implicit */_Bool) (short)-16176)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [(_Bool)1])) : (((/* implicit */int) var_7)))))))));
                        var_14 = arr_4 [i_1] [i_1];
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_2 - 1] [i_0] [i_1] [i_0]), ((signed char)-19))))) == (((arr_0 [i_1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) (_Bool)1));
                        var_16 |= ((/* implicit */unsigned int) var_11);
                        arr_15 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (short)25510)) != (((/* implicit */int) (unsigned char)0))))), (arr_9 [i_1]))))) == (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 133162031)), (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_3)))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_0] [i_5])) ? ((-(arr_5 [i_0] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [3U] [i_1] [3U] [i_5])) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (short)-4602)))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((var_3) >> (((arr_2 [i_2 - 1]) - (3246932099U)))));
                        arr_19 [i_0] = ((/* implicit */short) 1789442482U);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+(((/* implicit */int) arr_8 [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])))))));
                    }
                    for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        arr_22 [(_Bool)1] [i_2] [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_6])) ? (((/* implicit */int) (short)-22292)) : (((/* implicit */int) ((short) arr_10 [i_2])))));
                        var_19 = ((/* implicit */signed char) (+(((arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_6]) ? (((/* implicit */int) arr_8 [i_6 - 1] [i_6 - 1] [i_6] [13U] [i_6 + 4])) : (var_5)))));
                        var_20 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */_Bool) (short)-18711)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [i_0] [(short)4] [i_2] [i_1])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (short)3939);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_0] [i_1] [i_2 - 1] [i_7] [i_8])), ((+(((/* implicit */int) arr_17 [i_8] [i_8] [i_2 - 1] [i_2 - 1] [i_1])))))))));
                            }
                        } 
                    } 
                    arr_27 [i_2 - 1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_21 [i_0] [i_2 - 1] [i_2] [i_2 - 1] [i_2])) >= (7268942914795444930ULL))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)120)) >> (((min((((/* implicit */unsigned long long int) (short)28833)), (var_11))) - (28815ULL))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) arr_24 [i_2] [i_2] [i_2]))));
                        arr_31 [i_9] [i_2 - 1] [i_1] [i_0] = ((/* implicit */signed char) ((arr_8 [i_9] [i_9] [i_2] [i_0] [i_0]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_2 - 1] [i_9] [(_Bool)1])))));
                    }
                }
            } 
        } 
    } 
}
