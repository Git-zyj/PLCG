/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241784
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((var_3), (((/* implicit */unsigned long long int) 2914244355559258699LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)231)) < (((/* implicit */int) var_8)))))))))) : (max((((/* implicit */long long int) var_2)), (min((2914244355559258680LL), (((/* implicit */long long int) var_6))))))));
    var_12 = ((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-86)))), ((+(((/* implicit */int) (signed char)103))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (3175469273U) : (624074456U)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((+(((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((/* implicit */int) (unsigned short)25491))));
        var_13 *= ((/* implicit */short) max((var_0), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2930509083148462357LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))) ? (((/* implicit */int) (short)1399)) : (((((/* implicit */int) arr_4 [i_1 - 1])) & (((/* implicit */int) ((short) (signed char)14)))))));
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47402)) ? (((/* implicit */int) ((unsigned short) arr_3 [i_1]))) : (((/* implicit */int) arr_4 [i_1 - 1])))))));
        arr_5 [i_1] = ((/* implicit */_Bool) (unsigned short)32581);
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                var_16 += ((/* implicit */int) max((max((var_3), (((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_1]))))), ((~(var_3)))));
                arr_11 [i_3] [i_2 - 1] [16ULL] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_9 [i_3 - 2] [i_3] [i_3 - 1])) + (((/* implicit */int) var_8))))));
                arr_12 [i_3] [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) (+(arr_6 [i_1 - 1] [i_2] [i_3 + 1])));
                arr_13 [i_3] [i_3] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_4 [i_1 - 1]))), (((((/* implicit */_Bool) 55648860540871781LL)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))))));
            }
            var_17 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) max(((unsigned short)14348), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */unsigned long long int) ((335404424U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57)))))) : (max((arr_3 [i_2]), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2 + 2] [i_2 + 1])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))))))));
            var_18 = ((/* implicit */short) arr_3 [i_1]);
        }
    }
}
