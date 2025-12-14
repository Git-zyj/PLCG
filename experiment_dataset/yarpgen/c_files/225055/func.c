/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225055
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
    var_15 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                arr_5 [i_0] [6U] = ((/* implicit */unsigned long long int) ((short) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2]));
                arr_6 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned char)240), (((/* implicit */unsigned char) var_5)))))));
                arr_7 [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) ((((((/* implicit */_Bool) (short)-29248)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) | (max((((int) var_3)), (((/* implicit */int) var_13))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4632199889451748313ULL))));
}
