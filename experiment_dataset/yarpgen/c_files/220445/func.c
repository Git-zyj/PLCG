/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220445
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((min((((1099511627775ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30077))))), ((-(18446742974197923840ULL))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_15)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_1)) : (var_3))))))))));
    var_18 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((unsigned int) (-(((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30065)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60755))) : (452620598U)));
                arr_7 [i_1] [i_0] [i_0] = (((((+(arr_6 [23]))) - (((8512177024488373261ULL) - (((/* implicit */unsigned long long int) var_1)))))) + (((/* implicit */unsigned long long int) var_1)));
                var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) (short)26116))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (~(arr_3 [(signed char)3] [i_2])));
        var_22 *= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_7))))));
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61900)) >> (((((/* implicit */int) (unsigned char)208)) - (198)))))) ? ((-(var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)4780)))))));
    }
}
