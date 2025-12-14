/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37582
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
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */int) max((12631903539372545156ULL), (((/* implicit */unsigned long long int) 1399717480U))));
                                var_15 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) != (1547898638U));
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12631903539372545179ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))) : (-8262020314159918444LL)));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) min((-8262020314159918426LL), ((~(-8262020314159918427LL)))));
                var_17 &= ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_0 + 3] [10U] [i_1])) : (((/* implicit */int) (short)6576))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_9);
    var_19 &= ((/* implicit */_Bool) ((unsigned int) (+(max((var_13), (((/* implicit */int) (unsigned char)63)))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)63)) <= (((/* implicit */int) (unsigned char)113))));
}
