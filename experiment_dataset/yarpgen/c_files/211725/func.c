/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211725
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */short) (-((~(((/* implicit */int) (unsigned short)32218))))));
                    arr_9 [i_2] [i_1] [i_0] = -1;
                    var_15 -= ((/* implicit */unsigned short) (-((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225)))))));
                }
            } 
        } 
    } 
    var_16 -= ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (4195291928U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
    var_17 = min((((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8848))) : (1073741823U))), (((/* implicit */unsigned int) var_4))))), (((long long int) var_14)));
}
