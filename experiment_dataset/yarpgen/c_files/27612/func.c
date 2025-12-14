/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27612
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
    var_10 = (+((-(4294967281U))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
                                var_12 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_7))))));
                                var_13 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_7))))));
                                var_14 = ((/* implicit */int) (-((+(3005093603776575578ULL)))));
                                var_15 &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_1))))))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */long long int) ((_Bool) min((var_0), (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))));
                    var_17 ^= ((/* implicit */long long int) ((signed char) var_6));
                    arr_14 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (min(((~(((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_7))))))));
                    var_18 = (~(min((max((var_6), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_19 = var_9;
}
