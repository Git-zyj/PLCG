/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246980
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
    var_17 = max((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)150)), (2855518039U))), (2855518039U)))), ((+(max((((/* implicit */unsigned long long int) 2855518046U)), (var_15))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (max((((/* implicit */unsigned int) var_0)), (1439449250U)))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((~(1439449257U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1439449239U) >= (1439449252U)))))))) != (((((/* implicit */_Bool) max((2855518039U), (2855518039U)))) ? (((/* implicit */long long int) 1439449254U)) : (((var_14) & (((/* implicit */long long int) 1439449274U))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (2855518021U))))) ? (((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) var_11)) : (2855518043U))) & (((unsigned int) arr_3 [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1439449223U) < (1439449250U))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 2855518047U)))), (((2855518055U) < (1439449272U))))))) : ((((-(2855518045U))) << (((((2855518072U) * (var_10))) - (1241277101U)))))));
                    var_21 = ((/* implicit */int) min((arr_4 [i_2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((_Bool) 2855518011U));
                                var_23 = ((/* implicit */unsigned short) ((_Bool) arr_2 [i_0] [i_0]));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) ((_Bool) arr_5 [i_0] [i_1] [i_2]));
                }
            } 
        } 
    } 
}
