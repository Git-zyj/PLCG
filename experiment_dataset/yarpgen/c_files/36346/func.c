/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36346
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (~(((/* implicit */int) ((((unsigned long long int) (unsigned short)65530)) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32756))))))))));
                    var_20 -= ((/* implicit */unsigned short) ((short) arr_1 [i_0]));
                    arr_6 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_10))))))) ? (max((var_17), (((/* implicit */long long int) arr_4 [(short)14] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned char) arr_4 [10LL] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_6);
    var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned int) (unsigned char)6))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
    var_23 = max(((+(var_9))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_18))))))));
}
