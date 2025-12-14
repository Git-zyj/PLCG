/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52424
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61186)) ? (6763992715389951043LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)35)), ((unsigned short)29500))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 2] [i_1 - 1]))) : (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (var_9)))) : (max((((/* implicit */unsigned int) arr_4 [i_1 - 2] [i_1 + 3] [i_1 + 3])), (1456988262U)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_0] [(unsigned short)12] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((min((arr_0 [i_0]), (((/* implicit */unsigned int) (short)969)))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28318)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_0 [i_0])))) == (arr_3 [i_1 + 2]))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29500)) ? (((/* implicit */int) arr_5 [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)99)))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) var_2)), (arr_6 [i_0] [i_0] [i_0]))))))) ? (arr_9 [i_1] [i_1]) : (((/* implicit */unsigned int) var_9))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) min(((unsigned char)20), ((unsigned char)133)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            {
                arr_17 [i_5] = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_15 [i_4] [i_4] [i_4])), (var_9)))) : (arr_2 [i_5]))) < (((/* implicit */unsigned long long int) ((var_7) << (((((/* implicit */int) var_4)) + (4709))))))));
                var_21 = ((/* implicit */_Bool) min((min((var_3), (((/* implicit */short) var_10)))), (var_4)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((min((var_16), (((/* implicit */int) (signed char)5)))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) -693587141))))) ? ((-(var_9))) : (((/* implicit */int) var_3))))));
}
