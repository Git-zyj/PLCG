/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50134
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
    var_20 = ((/* implicit */unsigned long long int) (+(8971634350555483099LL)));
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (var_12))) || (((/* implicit */_Bool) ((var_16) ? (var_10) : (((/* implicit */int) (unsigned char)0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))) != (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_4))) != (((/* implicit */int) (signed char)-1))))))))));
                    arr_8 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) 2147483647);
                    arr_9 [i_0] = ((/* implicit */int) max((max((arr_2 [13LL] [i_2] [i_0]), ((short)-31717))), (((/* implicit */short) (((_Bool)1) || ((_Bool)1))))));
                }
            } 
        } 
    } 
}
