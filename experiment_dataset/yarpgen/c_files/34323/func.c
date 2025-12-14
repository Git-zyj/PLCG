/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34323
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (17001587783215110232ULL)));
                arr_5 [12U] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min((17338589713510021508ULL), (3001220823858183859ULL))));
                var_16 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) ((arr_3 [i_0 + 2] [i_0 + 2] [i_1]) + (arr_3 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 700928114626618981ULL)) ? (var_14) : (125708765))))) : (((((/* implicit */int) ((short) var_8))) + (((/* implicit */int) var_4)))))))));
    var_18 += ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))) ^ (((((/* implicit */_Bool) 17745815959082932635ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17001587783215110232ULL))))));
    var_19 = ((/* implicit */unsigned char) var_7);
}
