/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220063
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
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = ((/* implicit */int) ((unsigned int) var_3));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 -= ((/* implicit */short) arr_2 [i_0]);
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max((-1855911875), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_3 [i_0] [(unsigned short)1]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)29182)) | (((/* implicit */int) (short)15554)))) >> (((((/* implicit */int) arr_1 [i_0])) - (50992))))))));
        var_15 = ((/* implicit */unsigned short) var_6);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) ((_Bool) arr_3 [i_1] [i_1]));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_2 + 2] [i_1]);
            var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(var_8)))), (-1770272774117337754LL)));
            arr_11 [i_1] [i_2 + 2] = ((long long int) ((arr_5 [i_2 + 2] [i_2 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_18 = ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 2])))))))));
        }
    }
}
