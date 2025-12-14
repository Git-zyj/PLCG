/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212609
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
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_0])));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0 - 2]);
            }
        } 
    } 
    var_11 ^= var_1;
    var_12 = ((/* implicit */short) max((((unsigned short) (+(((/* implicit */int) (short)26954))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2)))))));
    var_13 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_3)), ((short)-5363))))) == (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((3128439232U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))));
}
