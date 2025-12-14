/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216998
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        arr_10 [i_0 - 1] [i_1] [i_2] [i_3 + 2] = ((/* implicit */short) ((((9007199254740991ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) > (((var_8) & (arr_0 [i_0 - 1] [i_3 - 1])))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))) | (((3571196066917163601ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65)))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_9 [i_4] [i_2])))) || (((var_3) && (((/* implicit */_Bool) var_2)))))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((((-469159406) + (2147483647))) << (((var_8) - (18059107133707425779ULL))))) & (((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */short) ((((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1U) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) != (((((/* implicit */int) arr_11 [i_4] [i_3 - 1] [i_2] [i_1] [i_0 - 1])) * (((/* implicit */int) var_3))))));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            arr_18 [i_5] [i_3 - 1] [i_3 + 1] [i_2] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_15 [i_0 - 1] [i_1] [i_1] [i_2] [i_3 - 1] [i_5]))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_3 [i_3 - 1] [i_5])))))));
                            var_19 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_0 [i_2] [i_3 + 2]))))) >> (((((/* implicit */int) arr_1 [i_0 - 1] [i_5])) * (((/* implicit */int) (short)0))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_6] [i_1] [i_2] [i_3 - 1] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_1)) % (arr_0 [i_1] [i_6]))) >> (((((((/* implicit */int) var_9)) | (((/* implicit */int) var_9)))) - (114)))));
                            arr_24 [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (18446744073709551615ULL))))) % (((arr_5 [i_1] [i_3 + 3] [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_3 + 3])))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_6)))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 4; i_7 < 16; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_21 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (1458309046U)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (0U))))))) * (((((((/* implicit */int) arr_28 [i_7 - 2])) >> (((arr_26 [i_8]) - (12666246851199168725ULL))))) & (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (short)0)))))))));
                var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (var_0)))) | (((/* implicit */int) ((var_6) && (((/* implicit */_Bool) 18446744073709551615ULL))))))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7 - 1])) && (((/* implicit */_Bool) var_5))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (1125891316908032ULL)))))))));
            }
        } 
    } 
}
