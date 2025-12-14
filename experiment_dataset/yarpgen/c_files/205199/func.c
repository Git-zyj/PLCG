/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205199
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
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)26)), ((unsigned short)65535))))) >= (-213186192219618553LL))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((short) var_3))), (min((var_16), (((/* implicit */unsigned long long int) var_6))))))))));
    var_19 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_7 [10U] [10U] [10U] [10U] &= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0]))));
                    var_20 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)5))))));
                    var_21 = ((/* implicit */unsigned int) ((((arr_3 [i_0] [i_1]) != (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_1]))))))) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])) : (arr_6 [i_0] [i_0])));
                    var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) * (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
}
