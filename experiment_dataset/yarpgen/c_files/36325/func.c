/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36325
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned char) ((short) (unsigned short)62440));
                var_18 = ((/* implicit */short) ((2249081049045358016LL) / (7031277863245245383LL)));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)81))))), (((long long int) 7031277863245245383LL)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) 5051726287934127082LL)) ? (((/* implicit */int) (short)-17759)) : (((/* implicit */int) (unsigned char)81))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)23493)), (min((var_4), (((/* implicit */unsigned short) (short)19466)))))))) : (min((((/* implicit */long long int) (short)17758)), (-7031277863245245384LL)))));
    var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) (((+(4504374281053615966ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
}
