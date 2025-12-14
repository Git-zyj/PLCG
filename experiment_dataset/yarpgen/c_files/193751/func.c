/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193751
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
    var_14 = ((/* implicit */unsigned int) (-((-(((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)224))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) ((((var_8) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (unsigned char)40)) : (-1136732836)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_5))))))));
        var_17 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_11))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)45023)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (((var_2) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) (_Bool)1)))))) : ((-((-(((/* implicit */int) var_1))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_4 [(unsigned char)21] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) var_12))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [(unsigned short)4])))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_5))));
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) var_11)))) : (((/* implicit */int) var_2))))) ? ((+(((((/* implicit */_Bool) (unsigned char)64)) ? (3585890900U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * ((+(((/* implicit */int) (unsigned char)64))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 816455464)) ? ((-(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_5))))))) ? ((+(((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_3])))))) : (((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_2])))));
                var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? ((+((+(((/* implicit */int) (unsigned char)207)))))) : (((((((/* implicit */int) arr_9 [i_2])) & (((/* implicit */int) (unsigned short)65535)))) | (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))));
            }
        } 
    } 
}
