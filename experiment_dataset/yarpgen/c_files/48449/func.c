/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48449
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
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 278875574)) ? (((/* implicit */int) (short)-20458)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_13))))) : (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */long long int) 278875591))))) ? (((long long int) arr_4 [i_1])) : (((/* implicit */long long int) ((unsigned int) arr_5 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0])))) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_0])))))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_4 [i_1]) : (arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_4 [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_3);
    var_19 = ((/* implicit */unsigned int) var_12);
}
