/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23037
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
    var_17 |= ((/* implicit */_Bool) var_13);
    var_18 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_0 [i_1]);
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) 268176287)), (((long long int) -50727555)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30676))) != (11626289556679397755ULL)))))))));
                var_20 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_7);
}
