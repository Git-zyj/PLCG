/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23351
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
    var_10 |= ((/* implicit */unsigned char) 6078384847993393347LL);
    var_11 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)224)) >> (((-6078384847993393347LL) + (6078384847993393361LL)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (signed char)20)))) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */int) max(((short)-1), (((/* implicit */short) var_3))))) >= (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 &= ((/* implicit */int) ((signed char) -397935297));
                var_13 -= ((/* implicit */long long int) arr_1 [i_0]);
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
            }
        } 
    } 
}
