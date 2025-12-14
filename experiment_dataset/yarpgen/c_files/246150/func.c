/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246150
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))))) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) (unsigned short)46096)) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8009))))) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65534)) | (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */unsigned int) var_10)) : (((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46096)) - (((/* implicit */int) var_12))))) ? (228899457U) : (((/* implicit */unsigned int) ((var_4) - (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (arr_3 [i_0] [i_1]) : (((((/* implicit */_Bool) (unsigned short)1024)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
