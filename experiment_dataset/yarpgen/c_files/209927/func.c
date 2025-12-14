/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209927
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (126976U)));
    var_16 = (+(((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) : ((-(1152851135862669312ULL))))));
    var_17 += ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((_Bool)1), (var_10)))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                    arr_8 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                {
                    var_19 |= ((max((arr_15 [i_4 - 1] [i_3]), (arr_16 [4LL] [i_5 + 3] [i_4 - 1] [i_3]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5 + 2] [i_4 - 1] [i_4 - 1])) || (((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4 - 1])))))));
                    arr_18 [(signed char)9] [(_Bool)1] [i_5] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_10 [i_5 + 3] [i_5 + 1])))) ? (((((/* implicit */unsigned long long int) arr_9 [i_4 - 1] [i_4 - 1])) - (arr_10 [i_4 - 1] [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((((var_4) ? (arr_11 [(_Bool)1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (arr_11 [i_4 - 1] [i_5 + 1]))))));
                }
            } 
        } 
    } 
}
