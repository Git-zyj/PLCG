/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211759
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
    var_17 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_13))))), (((((((/* implicit */_Bool) -1126035497836894696LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_8))) << (((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */unsigned int) (-(var_1)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) min((min((var_5), (arr_1 [i_0] [i_0]))), ((~(arr_1 [i_2] [i_1])))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [1LL]))) ? (9221120237041090560ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_4);
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) > (((/* implicit */long long int) var_5)))))) : (((unsigned int) var_10))))));
}
