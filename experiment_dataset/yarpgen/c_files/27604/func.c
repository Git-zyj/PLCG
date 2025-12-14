/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27604
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */short) (-(((((/* implicit */int) ((unsigned short) (unsigned short)10872))) | ((-(((/* implicit */int) var_2))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((var_9) && (((/* implicit */_Bool) ((unsigned long long int) 58530594)))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) ? (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_2)))) : (((arr_5 [i_1] [i_0] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10872)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) : (((arr_0 [i_0 - 3]) >> (((((/* implicit */int) (unsigned short)10858)) - (10840)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) -243440884))))), (((243440884) & (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (((unsigned int) (-(-610564377))))));
    var_18 = ((/* implicit */int) var_4);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_1), (var_1)))) ? ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)3026)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) max(((signed char)43), (((/* implicit */signed char) var_5)))))))));
}
