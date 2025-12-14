/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204367
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
    var_15 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (var_9) : (var_5)))))))));
    var_16 = ((unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (short)24941)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 657796456U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24933))) : (657796456U)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((max(((!(((/* implicit */_Bool) (short)-24920)))), ((!(((/* implicit */_Bool) arr_1 [i_0])))))) ? (((((((/* implicit */int) var_13)) + (2147483647))) << ((+(((/* implicit */int) var_4)))))) : (min((((/* implicit */int) arr_0 [(signed char)17])), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_13))))))));
            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_1]))));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)24941))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((((/* implicit */_Bool) 657796439U)) ? (((/* implicit */int) (short)-9118)) : (((/* implicit */int) (short)-12484)))) + (2147483647))) << (((((((/* implicit */int) (signed char)-123)) + (131))) - (8))))))));
            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_0])))));
        }
        var_22 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]);
    }
}
