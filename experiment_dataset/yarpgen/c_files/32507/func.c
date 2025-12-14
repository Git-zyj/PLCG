/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32507
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
    var_19 = ((/* implicit */short) (~(var_3)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = max((((((((/* implicit */int) (unsigned short)65535)) / (428378085))) / (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2])) * (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1] [i_0])))))), (((int) ((int) var_16))));
                    var_20 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((int) var_17))) ? (((/* implicit */long long int) max((var_16), (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]))))) : (max((var_17), (((/* implicit */long long int) var_10)))))), ((+(var_1)))));
                }
            } 
        } 
    } 
}
