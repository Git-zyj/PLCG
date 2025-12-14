/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247716
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
    var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */int) var_11)), (var_2))), (((/* implicit */int) min((var_8), ((short)-6482))))))) ? (((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (unsigned char)16))))) & (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)119))))))) : ((~((~(((/* implicit */int) (short)32767))))))));
    var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((unsigned int) (unsigned char)202)) : (((/* implicit */unsigned int) ((var_2) >> (((34837378) - (34837348))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1])), (var_6)))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)24867))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_20 |= ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)-19411)) & (((/* implicit */int) (short)-15565))))));
            }
        } 
    } 
}
