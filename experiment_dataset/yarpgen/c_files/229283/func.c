/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229283
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))));
    var_11 = ((/* implicit */long long int) (~((((-(var_6))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))));
    var_12 = max((var_1), (var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) var_6);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) arr_1 [i_2]);
                                arr_14 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */int) ((unsigned short) (-(var_7))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
