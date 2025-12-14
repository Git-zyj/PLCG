/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246169
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
    var_13 = (unsigned char)0;
    var_14 = var_7;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((arr_1 [i_0]) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) * (((/* implicit */int) arr_1 [i_0])))))));
                    arr_7 [i_2] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [13ULL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0] [(signed char)5] [i_0]))))));
                    arr_8 [i_0] = ((/* implicit */short) arr_6 [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_8)), ((+(((((/* implicit */_Bool) (unsigned short)31594)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_4)))))));
}
