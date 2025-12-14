/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225912
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1 + 2] [3] [i_0] = ((/* implicit */long long int) var_13);
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16767)) ? (-1887199736) : (((/* implicit */int) arr_0 [(short)17]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1682037312U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1 + 3]))))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((-(8839800168163516988LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14)))))))) ? (1990451381U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 3867933189U)), (-8839800168163516988LL))))))))));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) ((((/* implicit */int) (short)29841)) == (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) (unsigned short)2873)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_10)))));
}
