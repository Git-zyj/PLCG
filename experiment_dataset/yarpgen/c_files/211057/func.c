/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211057
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [1ULL] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (4294967291U)))), (var_8)))));
                arr_6 [i_0 + 1] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-21)) + (30)))))))) ? (((unsigned int) ((((/* implicit */_Bool) 7111880316479764256ULL)) || (((/* implicit */_Bool) (signed char)31))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21022)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (_Bool)1)))))));
                arr_7 [i_0] [i_0] [i_0] &= max((((/* implicit */unsigned short) (short)24166)), ((unsigned short)16383));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */_Bool) var_6);
    var_15 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_1)), (var_3))), (((/* implicit */unsigned long long int) var_9))));
}
