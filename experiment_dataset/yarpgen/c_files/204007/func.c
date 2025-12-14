/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204007
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)60)), ((unsigned short)30)))) ? (((unsigned int) (unsigned short)65535)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 618290781U))))))) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)10979))))) ? (((/* implicit */int) ((short) (unsigned char)140))) : (((/* implicit */int) (signed char)127))))));
    var_20 ^= ((/* implicit */unsigned short) min((var_1), (((/* implicit */unsigned int) max((((unsigned short) 11572956926184632750ULL)), (((/* implicit */unsigned short) ((short) var_15))))))));
    var_21 += ((/* implicit */long long int) min((((/* implicit */short) var_13)), (((short) min((var_5), (var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) (short)32719)), (arr_1 [3U] [i_1]))))))));
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((short) (signed char)-127))) : (((/* implicit */int) ((unsigned char) (signed char)-127))));
            }
        } 
    } 
}
