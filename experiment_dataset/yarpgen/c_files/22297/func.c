/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22297
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_8)) : (var_2)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((max((2525048913U), (((/* implicit */unsigned int) (unsigned short)29823)))) + (max((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (122880U))))))));
        var_17 = ((/* implicit */signed char) min((0ULL), (2742920489001525618ULL)));
        var_18 -= ((/* implicit */short) arr_1 [i_0]);
        arr_4 [i_0 - 3] [i_0 - 3] = ((/* implicit */signed char) arr_3 [i_0 - 2]);
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-124)) + (2147483647))) << (((((/* implicit */int) (unsigned short)29823)) - (29823)))))) ^ (((long long int) 4294844401U))));
        var_20 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) max((((/* implicit */unsigned int) (signed char)-82)), (4294844430U)))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((122899U) % (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (arr_6 [i_1 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_1 + 1])) >= (((/* implicit */int) var_9))))))))));
            arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_1 + 1]), (var_0)))) ? (min((arr_1 [i_1 + 2]), (arr_1 [i_1 + 1]))) : (((((/* implicit */_Bool) -7035661827215691853LL)) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1])))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) var_8)), (var_11))))) <= (0ULL))))));
        }
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_23 += ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [(short)1])) && (((/* implicit */_Bool) arr_13 [i_1 + 2])))), (((((/* implicit */_Bool) (short)30720)) && (((/* implicit */_Bool) 122884U))))));
                    arr_15 [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 2])), (((unsigned int) var_13)))), ((+(((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (var_2) : (4276999817U)))))));
                    var_24 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 2]))) / (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : ((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    }
    var_25 = max((((/* implicit */unsigned long long int) var_4)), (0ULL));
}
