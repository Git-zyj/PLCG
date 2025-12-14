/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229932
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
    var_18 = ((((/* implicit */_Bool) min((((120) - (130))), (-126)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) (-(((/* implicit */int) var_9))))));
    var_19 = ((/* implicit */unsigned short) (~((~(((var_6) >> (((803624600) - (803624586)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */short) 4U);
                var_20 = ((/* implicit */unsigned long long int) ((((arr_0 [i_1 - 1] [i_1]) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) arr_0 [i_1 - 1] [i_0])))) / (((/* implicit */int) arr_0 [i_1 - 1] [i_0]))));
                var_21 = ((/* implicit */unsigned int) arr_3 [i_0]);
                var_22 = ((/* implicit */unsigned int) -1626028377);
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min(((((((_Bool)1) || (var_11))) ? (var_16) : (((((/* implicit */_Bool) -101)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) min((var_9), ((((_Bool)1) && (((/* implicit */_Bool) var_6)))))))));
    var_24 = ((/* implicit */unsigned long long int) ((((((803624610) != (((/* implicit */int) var_11)))) || (((112) == (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) max((min(((short)-13615), (((/* implicit */short) (unsigned char)102)))), (((short) -2106355638))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)58))))));
}
