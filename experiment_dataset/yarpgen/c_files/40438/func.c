/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40438
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_0] = ((/* implicit */signed char) min((arr_2 [4LL]), (((/* implicit */long long int) (_Bool)1))));
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 4231451284U)), (((((/* implicit */_Bool) min(((unsigned short)7615), (arr_4 [i_2] [i_1])))) ? (min((((/* implicit */long long int) 0U)), (-9223372036854775805LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_2] [i_1]))))) : (((arr_0 [i_0] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))), (var_7)))));
}
