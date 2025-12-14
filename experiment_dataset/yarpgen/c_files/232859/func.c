/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232859
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9857)) ? (((/* implicit */int) (short)9857)) : (((/* implicit */int) (unsigned short)65535)))))))) << (((((unsigned long long int) ((unsigned long long int) var_7))) - (876307470837523805ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_5))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((((~(((/* implicit */int) var_10)))) / (((/* implicit */int) max(((unsigned short)0), (var_11)))))) : (((/* implicit */int) (unsigned short)1)))))));
                arr_4 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(max((arr_2 [i_0 + 1] [(unsigned short)11] [i_0 + 1]), (((/* implicit */long long int) var_3)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (-(9050992198479729588LL)));
}
