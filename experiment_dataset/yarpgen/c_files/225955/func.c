/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225955
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))))))))));
                    arr_7 [i_0 - 1] [i_1] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((int) (signed char)127))))) ? (((((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (5847163231515229211LL))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_4))));
                    var_12 -= ((/* implicit */short) max((((/* implicit */int) max(((signed char)13), (min(((signed char)-13), ((signed char)-14)))))), ((+(((/* implicit */int) ((((/* implicit */int) (short)-8336)) > (((/* implicit */int) (unsigned char)161)))))))));
                }
            } 
        } 
        arr_8 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((short) 1879048192U))) ? (((/* implicit */int) max((var_7), (((/* implicit */signed char) var_5))))) : (((((/* implicit */int) (signed char)127)) | (((/* implicit */int) (signed char)25))))))));
        arr_9 [i_0 - 1] = ((/* implicit */_Bool) ((short) (signed char)-119));
        arr_10 [i_0 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-65)))))))));
    }
    var_13 *= ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) (unsigned char)248)) % (((/* implicit */int) (unsigned char)7)))) >= (((/* implicit */int) ((unsigned char) var_1))))));
}
