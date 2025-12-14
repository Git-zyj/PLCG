/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204560
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
    var_19 = ((/* implicit */unsigned char) ((((_Bool) (!(var_18)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)21958))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)62))) ? ((((-(((/* implicit */int) var_1)))) / (((/* implicit */int) (unsigned char)133)))) : (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_15))))));
    var_21 = ((_Bool) ((((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27505)))) >= (((/* implicit */int) ((_Bool) var_14)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_0))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) var_11);
                        var_24 = ((/* implicit */_Bool) (((~((~(((/* implicit */int) (_Bool)1)))))) & (((((/* implicit */int) arr_6 [i_3] [i_3])) * (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_0 + 3] [i_2])), ((unsigned char)122))))))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) / (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) == (((/* implicit */int) (unsigned char)134))))) : ((((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)56)))))))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_10 [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_4 [i_0 - 1] [(unsigned char)8] [i_0 - 1]))))) : (((/* implicit */int) (_Bool)1))));
    }
}
