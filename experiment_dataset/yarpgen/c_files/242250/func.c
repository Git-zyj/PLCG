/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242250
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
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_11 [6] [6] [6] [6ULL])) * (((((var_14) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (28188)))))))) ? (var_0) : (((((/* implicit */_Bool) 8614339688322587439LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_15)))));
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_16)), (var_8)))))) ? ((-(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) (short)-23790)))))))));
                                var_20 = ((/* implicit */signed char) max((arr_0 [i_2] [i_2]), (-8297298521190376220LL)));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)23800)) != (((/* implicit */int) (short)-23793))));
            }
        } 
    } 
}
