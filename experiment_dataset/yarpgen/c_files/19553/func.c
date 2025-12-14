/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19553
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)231))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) ((144115188075855871ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))), (arr_1 [i_0])))) <= (((-269880596) & (((/* implicit */int) (signed char)89))))));
    }
    var_20 = ((/* implicit */short) ((signed char) (short)24656));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            {
                arr_8 [i_2] = ((/* implicit */unsigned long long int) (~(min((var_1), (((/* implicit */unsigned int) arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 4]))))));
                arr_9 [(short)18] [i_2] = var_8;
            }
        } 
    } 
}
