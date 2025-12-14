/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195001
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                    var_21 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 3] [i_2]);
                    var_22 = ((/* implicit */long long int) (_Bool)1);
                    var_23 = ((/* implicit */unsigned short) ((((395127117U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) && (((/* implicit */_Bool) (~(arr_7 [i_1]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) max((290257813U), (((/* implicit */unsigned int) (short)21741)))))));
    var_25 = ((/* implicit */signed char) (-(var_17)));
}
