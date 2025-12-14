/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50277
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) (short)18289)))))))) : (((/* implicit */int) ((short) var_15)))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) var_0)) ^ (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)-18065)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)4)))) : (((/* implicit */int) var_11))))));
    var_22 = ((/* implicit */_Bool) var_15);
    var_23 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_24 = ((/* implicit */short) min((var_24), (arr_0 [6U] [i_0 + 1])));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)56396)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0 + 1] [i_1] [i_2])), ((unsigned short)9140)))) : (((var_12) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : (((/* implicit */int) (unsigned short)61766))))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)105)) == (((((/* implicit */int) (unsigned short)65531)) + (((/* implicit */int) var_10))))))) : (max((((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)186)))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28976)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_11 [i_3] [i_3]))))) ? (var_19) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3]))))))))));
        var_27 ^= ((/* implicit */short) (((_Bool)1) ? (4037015159U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52)))));
    }
}
