/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212872
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
    var_19 = (+((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) | (var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (((unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                    var_20 -= ((/* implicit */unsigned char) (((+((-(7670795571028491718ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_1])) & (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) min((arr_1 [(short)0]), (((/* implicit */unsigned char) var_4))))))))));
                    var_21 = ((/* implicit */short) min((var_21), ((short)32767)));
                }
            } 
        } 
    } 
}
