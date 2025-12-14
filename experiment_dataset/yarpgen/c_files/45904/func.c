/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45904
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
    var_12 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (((((-(1U))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_2]))), (((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (var_8)))))) : (((((/* implicit */_Bool) (~(arr_6 [i_0] [i_1] [i_0])))) ? (4294967294U) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) arr_1 [i_1] [i_2])))))))));
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-6713)));
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_0] [i_2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (max((((/* implicit */unsigned int) arr_7 [i_2] [i_1] [i_0])), (var_0)))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_10))));
}
