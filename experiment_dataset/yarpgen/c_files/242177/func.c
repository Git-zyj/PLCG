/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242177
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((short) ((((arr_0 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))))) ^ (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2 - 1] [i_2])) ? (-4321243637585568824LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((int) ((((/* implicit */int) (signed char)77)) * (((/* implicit */int) (_Bool)1)))))) | (arr_0 [i_2])));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_0 [i_1]))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_2] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)77)) * (((((/* implicit */_Bool) (short)-25741)) ? (((/* implicit */int) (signed char)-77)) : (148319218))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_2);
    var_22 = ((/* implicit */short) ((unsigned char) ((unsigned short) var_8)));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) -2411385613833433720LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)2)))))));
}
