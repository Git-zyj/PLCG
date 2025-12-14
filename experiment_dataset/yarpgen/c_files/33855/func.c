/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33855
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) / (((int) 2267669333U))));
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_6)) * (var_5))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (-1)))) / (((((/* implicit */_Bool) var_5)) ? (6955649922663378367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))) != (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)64))))) ^ (min((-6884048256106007530LL), (((/* implicit */long long int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 7202522884365637663ULL)) ? (147292660) : (((/* implicit */int) (_Bool)1))))));
                    var_14 = max((((/* implicit */int) arr_6 [i_0] [i_1])), (((((/* implicit */int) (!(((/* implicit */_Bool) 0U))))) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))));
                }
            } 
        } 
        arr_10 [i_0] |= ((/* implicit */short) ((unsigned char) 4294967295U));
    }
}
