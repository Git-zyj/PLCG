/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191646
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) min(((short)26657), ((short)-14888))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) max((((((/* implicit */int) (short)26678)) * (((/* implicit */int) (signed char)-4)))), (((/* implicit */int) (unsigned char)0)))))));
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) != (arr_4 [i_0 + 3] [i_1 + 3] [i_1 + 3]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (63U)))), (arr_4 [i_0] [i_1 + 1] [(short)12])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((int) (short)-20434));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_3 + 1] [i_2] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -422885605)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))))))) ? ((-(((/* implicit */int) arr_1 [i_3 + 1] [i_3])))) : ((+(((/* implicit */int) var_5)))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-(var_2))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_10))));
                var_18 = ((/* implicit */int) ((((/* implicit */int) ((arr_8 [i_2] [i_3 - 1]) < (((/* implicit */int) arr_0 [i_2]))))) <= (min((arr_8 [i_2] [i_3 + 1]), (((/* implicit */int) arr_0 [i_2]))))));
                var_19 = ((/* implicit */unsigned long long int) arr_6 [i_3]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_9))));
}
