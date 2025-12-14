/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28277
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) min(((_Bool)1), (var_4)))) * (((/* implicit */int) var_4)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-4178))))));
    var_16 = ((/* implicit */unsigned long long int) var_4);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((var_13) - (15953374815774618896ULL)))));
    var_18 = (-(((((3780019874640292887ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((max(((~(((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1])))), (((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned short) var_0)))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
}
