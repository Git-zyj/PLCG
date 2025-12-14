/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229537
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
    var_20 = ((/* implicit */unsigned short) ((unsigned char) var_2));
    var_21 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), ((~(var_13)))));
                    var_22 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2329))))), (((((/* implicit */_Bool) (unsigned char)163)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                }
            } 
        } 
    } 
}
