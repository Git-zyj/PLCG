/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194168
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
    var_17 = ((/* implicit */int) (_Bool)0);
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 537772194261692303ULL)))));
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) var_5)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_4)) << (((arr_4 [i_0] [i_0] [i_1]) + (1843429978868752493LL)))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_16)), ((unsigned short)54854)))), (((unsigned long long int) arr_2 [i_0] [i_0] [i_1])))) : (33554400ULL)));
                    var_21 = ((/* implicit */short) arr_4 [i_1 - 2] [i_1 - 1] [i_1]);
                    var_22 *= ((/* implicit */unsigned long long int) (-(((((((int) arr_2 [i_0] [(_Bool)1] [i_0])) + (2147483647))) >> (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2 - 1]))) / (var_13)))))));
                    var_23 = ((/* implicit */_Bool) min((((5433252197975680694ULL) / (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1] [i_1 - 3])) ? (arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 3]) : (var_14))))));
                    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (~(var_0)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) var_5);
}
