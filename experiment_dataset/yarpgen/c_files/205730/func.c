/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205730
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
    var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (var_13) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (unsigned short)4080)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((var_4), (((/* implicit */unsigned long long int) (signed char)-59))))))));
    var_15 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)33258))))) ? (((/* implicit */int) max((var_5), (((/* implicit */signed char) arr_0 [i_1]))))) : (((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */int) ((short) arr_3 [i_0 + 1] [i_0] [i_0 - 2]))) : (((int) var_10)));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned long long int) ((int) arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 2]))))))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_4))))))))));
}
