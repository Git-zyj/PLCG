/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232528
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
    var_12 = ((((/* implicit */_Bool) (-(((unsigned int) var_5))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (var_10))))) : ((-(var_1))))) : (((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63962)) << (((((((/* implicit */_Bool) (unsigned short)1573)) ? (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)63962)) : (((/* implicit */int) (unsigned short)30492)))) : (((/* implicit */int) var_11)))) - (63949))))))));
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_16 = ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])))))) : (arr_0 [i_0 + 2] [i_3]));
                                var_17 ^= ((/* implicit */unsigned short) ((max(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3)))))) && ((!(((/* implicit */_Bool) arr_5 [i_2 - 2] [i_0 - 1] [i_0 + 2]))))));
                            }
                        } 
                    } 
                    var_18 = var_3;
                }
            } 
        } 
    } 
}
