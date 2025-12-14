/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218921
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (4503599627370495LL)))) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (signed char)-1)))))))))));
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned int) (-(arr_0 [i_0])));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_6 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_0]))))));
                    var_12 += ((/* implicit */short) max((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))), ((((_Bool)1) ? (2177239974U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])))))));
                }
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((var_8) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))) / (var_5)))) : (var_4)))));
    var_14 |= (+((~(((unsigned long long int) (signed char)-3)))));
}
