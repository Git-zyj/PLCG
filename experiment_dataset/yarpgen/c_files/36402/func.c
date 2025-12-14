/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36402
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)101)), (min((((/* implicit */long long int) (_Bool)1)), (-5732337417318851842LL)))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((!(((_Bool) var_8)))), (((min((((/* implicit */unsigned long long int) var_3)), (13895931001073533384ULL))) != (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) (unsigned char)1))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(12ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)27807))))) : (((((/* implicit */_Bool) arr_1 [i_0] [2ULL])) ? (-7984965763666518701LL) : (((/* implicit */long long int) 5U)))))) == (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (7984965763666518700LL))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 528482304)) * (516182779U)))) / (8141318484466940914ULL)));
                var_17 = ((/* implicit */int) var_14);
            }
        } 
    } 
}
