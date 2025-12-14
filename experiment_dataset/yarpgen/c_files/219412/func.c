/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219412
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
    var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((((/* implicit */int) var_4)), (23364787)))))) ? ((((-(((/* implicit */int) (short)-16287)))) - (((/* implicit */int) (short)-30934)))) : ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (var_8))))))));
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)83)), (-923362886)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [(signed char)7] = ((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_5 [i_0])), ((~(((/* implicit */int) var_7))))))));
                    var_14 |= ((/* implicit */unsigned char) var_10);
                    var_15 = ((/* implicit */unsigned long long int) (signed char)28);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (!(((-1654588740) != (((/* implicit */int) (unsigned short)17881))))));
}
