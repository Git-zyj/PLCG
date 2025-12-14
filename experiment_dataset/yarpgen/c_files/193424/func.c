/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193424
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
    var_18 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_0 - 1] [i_2]), (((/* implicit */unsigned short) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 - 1] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_2])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_2])))))))));
                    arr_8 [i_2] [i_2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_16))) < (((/* implicit */int) var_16)))))) : (((unsigned int) (unsigned char)236))));
                    var_20 = ((/* implicit */unsigned char) ((long long int) (_Bool)0));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned char) var_5)), ((unsigned char)102))));
                    arr_10 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_1])))) != ((((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))) | (((/* implicit */int) max(((unsigned short)30130), (((/* implicit */unsigned short) (signed char)-48)))))))));
                }
            } 
        } 
    } 
}
