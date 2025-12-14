/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39460
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [(short)5] [i_0] [i_0])) ? (arr_4 [i_0] [(short)3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_16 += ((/* implicit */unsigned short) arr_5 [i_2] [i_2]);
                    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) -9032144642118020474LL)) ? (((min((((/* implicit */long long int) (unsigned short)53404)), (9032144642118020474LL))) / (((/* implicit */long long int) arr_4 [i_0] [(_Bool)1] [i_1])))) : ((-(-7671285648640921391LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7671285648640921388LL)) ? (-7671285648640921396LL) : (-7671285648640921391LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) (unsigned char)188))))))));
}
