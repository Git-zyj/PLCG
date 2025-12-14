/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48650
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)10663))))) / ((+(((long long int) var_5))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */long long int) var_7)), (var_1))) : ((((_Bool)1) ? (((/* implicit */long long int) var_0)) : (var_6))))))));
                    arr_8 [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                    var_19 = ((/* implicit */long long int) ((var_13) ? ((-(((/* implicit */int) ((_Bool) var_11))))) : (((/* implicit */int) var_11))));
                    arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((unsigned long long int) var_5));
                    var_20 = max((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) ((unsigned short) 2653712143U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5680))) : (arr_7 [i_2]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (short)-8002)))));
}
