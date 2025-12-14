/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32803
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_0]) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */int) (short)-6355)) * (((/* implicit */int) (signed char)121))))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) arr_2 [9]);
                var_19 |= ((/* implicit */unsigned char) ((var_9) & (((/* implicit */long long int) ((((int) arr_0 [i_0])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_4)), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)1984)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))));
}
