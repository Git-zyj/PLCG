/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206313
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)7466))));
                    var_18 = ((/* implicit */signed char) ((unsigned char) var_16));
                    var_19 = ((/* implicit */unsigned long long int) (signed char)-43);
                    var_20 = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (var_17)));
    var_22 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)15360), (((/* implicit */short) var_13))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (signed char)123))))) : (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) var_0)))))))) <= (max((((long long int) var_8)), (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    var_23 = ((/* implicit */int) ((unsigned char) (signed char)-103));
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_13)) - (((/* implicit */int) var_10)))))))));
}
