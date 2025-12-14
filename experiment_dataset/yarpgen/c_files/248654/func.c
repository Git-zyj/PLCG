/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248654
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 13328233786478039528ULL))))))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_0))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((+((~(var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-60))))))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((/* implicit */int) ((arr_2 [i_1] [i_1]) > (((/* implicit */int) var_17))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_16))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) (-(var_3))))))) : (((max((((/* implicit */unsigned long long int) 4182539557U)), (1099511627775ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) / (((/* implicit */int) var_2))))))))))));
}
