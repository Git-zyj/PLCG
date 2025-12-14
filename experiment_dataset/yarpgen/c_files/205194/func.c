/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205194
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_10)))) + (((8598164255083332694LL) / (((/* implicit */long long int) var_2))))))) ? (((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) 8598164255083332694LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) : (3496357299U))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) : (402653184U))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)82)) - (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(0U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (var_10)))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_2 [i_0] [i_1 - 3] [(_Bool)0])) << (((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) - (16620))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (short)-2634)))))) <= (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) ((var_4) > (arr_0 [i_1] [i_0])))))) + (2147483647))) << (((((((/* implicit */_Bool) (short)2634)) ? (((((/* implicit */_Bool) 10705359607432796656ULL)) ? (784892399) : (((/* implicit */int) (unsigned char)128)))) : (((((/* implicit */int) (unsigned char)48)) & (((/* implicit */int) (_Bool)1)))))) - (784892399)))));
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_6)) : (var_8)))) ? ((~(var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_6)))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))))))));
}
