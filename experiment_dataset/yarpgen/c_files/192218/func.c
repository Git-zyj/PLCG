/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192218
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
    var_14 &= min((max((((((/* implicit */_Bool) (signed char)4)) ? (var_7) : (var_7))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (3755951363U)))))), (((/* implicit */unsigned long long int) min(((~(31U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) & (-974176793))))))));
    var_15 = ((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))), (((/* implicit */unsigned long long int) ((short) var_1))))) <= (var_1)));
    var_16 = ((/* implicit */int) (((-(539015933U))) == (((/* implicit */unsigned int) (+(((int) var_11)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((int) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_4 [i_0] [i_0])))));
                var_18 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((3755951362U), (((/* implicit */unsigned int) arr_3 [i_1] [10LL] [i_0]))))) == (131071ULL)));
            }
        } 
    } 
}
