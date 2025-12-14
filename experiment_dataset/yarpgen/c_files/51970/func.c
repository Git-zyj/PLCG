/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51970
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_2)) - (787))))) : (((((/* implicit */_Bool) 2077127788)) ? (var_4) : (((/* implicit */int) var_2)))))))))));
    var_15 = ((/* implicit */unsigned char) 5348658885170279637LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_1 - 1]), (((arr_4 [i_0] [i_1 + 3]) >> (((((/* implicit */int) (unsigned char)93)) - (31)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-1198893916) : (-2077127789)))) : (((((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> (((arr_0 [i_1 - 1]) - (2927489842250096259ULL)))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((signed char) ((arr_4 [i_1 - 1] [i_1 - 1]) * (arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 4])))))));
            }
        } 
    } 
}
