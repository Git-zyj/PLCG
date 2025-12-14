/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44463
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
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6371493635117712134LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178)))))) ? (max((var_11), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48748))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_10) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21896))) : (min((var_13), (((/* implicit */unsigned int) (unsigned short)878))))))));
    var_15 = ((/* implicit */unsigned int) ((long long int) ((signed char) max((6034638445332618656LL), (((/* implicit */long long int) 3612114346U))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)47003)))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((var_13) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (7599262727120195366LL) : (((/* implicit */long long int) arr_0 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)36454)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned short)35085)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)29082))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (+(3612114345U)))) : (((long long int) (-(var_3))))));
}
