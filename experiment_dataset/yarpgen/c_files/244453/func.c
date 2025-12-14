/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244453
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (min((var_2), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
    var_12 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)186));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) 11);
                    var_14 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (unsigned char)73))))) : (((((/* implicit */int) arr_1 [4U] [i_0])) >> (((((/* implicit */int) arr_1 [(unsigned char)4] [i_2])) - (12215))))))));
                    var_15 = ((/* implicit */short) max((((max((((/* implicit */unsigned long long int) var_6)), (arr_0 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0])))))))), (((((/* implicit */_Bool) ((short) arr_3 [(short)2] [i_0] [i_0]))) ? (arr_4 [(unsigned char)2] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (611123022U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_10);
}
