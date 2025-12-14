/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208288
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
    var_14 = ((/* implicit */unsigned char) ((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_15 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((((((-(((/* implicit */int) var_3)))) + (2147483647))) >> (((((/* implicit */int) var_3)) - (169)))))));
    var_16 = ((/* implicit */int) var_11);
    var_17 = (-(((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (((var_12) << (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) min((((int) 5294596)), (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0 + 1])))));
                    arr_9 [16LL] &= ((/* implicit */long long int) min(((-(((unsigned int) -5294606)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_6 [i_2]), (arr_4 [i_1])))) ? (((/* implicit */int) min(((unsigned char)15), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_7)))))))));
                }
            } 
        } 
    } 
}
