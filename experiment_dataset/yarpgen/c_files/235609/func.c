/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235609
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) 67108863);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_4]))));
                                arr_13 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */short) max((((long long int) ((arr_9 [i_0] [i_1] [i_2] [i_4]) ? (var_5) : (((/* implicit */unsigned long long int) var_14))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((arr_0 [i_0]) ^ (((/* implicit */int) var_7))))) ^ (max((((/* implicit */unsigned int) var_0)), (var_16))))))));
                                var_18 = ((/* implicit */_Bool) arr_6 [i_2]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) arr_9 [i_2] [i_1] [i_2] [i_1]))), (arr_12 [i_0] [i_1] [i_1])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 3847878863610768512LL)))) : (((-3847878863610768513LL) / (((/* implicit */long long int) var_3))))))), (min((((/* implicit */unsigned long long int) max((3847878863610768512LL), (((/* implicit */long long int) -1))))), (min((var_5), (((/* implicit */unsigned long long int) var_10))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((((((/* implicit */_Bool) min((3847878863610768512LL), (3847878863610768516LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))))) <= (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_6))), (((/* implicit */unsigned int) var_13))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_8))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_1)) ? (-604727603) : (((/* implicit */int) var_1)))))) : (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) var_3))))) ? ((-((+(3847878863610768512LL))))) : (((/* implicit */long long int) 536854528))));
}
