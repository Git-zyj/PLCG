/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206096
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (short)-2459)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)1516))))), (max((((/* implicit */unsigned int) var_17)), (4294967292U))))))));
    var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min(((unsigned short)49152), (var_9)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (short)-64))))) : (((((/* implicit */_Bool) (short)-19199)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_2 [i_2]);
                    var_20 = ((/* implicit */long long int) max((var_20), (((((((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)1))))) / (((arr_6 [i_0] [i_0] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) (short)-28086))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (_Bool)1))));
                }
            } 
        } 
    } 
}
