/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203388
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
    var_14 = ((/* implicit */unsigned int) var_7);
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (var_0))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((_Bool) var_4)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_4))))) : (var_6))) : (((/* implicit */long long int) var_10)))))));
                                arr_11 [i_0 - 1] [i_0] [i_1] [i_2] [i_3 + 2] [i_3 + 2] [(_Bool)1] = ((/* implicit */long long int) ((unsigned long long int) var_7));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (((unsigned int) var_2))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (var_5)))) != (((/* implicit */int) ((var_0) != (var_7))))));
                }
            } 
        } 
    } 
}
