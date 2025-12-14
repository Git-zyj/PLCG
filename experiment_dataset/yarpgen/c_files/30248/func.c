/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30248
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
    var_20 = -731469500;
    var_21 = 731469493;
    var_22 = ((/* implicit */int) var_2);
    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 731469500)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) : (1396859794264737832ULL))), (((/* implicit */unsigned long long int) ((_Bool) (+(1259902705U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_24 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) -731469506)), (1259902695U)))));
                arr_6 [i_1] &= ((/* implicit */unsigned short) ((((_Bool) min((572795547766314612ULL), (((/* implicit */unsigned long long int) 731469501))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((1259902705U), (0U))))))) : (((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */int) ((short) (signed char)-101))) : ((+(-731469474)))))));
            }
        } 
    } 
}
