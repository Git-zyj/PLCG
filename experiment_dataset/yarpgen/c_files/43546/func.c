/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43546
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1] [16] [i_0] = ((/* implicit */unsigned long long int) var_4);
                    arr_9 [i_2] [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44123)) - (((/* implicit */int) (unsigned short)23273))))) || (((/* implicit */_Bool) max((((((((/* implicit */int) var_12)) + (2147483647))) >> (((arr_2 [i_0] [i_0]) + (452462300))))), (((/* implicit */int) (unsigned char)224)))))));
                    arr_10 [i_2] [i_1] [i_0] |= ((/* implicit */int) max((min((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [(unsigned short)16])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16383))) : (-1LL))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)105)) - (95))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_0);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11100)) || (((/* implicit */_Bool) 0ULL))));
}
