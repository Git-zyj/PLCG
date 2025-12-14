/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218264
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (unsigned char)86))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (0U)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 650557866)) ? (((int) min((((/* implicit */unsigned int) -983905138)), (arr_4 [i_1] [i_2])))) : (983905138)));
                arr_9 [(short)9] = ((/* implicit */unsigned int) (+(((var_5) ? (min((-983905138), (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)49291)) : (((/* implicit */int) (unsigned char)124))))))));
                var_20 += min((((/* implicit */unsigned int) (_Bool)1)), (max((min((765943676U), (((/* implicit */unsigned int) arr_7 [i_1])))), (min((((/* implicit */unsigned int) (unsigned short)65522)), (arr_4 [i_1] [i_1]))))));
            }
        } 
    } 
}
