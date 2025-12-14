/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194818
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
    var_14 += ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) (unsigned short)65535);
                    var_15 = ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */int) var_5)) > (var_3)))) - (min((((/* implicit */int) (_Bool)0)), (var_12)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 = var_12;
}
