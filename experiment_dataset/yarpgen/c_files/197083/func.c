/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197083
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */_Bool) (short)5207);
                var_11 = ((/* implicit */unsigned int) max((var_11), (((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), ((short)10350))))) | (((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) var_5)), (var_3)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 &= ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (short)-10354)), (((((/* implicit */int) var_6)) - (var_1))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6))))) / ((-(((/* implicit */int) (_Bool)1))))))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_0))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-1524)), (var_1)))) ? (((/* implicit */int) min((var_7), ((short)10350)))) : (min((-229116268), (((/* implicit */int) var_5))))));
                }
                var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (short)-10350))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (var_1)))), (((var_4) / (((/* implicit */long long int) ((/* implicit */int) (short)20807)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_3);
}
