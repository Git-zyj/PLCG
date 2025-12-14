/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244265
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_3)) - (((((/* implicit */_Bool) max((var_14), (((/* implicit */short) var_1))))) ? ((~(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_3)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) arr_1 [20] [i_0])))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)10])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1])), ((unsigned char)230)))) * ((-(((/* implicit */int) var_8))))))));
        arr_6 [i_1] = var_7;
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */int) max((arr_8 [i_2]), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_2] [i_2])) != (((/* implicit */int) var_1)))))))) : (((/* implicit */int) max((max((var_14), (((/* implicit */short) arr_7 [i_2] [i_2])))), (arr_8 [i_2]))))));
        arr_9 [i_2] = ((/* implicit */signed char) ((short) ((((((/* implicit */int) var_12)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) ((signed char) (signed char)-2))), (arr_8 [i_2])))) ? (((((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))) - (((((/* implicit */int) arr_7 [(unsigned char)13] [i_2])) | (((/* implicit */int) var_14)))))) : (((/* implicit */int) ((((/* implicit */int) min((arr_7 [i_2] [i_2]), (var_0)))) <= (((/* implicit */int) arr_7 [i_2] [i_2])))))));
    }
    var_22 = ((/* implicit */_Bool) ((unsigned short) ((signed char) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_8)) - (30666)))))));
    var_23 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */int) ((signed char) var_13))), ((~(((/* implicit */int) var_2)))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_10)))))) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_10)))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) (signed char)23)) <= (((/* implicit */int) (_Bool)1)))))))));
}
