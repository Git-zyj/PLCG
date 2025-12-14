/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203311
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
    var_19 = ((/* implicit */unsigned short) var_0);
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) : (((((/* implicit */_Bool) var_17)) ? (330370086U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29412)))))))) ? (var_3) : (((/* implicit */int) var_13)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((arr_4 [i_0]), (arr_4 [i_0])))), (686363412476826159ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_3 [i_1] [i_0])), ((unsigned short)37390))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))))))));
                }
            } 
        } 
    } 
}
