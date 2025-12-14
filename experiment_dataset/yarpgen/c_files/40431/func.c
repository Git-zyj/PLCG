/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40431
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 *= ((/* implicit */signed char) ((unsigned short) var_3));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((arr_1 [i_0] [7U]), (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) & (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [6LL] [i_0])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 -= ((/* implicit */unsigned int) ((((min((((/* implicit */int) arr_0 [i_1] [i_1])), (((var_9) / (((/* implicit */int) arr_3 [i_1] [i_1])))))) + (2147483647))) << (((max((max((arr_1 [i_1] [i_1]), (((/* implicit */int) arr_0 [i_1] [i_1])))), (((/* implicit */int) ((arr_4 [i_1] [i_1]) == (((/* implicit */int) var_4))))))) - (7402)))));
        var_15 += ((/* implicit */long long int) ((_Bool) ((unsigned int) max((var_0), (((/* implicit */unsigned int) arr_4 [(unsigned char)7] [(unsigned char)7]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)35248)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) : (((/* implicit */int) var_2)))))));
                var_17 += ((/* implicit */unsigned int) var_5);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))) >= (((/* implicit */int) arr_9 [i_2] [i_2] [(_Bool)1])))))));
            }
        } 
    } 
}
