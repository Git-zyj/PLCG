/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243560
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
    var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((var_4), (573665056U)))))) ? (min((2336255448U), (((/* implicit */unsigned int) ((unsigned char) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_12)), ((short)13863)))) && (((/* implicit */_Bool) ((short) (short)13856)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (1336454293U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (var_13))), (((/* implicit */unsigned int) (unsigned char)0)))));
                    var_21 *= ((/* implicit */unsigned char) (short)5010);
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)101)) < ((~(((/* implicit */int) (unsigned char)5)))))))) : ((+(1958711847U)))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2] [4U]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) ((573665056U) >> (((((/* implicit */int) var_18)) + (7383)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)29))))))))))));
                }
            } 
        } 
    } 
}
