/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42526
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+((+(1622492952)))))) > ((((~(909230848U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)28)) << (((3536298770U) - (3536298756U)))))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3536298770U)) ? (758668526U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) % (var_0))) : ((~(((/* implicit */int) (_Bool)0))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)7))));
                }
            } 
        } 
    } 
}
