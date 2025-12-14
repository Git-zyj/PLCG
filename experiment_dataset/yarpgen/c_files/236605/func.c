/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236605
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
    var_16 = ((/* implicit */long long int) ((var_14) < (((/* implicit */unsigned int) var_4))));
    var_17 -= ((/* implicit */unsigned char) max((var_11), (((/* implicit */long long int) (+(var_15))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((((/* implicit */long long int) 2607302106U)), (max((min((-2931603179745485889LL), (2931603179745485913LL))), (max((((/* implicit */long long int) var_12)), (2931603179745485867LL)))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)11))))) >= (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (-2931603179745485903LL) : (var_8))))) ? (((/* implicit */long long int) min(((-(arr_0 [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))) : (max((max((2931603179745485914LL), (((/* implicit */long long int) 3899165516U)))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))));
                var_19 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) min((-2931603179745485904LL), (((/* implicit */long long int) arr_4 [0ULL] [13LL]))))) ? (min((((/* implicit */unsigned long long int) -2931603179745485905LL)), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                var_20 = ((/* implicit */long long int) ((max((11415108062499237316ULL), (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) (+(4294967282U))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) & ((+(max((524032U), (((/* implicit */unsigned int) var_10))))))));
}
