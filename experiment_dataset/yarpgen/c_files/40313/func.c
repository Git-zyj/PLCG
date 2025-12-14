/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40313
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (2989806290U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (unsigned short)57107)) ? (14105669730990927172ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4318)))))))) ? (min((min((14105669730990927172ULL), (31525197391593472ULL))), (((/* implicit */unsigned long long int) ((14105669730990927172ULL) == (14105669730990927172ULL)))))) : (0ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [(unsigned short)9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~((~(4341074342718624444ULL))))) : (14105669730990927172ULL)));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_2] [i_1] [i_0 + 1] [i_0 + 2])), (var_13)))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_0 [i_2]))));
                }
                arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_5 [i_0] [3U] [(short)2] [i_0]))))))) ? (arr_2 [1ULL] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-52)) - (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) arr_4 [(unsigned char)2] [i_1])))))))));
                arr_10 [i_0] [(short)7] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (((unsigned long long int) max((var_2), (((/* implicit */unsigned int) (unsigned char)20)))))));
                arr_11 [i_0] = ((/* implicit */unsigned long long int) (((+(min((arr_1 [(unsigned short)7]), (((/* implicit */unsigned int) arr_4 [i_0] [8U])))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) var_8)) : (var_6)))) ? (((/* implicit */int) (unsigned char)170)) : ((-(((/* implicit */int) (signed char)(-127 - 1))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) (~(868475927U))))), (var_2)));
    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) ? (((((/* implicit */int) (signed char)89)) ^ (((/* implicit */int) (unsigned char)237)))) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_4))));
}
