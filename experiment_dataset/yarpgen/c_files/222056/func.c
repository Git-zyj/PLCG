/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222056
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
    var_20 |= ((/* implicit */int) ((unsigned char) min((((/* implicit */int) ((_Bool) var_3))), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)93)))))));
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
    var_22 = ((/* implicit */_Bool) (unsigned char)255);
    var_23 = ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned char)100), (var_3)))) % ((-(var_19)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) ((signed char) arr_1 [i_1])))))));
                var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)154)) == (((/* implicit */int) (unsigned char)172))))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0] [i_1]))))) != (((/* implicit */int) (signed char)-117))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) == (((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned short)10] [i_0] [(unsigned short)10])) > (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                arr_5 [(unsigned char)20] [(unsigned char)20] = ((/* implicit */unsigned char) var_14);
            }
        } 
    } 
}
