/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197867
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) 7677652549623110268ULL);
                                arr_13 [i_2] [i_4] [i_3] [16LL] [i_4] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1737374111470113181LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -1737374111470113181LL)) ? (((/* implicit */long long int) var_16)) : (1737374111470113181LL)))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))) : (max((((/* implicit */long long int) (short)26180)), (1737374111470113187LL)))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) var_16);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((unsigned short) -1737374111470113154LL))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)0)))))) : (((((/* implicit */_Bool) -1737374111470113207LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (var_9)))) : (((unsigned long long int) var_14)))))))));
    var_20 = ((/* implicit */unsigned int) 1737374111470113179LL);
}
