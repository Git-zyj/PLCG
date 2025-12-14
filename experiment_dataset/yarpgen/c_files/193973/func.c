/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193973
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((((((/* implicit */_Bool) ((long long int) (signed char)-14))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-14)))) : ((-(1241440621))))) >= (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) ((var_10) << (((((/* implicit */int) (short)7586)) - (7586)))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) min((((/* implicit */short) var_17)), ((short)10))))))));
                var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) var_10))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_0]);
                    var_21 = var_12;
                    arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0]);
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((!(arr_9 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) arr_9 [i_0] [3] [i_1 - 1] [i_2])) : ((+(((/* implicit */int) var_15)))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)32752)), (0U)));
}
