/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32832
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */int) ((unsigned char) var_12));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((max((max((((/* implicit */long long int) var_5)), (-6267654378334153254LL))), (((/* implicit */long long int) arr_1 [i_1 - 2])))) != (((/* implicit */long long int) ((/* implicit */int) max(((short)-24840), (((/* implicit */short) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_12)))))))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
}
