/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30853
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) + (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_0 [i_0 - 1])))));
                    var_12 = ((/* implicit */int) var_6);
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32512)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) 16777215LL)) : (2486008182171250741ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_0]), (min((arr_5 [i_0] [i_0] [i_0] [i_0 + 1]), (var_9)))))))));
    }
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-86))))))))))));
    var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 17822617037670273529ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)115))))) : (((((/* implicit */_Bool) (short)-18930)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))) : ((-9223372036854775807LL - 1LL))))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30051)))));
}
