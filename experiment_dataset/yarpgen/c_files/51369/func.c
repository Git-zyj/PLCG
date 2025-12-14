/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51369
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
    var_19 = ((/* implicit */unsigned int) (-(9223372036854775797LL)));
    var_20 = var_18;
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4879))) == (3186990499U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(3633004118U)));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14879)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (short)-14860)) * (((/* implicit */int) (short)14860))))));
                var_22 = ((/* implicit */unsigned long long int) (((((_Bool)1) || (((/* implicit */_Bool) -262144)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18606)))));
            }
        } 
    } 
}
