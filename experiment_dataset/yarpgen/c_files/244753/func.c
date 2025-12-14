/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244753
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
    var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)251)))) + (((((/* implicit */int) var_7)) + (((/* implicit */int) var_10)))))) == (((((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) | ((~(((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_1]))));
            arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (unsigned char)189))));
            var_15 = ((_Bool) ((arr_5 [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7))));
        }
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) arr_5 [(unsigned char)14])))))) == (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_2 [i_0])))))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)67))))) : (((/* implicit */int) (!(arr_4 [i_2]))))))));
        var_18 = (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_2]))))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (unsigned char)254)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_4))));
    }
}
