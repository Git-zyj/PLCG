/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217162
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)21182))) : (9223363240761753600LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) 7282475305743926922LL)))))))) : (((int) -9223363240761753605LL)))))));
                    var_11 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_1 [i_0])) << (((max((var_7), (var_4))) - (5011686224171885000ULL)))))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */int) max((min(((unsigned short)64532), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) var_2))))) << (((1429159977) - (1429159962))));
    var_13 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_3)) / ((+(((/* implicit */int) var_8)))))));
}
