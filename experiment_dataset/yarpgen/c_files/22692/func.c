/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22692
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
    var_15 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (signed char)-96)), (-795549016080415392LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */long long int) ((_Bool) -795549016080415379LL))), (min((((/* implicit */long long int) (_Bool)1)), (max((-6184887294929389666LL), (((/* implicit */long long int) var_3)))))))))));
                var_17 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) -299560)))));
            }
        } 
    } 
}
