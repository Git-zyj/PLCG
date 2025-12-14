/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218747
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
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (arr_4 [i_1] [i_1] [i_2]) : (((/* implicit */int) var_2))))));
                    arr_8 [(_Bool)1] [13U] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) 18207878386901756192ULL)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned char)9)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((unsigned char) var_10)))) ? (((((/* implicit */_Bool) min((var_4), (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1670587771U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)48))))) : (max((var_6), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((long long int) ((long long int) var_6))))));
    var_22 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)122));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65525)))))) ? (((/* implicit */int) ((_Bool) min((var_2), (var_8))))) : (min((((/* implicit */int) ((short) -8180223908702873163LL))), (((int) var_19))))));
    var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)121))), (min((var_18), (((/* implicit */unsigned long long int) (signed char)-9))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 14329844935817967024ULL)))) : (((((/* implicit */_Bool) (unsigned short)51600)) ? (4294967273U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) 8516231286859305534LL))))) ? (min((((/* implicit */unsigned int) var_4)), (3333983437U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */signed char) var_1))))))))))));
}
