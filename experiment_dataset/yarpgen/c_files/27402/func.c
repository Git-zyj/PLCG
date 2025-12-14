/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27402
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */int) 1U);
                                arr_12 [i_0] [i_1] [i_3] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])) ? (arr_7 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-2))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~(max((arr_4 [i_2] [i_1] [i_0]), (((/* implicit */int) (unsigned short)43547))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) max((((/* implicit */short) var_4)), (var_5))))))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(((_Bool) (_Bool)1))))) - (max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))), ((+(((/* implicit */int) (_Bool)1))))))));
}
