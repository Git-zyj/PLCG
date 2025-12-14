/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240653
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
    var_11 = ((/* implicit */signed char) (short)4318);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (+(var_0)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) (_Bool)0))))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)0));
                var_12 = ((/* implicit */signed char) max((var_12), (((signed char) arr_0 [i_0]))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6))))) * (max((var_0), (3024061861U)))));
                                var_14 ^= ((/* implicit */_Bool) (signed char)120);
                                var_15 = ((/* implicit */short) ((((/* implicit */int) ((((2165738492U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) && (((/* implicit */_Bool) (short)3894))))) * (((((/* implicit */_Bool) min((arr_10 [i_4 + 1] [i_0 - 1] [i_1 + 2] [i_0 - 1]), (var_3)))) ? (((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)3894)))) : (((/* implicit */int) var_10))))));
                                var_16 -= ((/* implicit */short) (signed char)4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
