/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48202
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
    var_10 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (var_8) : (var_8))), ((~(((unsigned long long int) var_1))))));
    var_11 = ((/* implicit */short) (signed char)64);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1])) ^ (((/* implicit */int) arr_6 [i_0] [i_2])))))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (0ULL)))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))) : (1497354975U)));
                    arr_11 [i_0] [i_0] [i_2] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)63))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-29431)), ((unsigned short)65535)))), (max((((/* implicit */unsigned long long int) (short)-225)), (var_8))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1])))))));
                    arr_12 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)24622)) : (((/* implicit */int) (unsigned char)250))))) : (arr_5 [i_2] [i_1] [i_0])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (+(((((/* implicit */int) var_1)) * (((/* implicit */int) var_3))))));
}
