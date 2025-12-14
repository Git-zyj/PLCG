/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199208
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) (short)8181)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+((+(var_5)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) arr_4 [5]);
                    arr_10 [i_0] [9] [i_2 + 2] &= ((/* implicit */short) arr_5 [i_2 - 1] [i_1] [i_2 - 1]);
                    var_16 = ((/* implicit */int) arr_2 [(unsigned short)3]);
                }
            } 
        } 
        var_17 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))) ? (4294967292U) : (4294967292U))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) var_8))));
    var_19 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) 4U)), (17721866151743337785ULL)));
}
