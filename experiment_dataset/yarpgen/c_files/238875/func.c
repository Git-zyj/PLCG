/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238875
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
    var_15 += ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min(((-(((/* implicit */int) var_7)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
    var_16 = ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) var_9);
                    var_18 -= ((/* implicit */signed char) arr_7 [(_Bool)1] [i_0] [i_0]);
                    var_19 = (unsigned char)63;
                }
            } 
        } 
    } 
}
