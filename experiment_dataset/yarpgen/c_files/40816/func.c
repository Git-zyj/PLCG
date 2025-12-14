/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40816
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
    var_11 = ((/* implicit */_Bool) min((((unsigned long long int) ((_Bool) var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-7101689628752899202LL), (((/* implicit */long long int) var_10))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((57422363) >> (((18446744073709551594ULL) - (18446744073709551593ULL)))))) : (((((/* implicit */_Bool) arr_0 [i_2 + 3])) ? (((/* implicit */unsigned int) arr_0 [i_2 - 2])) : (var_10)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1] [i_3] [(signed char)3]);
                                var_13 = ((/* implicit */signed char) var_2);
                                var_14 -= ((int) (+(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)25009)) ? (1926082885) : (-1839435935))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_4);
}
