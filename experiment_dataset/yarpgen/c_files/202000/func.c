/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202000
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
    var_12 = ((/* implicit */signed char) 2057285234U);
    var_13 = ((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) * ((+(((/* implicit */int) arr_0 [i_0] [i_1 - 2]))))));
                var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)16632)))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (max((((/* implicit */short) (unsigned char)94)), ((short)16383)))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)23977))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) 1180390859U)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)3))))), ((-(var_2))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (+((~(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)111))))))));
}
