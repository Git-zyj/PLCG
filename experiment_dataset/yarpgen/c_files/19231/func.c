/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19231
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
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)239))));
    var_19 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [16] [i_1] |= ((min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) (short)32767)) ? (var_14) : (4139712410U))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1751608334)), (155254885U)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)216))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1751608333)))))))));
                var_20 |= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) + (((-9195181367380962068LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100)))))));
                var_21 = ((/* implicit */unsigned char) (((-(155254885U))) >= (((((arr_0 [i_0]) > (arr_0 [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)125)) >> (((/* implicit */int) var_7))))) : ((~(4294967290U)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (short)-16024);
}
