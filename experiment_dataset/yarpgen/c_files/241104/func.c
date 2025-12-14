/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241104
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
    var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
    var_12 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) (unsigned char)255)), (144115188075855871LL))));
    var_13 = ((/* implicit */long long int) min((((short) ((unsigned short) var_9))), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [5LL] = ((/* implicit */long long int) ((arr_6 [i_0] [i_1 + 1]) > (((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-4980527239334725963LL)))));
                    var_14 |= ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (signed char)95)) - (81))))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)184)), ((short)-20530))))));
                    var_15 = ((/* implicit */int) min((var_15), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)20529)))))))));
                    arr_9 [i_0] [i_1 + 3] [i_1] = ((/* implicit */long long int) var_2);
                    var_16 |= ((/* implicit */unsigned char) (((-(arr_6 [i_0] [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_17 |= (+(max((var_8), (((/* implicit */unsigned int) (short)-6060)))));
}
