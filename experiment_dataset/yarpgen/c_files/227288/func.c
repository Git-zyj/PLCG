/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227288
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
    var_15 = ((/* implicit */unsigned short) ((var_5) ^ (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (max((var_12), (var_12))))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_3))));
    var_17 = 15ULL;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = (~(((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned char)8)))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [22U] [i_1] [i_1]), (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20047)) & (12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (((((/* implicit */_Bool) var_12)) ? (1719188146U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)10]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60490)))));
                var_19 = ((/* implicit */long long int) (unsigned char)29);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (min((((/* implicit */long long int) arr_1 [i_0])), (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
            }
        } 
    } 
}
