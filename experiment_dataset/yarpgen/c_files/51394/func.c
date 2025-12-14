/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51394
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
    var_18 |= ((/* implicit */unsigned short) ((short) ((unsigned short) ((var_11) + (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)(-32767 - 1))))) : (((((/* implicit */_Bool) (unsigned short)14561)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))) * (((/* implicit */int) arr_2 [i_0] [i_1])));
            arr_7 [i_0] |= ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1 + 1])), ((unsigned short)16383))))));
            arr_8 [(signed char)11] [(signed char)11] = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1 - 1])), (var_15))), ((~(((/* implicit */int) var_6))))));
        }
        var_19 = ((/* implicit */int) max(((short)19363), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0]))));
        var_20 = ((/* implicit */unsigned char) ((int) min((((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)5])), ((-(((/* implicit */int) var_13)))))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-19352)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) ((((int) var_9)) > (((/* implicit */int) (signed char)-49))))) : (((/* implicit */int) var_16))));
}
