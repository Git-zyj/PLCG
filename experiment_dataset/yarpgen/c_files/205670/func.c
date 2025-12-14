/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205670
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
    var_19 += (-(((/* implicit */int) var_12)));
    var_20 += ((unsigned long long int) min((((/* implicit */short) ((var_18) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((short) -1545777765))));
    var_21 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1073741824U)) ? (var_8) : (21ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118)))))) ? (((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) var_10))))) ? (var_9) : (((/* implicit */unsigned long long int) ((3852625791U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [(signed char)1] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)5109)), (var_17)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                    arr_7 [i_2] &= ((((/* implicit */_Bool) ((short) 18446744073709551595ULL))) ? (((var_7) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)116))) : (max((((/* implicit */unsigned long long int) var_18)), (arr_5 [i_0] [i_0] [(signed char)11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))));
                    var_22 = ((/* implicit */signed char) ((unsigned long long int) arr_4 [i_0] [(short)1] [i_1] [(_Bool)1]));
                    arr_8 [i_0] [i_1] = (+(((((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_1 + 1])) ^ (((/* implicit */int) arr_4 [i_1] [(unsigned char)7] [i_1] [i_1 - 2])))));
                }
            } 
        } 
    } 
}
