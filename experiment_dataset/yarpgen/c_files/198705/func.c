/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198705
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_9)))))))), ((~(((/* implicit */int) var_13))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (var_8))))) : (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_0))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(-1067210581)))) > (max((var_3), (((/* implicit */long long int) var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_3);
}
