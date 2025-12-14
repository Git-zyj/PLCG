/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48050
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
    var_13 -= ((/* implicit */unsigned short) max((((unsigned int) (~(((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (+(((var_3) ^ (((/* implicit */int) (unsigned char)87)))))))));
    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) var_7))))));
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)180))))) ? ((~(((/* implicit */int) (unsigned short)42174)))) : (((/* implicit */int) (unsigned char)237))))) == (var_2)));
    var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10150)) ? (((/* implicit */int) (unsigned short)32102)) : (((/* implicit */int) (unsigned short)33433))))) ? (((((/* implicit */_Bool) (unsigned short)32102)) ? (((/* implicit */unsigned int) var_3)) : (2129493739U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_1)))), (arr_1 [8U] [i_1])));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) var_8);
                var_17 += ((/* implicit */int) ((((/* implicit */_Bool) 35542436)) ? (((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)31))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_0 [3U] [3U])))));
                var_18 -= ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
            }
        } 
    } 
}
