/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234084
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-17094)) % (-1108038178)));
                    var_17 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_18 += ((/* implicit */long long int) ((unsigned char) max((-1108038164), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 1841348034172947712ULL))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((short) (-(var_16))));
}
