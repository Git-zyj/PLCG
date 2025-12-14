/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48546
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_0]);
                var_11 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                var_12 = ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
    var_14 |= ((/* implicit */unsigned char) ((max((var_6), ((~(((/* implicit */int) var_1)))))) / (((/* implicit */int) (short)(-32767 - 1)))));
    var_15 += ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) var_0)))) + (((/* implicit */int) var_7)));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-6749)), (150919844U))))));
}
