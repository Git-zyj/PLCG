/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235273
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3104977398U) & (3104977404U)))) ? ((-(var_14))) : (var_14)))) || (((((((/* implicit */_Bool) -8221296026750262199LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) > ((-(((/* implicit */int) (signed char)0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)))))) : (max((((/* implicit */int) max((((/* implicit */short) arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 1])), ((short)19564)))), (((((/* implicit */_Bool) -1115835746)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (signed char)46))))))));
                var_21 = ((/* implicit */unsigned char) ((4U) >= (((/* implicit */unsigned int) -1115835770))));
                arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
