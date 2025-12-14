/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222271
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL)))))) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */int) (_Bool)0)) / ((+(((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((/* implicit */int) var_8)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) var_3);
                    var_18 = ((/* implicit */short) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-16060)) : (((/* implicit */int) (_Bool)0)))));
                }
                var_19 |= ((/* implicit */signed char) (~(((unsigned int) ((((/* implicit */int) arr_3 [2U])) & (((/* implicit */int) (unsigned short)11994)))))));
            }
        } 
    } 
}
