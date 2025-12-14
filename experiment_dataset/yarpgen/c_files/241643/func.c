/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241643
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
    var_17 &= ((/* implicit */unsigned short) (-(((max((var_4), (((/* implicit */unsigned int) var_14)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
    var_18 |= ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (short)3)), (min((((/* implicit */int) (short)-4)), (arr_2 [i_1 - 1])))))));
                    arr_8 [i_1] = ((/* implicit */_Bool) arr_5 [0] [i_1 - 1] [12U] [(unsigned short)10]);
                    arr_9 [i_1] [(_Bool)1] [i_2] [i_0] |= ((/* implicit */int) max((arr_7 [i_2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-8)))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) min(((unsigned short)46847), (((/* implicit */unsigned short) var_16))));
    var_21 = ((/* implicit */_Bool) ((((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18689)) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) (short)-32758))))), ((-(var_5))))) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) * (((/* implicit */int) ((var_13) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
}
