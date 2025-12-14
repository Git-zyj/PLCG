/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36046
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
    var_19 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) (~((~((+(((/* implicit */int) var_9))))))));
        var_21 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((1073610752U), (1073610752U)))))))));
    }
    var_22 -= ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned char) (((-(((1073610752U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1] [i_1]) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1])))))))))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((min(((-(((/* implicit */int) (short)-17063)))), (((/* implicit */int) arr_5 [4LL])))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 - 2] [i_2 + 1])) != (((/* implicit */int) arr_4 [i_2 - 2] [i_2 + 1]))))))))));
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) -137438953472LL))))))));
            }
        } 
    } 
}
