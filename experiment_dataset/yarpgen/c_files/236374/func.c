/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236374
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) && (((/* implicit */_Bool) var_9))))), (var_11)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)102)))))) | (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))));
                    arr_7 [i_0] [i_1] [6] &= ((/* implicit */int) (signed char)102);
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4441))))) ? (((/* implicit */int) (signed char)102)) : ((+(((/* implicit */int) (unsigned char)156))))))) ? (var_11) : (((/* implicit */unsigned long long int) -1294381413))));
    var_14 ^= ((/* implicit */_Bool) max((max(((+(var_11))), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100))))) : ((+(var_8))))))));
}
