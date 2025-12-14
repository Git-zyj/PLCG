/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217425
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
    var_11 = min((((/* implicit */signed char) var_5)), (var_1));
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)3)))), (((/* implicit */int) (!(var_4)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23125))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) (signed char)3)), ((-(arr_4 [i_0] [i_1])))))));
                    var_13 = ((/* implicit */signed char) max((min((21ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_2 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_2 + 2] [i_1] [i_0])) : (((/* implicit */int) (signed char)0))))) ? (max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (arr_4 [i_0] [i_0]))) : (max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) (short)23125)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [(_Bool)0] [i_0] [i_0] |= var_2;
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-23125)) & (((/* implicit */int) (short)-23135))));
                            var_16 *= ((/* implicit */short) arr_4 [(short)2] [(short)2]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (signed char)61;
                            arr_20 [i_1] [i_1] [i_0] [(signed char)2] [i_0] [i_1] [(signed char)2] = ((/* implicit */short) arr_18 [i_1] [i_1]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) var_1)) <= (((/* implicit */int) ((_Bool) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_0]))));
                            var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_10 [i_0] [i_6] [i_6] [i_3] [i_6]))))));
                            arr_26 [i_0] [i_1] [(signed char)2] [i_6] = ((/* implicit */_Bool) ((((var_4) ? (arr_23 [i_0] [i_1] [i_2] [i_0] [i_3 - 1] [i_2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35)))));
                            var_18 += ((/* implicit */short) (~(arr_5 [i_6] [i_2 - 1])));
                            arr_27 [i_0] [i_2] = ((/* implicit */_Bool) ((18446744073709551602ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))));
                        }
                        arr_28 [i_0] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0])) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_3] [i_2] [i_0] [i_2])))) / (((((/* implicit */_Bool) (short)1779)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_8))))));
                        arr_29 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((arr_24 [i_2 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) arr_24 [i_2 + 1] [i_2 - 2] [i_3] [i_3 - 1] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_24 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_3 - 1] [i_3]))));
                        arr_30 [i_0] = arr_11 [i_0] [i_0] [i_0] [i_0] [(short)15];
                    }
                }
            } 
        } 
    } 
    var_19 -= (!(((/* implicit */_Bool) (-(((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)127))))))));
    var_20 -= var_1;
}
