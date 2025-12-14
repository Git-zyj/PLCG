/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191447
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
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)-14)), ((+(((/* implicit */int) (unsigned char)2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_3 [(unsigned char)13])), ((((_Bool)0) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) var_9)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) - (((/* implicit */int) (unsigned char)255))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)13))));
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_0] [i_0] [i_0]));
                        }
                    } 
                } 
            }
        } 
    } 
}
