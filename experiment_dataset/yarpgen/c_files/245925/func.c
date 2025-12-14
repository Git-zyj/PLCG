/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245925
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 4; i_2 < 10; i_2 += 4) 
                {
                    var_20 |= ((/* implicit */unsigned long long int) (short)-9643);
                    var_21 = ((((/* implicit */int) arr_1 [i_1] [i_0 + 1])) < (var_8));
                    var_22 = ((/* implicit */_Bool) (signed char)47);
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [i_2]);
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_17 [i_0 + 2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_18)))) ? (((/* implicit */int) arr_14 [i_5] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_5 - 2] [i_3] [i_1] [i_0 + 3]))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-48)) && (((/* implicit */_Bool) -1073741824LL))));
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 3] [5] [i_3])) ? (arr_12 [i_0] [i_1] [i_3] [i_3] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [7ULL] [i_1]))))))));
                    arr_19 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_7 [i_0] [5ULL] [i_3] [i_1])) : (var_19)))) ? (arr_16 [i_3] [i_1] [i_1] [i_3] [i_0 + 2] [i_0 + 2] [i_0]) : (var_2)));
                }
                for (int i_6 = 3; i_6 < 10; i_6 += 3) 
                {
                    arr_24 [i_0] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_6] [i_6 - 3] [i_1] [i_6])) ? (arr_12 [i_0] [i_1] [i_6] [i_6 + 1] [i_6 - 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (signed char)-51)))))))) ? (max((((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [i_6] [i_6 - 1])), ((-(((/* implicit */int) (unsigned char)12)))))) : (((/* implicit */int) arr_4 [i_0 + 2] [10ULL] [10ULL] [10ULL]))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6880293585098557811ULL)) ? (arr_7 [i_1] [i_6] [i_0] [i_6]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_6] [i_6 - 2])))))));
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_6 - 1] [i_6 - 2] [i_6 + 1]))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_6] [i_6 - 3]))));
                    var_28 -= ((/* implicit */unsigned long long int) arr_15 [i_6 - 1] [i_6 + 1] [i_1] [i_1] [i_0 + 2] [i_0 + 2]);
                }
                for (unsigned char i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    arr_28 [i_0] [i_1] [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)4] [i_1] [i_7 - 2] [10ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 1]))) : (arr_27 [i_0] [i_1] [(_Bool)1] [i_7 - 2])));
                    arr_29 [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_1] [i_0]);
                }
                arr_30 [i_0 + 1] [(unsigned short)10] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(short)0] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [0] [2ULL] [(signed char)8] [2ULL]))) : (arr_7 [i_1] [i_1] [i_0 + 3] [i_0 + 3])))) % (arr_3 [i_0 + 2] [(short)7] [i_1])))));
                arr_31 [i_1] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))) - (arr_16 [9] [i_0 + 1] [i_0] [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [(_Bool)1] [(short)1]))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned char)200))))) : (-5026388416217613466LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2)));
    var_30 = var_7;
}
