/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233570
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? ((+(2ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
                    var_20 |= ((/* implicit */int) arr_0 [i_0]);
                    var_21 = ((/* implicit */unsigned int) (-((-(((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0])))))))) << (((((/* implicit */int) arr_3 [i_0])) + (17435)))));
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) | (((/* implicit */int) (signed char)63))))) ? ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -1320584284)) : (var_1))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? ((~(var_18))) : (((/* implicit */long long int) (~(1320584284))))))));
    var_24 = ((/* implicit */int) (-(var_1)));
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
}
