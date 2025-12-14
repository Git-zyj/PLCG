/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226508
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */unsigned long long int) 1231443654)) | (8315293607610703228ULL)))));
                                arr_14 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((var_11) < (((/* implicit */int) var_6))))) < ((~(((/* implicit */int) var_15))))))) & (((((/* implicit */_Bool) min((((/* implicit */signed char) var_9)), (var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_17)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_0);
}
