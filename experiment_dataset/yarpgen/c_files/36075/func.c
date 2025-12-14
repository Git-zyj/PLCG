/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36075
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
    var_16 = ((unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) arr_4 [i_2])) ? (((((/* implicit */_Bool) arr_6 [5U] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_1]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) max((arr_3 [i_2 - 2]), (arr_3 [i_2 + 1]))))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */int) arr_13 [i_3] [i_2 - 2] [i_2] [i_2] [i_1]);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_4])))) ^ (((/* implicit */unsigned long long int) ((-390518054) / (((/* implicit */int) (unsigned char)163))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_1])))));
                            }
                            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                            {
                                arr_19 [i_0] [i_0] [16] [i_0] [(unsigned char)4] [16LL] [4U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [i_2] [i_3])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_2 - 2] [i_2] [i_3])) ? (arr_9 [21U] [i_2 - 3] [i_2] [21U]) : (6503907445731018795ULL))) : (arr_9 [i_0] [i_2 - 3] [i_2 - 3] [i_3])));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_2 - 3] [i_3])) ? (arr_11 [i_0] [i_1] [i_3] [i_1] [i_2 - 2] [i_5]) : (arr_11 [i_0] [i_3] [(unsigned short)11] [i_3] [i_2 - 1] [i_3])))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_2 - 1]) ^ (arr_8 [i_2 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [9ULL] [(signed char)20])) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_5])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_2 - 1] [i_2] [3] [i_5]))) : (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_5])))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 2])) << (((((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1])) - (16191))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_18 [i_0] [i_0] [18U] [i_3] [6LL])), (2436898097401466658LL)))) >= (((((/* implicit */_Bool) -2436898097401466659LL)) ? (6993339874292452827ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21625))))))))));
                            }
                            arr_21 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) 803911737)) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 3] [i_2 - 1])) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [16LL] [16LL]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1])))) : (((/* implicit */int) max((arr_10 [i_1] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_4))));
}
