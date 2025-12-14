/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232121
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7549))));
                    arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)0), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_17)) >> (((2124266606U) - (2124266599U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (((+(((/* implicit */int) var_6)))) < (((((/* implicit */int) (unsigned short)18258)) % (((/* implicit */int) var_12))))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((18014398509449216LL) % (var_8)))) && (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_12)))))))));
                arr_18 [i_3] [i_4] = ((/* implicit */short) (((~(((/* implicit */int) var_3)))) != (((/* implicit */int) ((unsigned char) var_0)))));
            }
        } 
    } 
}
