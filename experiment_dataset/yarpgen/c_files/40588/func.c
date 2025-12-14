/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40588
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2706)) | (((/* implicit */int) (unsigned short)763))))) ? ((~(((/* implicit */int) (unsigned short)58601)))) : (((/* implicit */int) ((unsigned short) (unsigned short)39159)))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_3)))))) == (((((/* implicit */int) ((unsigned short) (unsigned short)42769))) | (((/* implicit */int) max((arr_0 [(unsigned short)19]), ((unsigned short)34108))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)27568)) : ((~(((/* implicit */int) arr_3 [i_0] [i_1]))))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)12))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52056)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) arr_0 [i_0]))));
            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)60629)) : (((((/* implicit */int) arr_3 [i_0] [i_1])) * (((/* implicit */int) (unsigned short)37967))))));
        }
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)33207))));
    }
    var_19 = max((var_3), (var_9));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_5))));
}
