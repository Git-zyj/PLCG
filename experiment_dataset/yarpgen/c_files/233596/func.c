/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233596
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */short) ((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) var_2))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (var_5))) : (((/* implicit */int) max(((short)-2062), (arr_1 [i_2])))))))));
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42721)) ? (max((((((/* implicit */_Bool) (unsigned short)42721)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2052))) : (8313369009243815656ULL))), (((/* implicit */unsigned long long int) (short)-2063)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_0))) ? (((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (short)2047)))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((short) arr_0 [i_2]))) ? ((-(arr_3 [i_0] [12U]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)2058), ((short)2040))))))));
                    arr_8 [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)32758);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) (unsigned short)22793);
}
