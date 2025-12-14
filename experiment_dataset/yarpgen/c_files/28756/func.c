/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28756
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_10 *= min((((((/* implicit */_Bool) ((unsigned short) (signed char)-21))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) arr_5 [i_0] [i_3])))), (((/* implicit */unsigned long long int) max((arr_2 [i_4] [i_0 + 1]), (((/* implicit */long long int) var_8))))));
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_10 [10LL] [i_1 + 3] [i_2] [i_3] [i_4])) == (((/* implicit */int) (short)18772))))) << ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7267))) >= (arr_2 [i_0] [i_4])))))))))));
                                arr_11 [i_0 + 1] [i_0] [i_2] [i_4] [i_0] = ((((/* implicit */int) arr_4 [i_2 + 1] [i_3 + 1])) << (((((/* implicit */_Bool) 370295371619108277ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 1] [i_3 - 2]))) : (var_6))));
                                var_12 |= ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_10 [20] [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 2])), (((((/* implicit */int) arr_10 [0LL] [i_3] [0LL] [i_1] [0LL])) << (((arr_0 [22U]) - (10587032866812271927ULL))))))), (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [10U] [i_1])) || (((/* implicit */_Bool) -9)))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)21])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */int) arr_9 [i_0 + 1] [12U] [i_1 + 3] [i_1] [i_1])) * (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-30)))))) : (min((0), ((+(((/* implicit */int) (short)-9194))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) -8615203161658660420LL);
    var_14 = ((/* implicit */_Bool) -296267171);
    var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)178))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) var_9))));
}
