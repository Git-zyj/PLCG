/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22819
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 17331406482567670637ULL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))))))) < (((((/* implicit */_Bool) (signed char)4)) ? (15647620845532100006ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28)))))));
                arr_5 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(2021151345700724120ULL)))) ? (((/* implicit */int) (signed char)-9)) : (((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((((/* implicit */int) (signed char)4)) >= (((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((-(((/* implicit */int) (_Bool)0))))));
    var_16 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (short)-32094)))))), (10926063198148669450ULL)));
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)2374)))));
}
