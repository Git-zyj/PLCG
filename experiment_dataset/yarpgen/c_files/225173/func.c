/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225173
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) max((((unsigned int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 2])), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                var_15 &= (+(min((((/* implicit */long long int) ((int) arr_1 [6ULL]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0]))) : (7717235470270364894LL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)109)) < (var_7)));
    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) max((((int) 16675707685124743185ULL)), (((/* implicit */int) ((short) (unsigned short)0)))))) && ((!(((_Bool) -6869836333594101951LL))))));
}
