/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212988
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_3)) ? (511) : (var_2))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))) : ((+(var_10)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_7 [i_0] [14LL])) ? (var_9) : (((/* implicit */unsigned int) 1076057916))))))), (((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) var_8)) ? (4618456961452751089LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [2ULL]))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                                var_16 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) < (((/* implicit */int) arr_2 [i_3])))))));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                                var_18 = ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_12)) : (((var_6) & (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_6]), (arr_4 [(short)10])))))))));
                                arr_19 [i_1] = ((/* implicit */signed char) ((long long int) var_6));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)31399))))) : (((((/* implicit */_Bool) var_9)) ? (14ULL) : (((/* implicit */unsigned long long int) var_12)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0])))))));
                                arr_21 [i_0] [i_1] [(short)2] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) arr_18 [(signed char)12] [i_5] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)59496))))) >= (((arr_10 [i_6] [i_5] [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_5] [i_2] [(signed char)9] [i_0]))) : (var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_11))));
}
