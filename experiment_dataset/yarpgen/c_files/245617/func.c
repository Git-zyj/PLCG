/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245617
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned char) var_1);
                                var_19 -= ((/* implicit */short) (((+(((/* implicit */int) var_9)))) + (((int) var_12))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) var_17))))), ((~(var_5))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((max((((/* implicit */short) var_9)), (var_16))), (((/* implicit */short) ((signed char) var_14))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (~(var_3)));
}
