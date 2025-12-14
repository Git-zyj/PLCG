/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240504
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) ((unsigned char) (signed char)0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (signed char)-97))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_8))))))) : (((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_18)))) ? (9223372036854775800LL) : ((-9223372036854775807LL - 1LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) max(((signed char)-80), ((signed char)66))))));
                var_21 = ((((/* implicit */_Bool) ((((((int) 2731744481U)) + (2147483647))) << (((((3979317240U) << (((((/* implicit */int) var_10)) - (29291))))) - (2415394816U)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_1 [i_0] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_14))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_14)) << (((((/* implicit */int) var_18)) - (74))))) : (((/* implicit */int) var_4))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(128U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) min((arr_1 [i_4] [i_1]), (((/* implicit */unsigned long long int) 1563222800U))))) ? (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))))) : (((var_4) ? (var_13) : (var_1)))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((arr_9 [i_0] [i_0]), (((/* implicit */unsigned int) var_15))))))) ? (min((0ULL), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_2] [i_3])))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_9 [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_1 [i_1] [i_0])))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) var_7);
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)14839))))) ? (min((2147483647), (((/* implicit */int) (short)31118)))) : (((/* implicit */int) ((unsigned char) 0ULL)))));
                            }
                        } 
                    } 
                    var_26 = (signed char)-97;
                }
            }
        } 
    } 
}
