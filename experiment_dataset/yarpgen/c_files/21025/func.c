/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21025
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
    var_19 = ((/* implicit */signed char) (((((-(var_15))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_2)))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((int) (unsigned short)26313))))))));
    var_20 = ((/* implicit */unsigned char) (+(((max((2147483647), (((/* implicit */int) var_10)))) + (((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_10))))) ? (((int) arr_1 [i_1])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), ((unsigned short)0))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_2 [17] [(_Bool)1] [10])))) / (-437478545))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((int) 16777088U)) : (((/* implicit */int) ((unsigned short) 10870800541774684275ULL)))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */int) (unsigned char)219)) ^ (((/* implicit */int) (unsigned char)37)))) : (((/* implicit */int) ((unsigned char) (_Bool)0)))))) || (((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned char)69))))))))))));
                var_23 |= ((/* implicit */int) ((short) arr_2 [i_1] [i_1] [i_0]));
            }
        } 
    } 
    var_24 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_6)) : (0U)))) ? (((((/* implicit */_Bool) -7257935483780634456LL)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))) : (((/* implicit */long long int) var_6)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
