/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4069
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_2 + 1] [i_2 + 1])), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_8 [i_0] [i_0] [i_1] [i_2 + 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (signed char)-2))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)105)))))) : (max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_10)))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) var_15);
                    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned short)48402)) - (((/* implicit */int) (signed char)120)))) - (((/* implicit */int) (signed char)1)))) - (((((/* implicit */int) min(((short)26171), (((/* implicit */short) (signed char)127))))) >> (((((/* implicit */int) arr_2 [i_2 + 1] [i_2])) - (33)))))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-22651)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_1] [i_1] [i_2 + 1]))), (((133169152U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */signed char) var_1);
    var_20 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)26)), ((short)3)))) >> (((((/* implicit */int) var_7)) - (30602)))))), (var_2)));
}
