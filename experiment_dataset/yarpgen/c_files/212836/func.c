/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212836
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
    var_17 = ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) var_11))), (((unsigned short) var_0)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_3 [i_1 - 1])) / (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_0])))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_2]))) : (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [(signed char)16])))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 3]))) : (arr_1 [i_0] [(short)16]))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [(short)0] [i_2])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0])))) * (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (short)-344))))))))));
                }
            } 
        } 
    } 
    var_21 = ((unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_12)))));
}
