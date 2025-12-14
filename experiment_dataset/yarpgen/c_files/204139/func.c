/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204139
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_2 [i_0] [i_0])))));
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))) + (max((7219737083536265700ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) ((short) var_12))))))));
    var_21 &= ((/* implicit */long long int) var_2);
    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((int) (unsigned short)51744))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (11227006990173285916ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) var_16)))))))));
    var_23 *= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned char)211)), (max((((/* implicit */unsigned long long int) (signed char)78)), (11227006990173285916ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) & ((-(((/* implicit */int) (unsigned short)13792)))))))));
}
