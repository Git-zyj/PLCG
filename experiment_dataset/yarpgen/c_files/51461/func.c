/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51461
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) ((short) ((short) min((var_9), (((/* implicit */unsigned short) (signed char)102))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_1] [i_1 + 1] [(short)16])), (arr_5 [i_1 - 1] [i_1 - 4] [i_1])))) || (((((/* implicit */_Bool) min((var_16), (-2078090484)))) || (((/* implicit */_Bool) ((short) var_12)))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) * (arr_2 [i_1 + 1] [(unsigned short)20])))) ? (((/* implicit */int) (!(((arr_4 [i_0]) >= (-2078090484)))))) : (((/* implicit */int) (unsigned short)27525))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-65)))), (min((((/* implicit */int) ((unsigned char) var_10))), ((+(((/* implicit */int) var_12))))))));
    var_21 = ((/* implicit */unsigned char) var_1);
    var_22 ^= ((/* implicit */long long int) var_2);
}
