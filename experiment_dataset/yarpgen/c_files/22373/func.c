/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22373
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
    var_19 = ((/* implicit */int) ((min((var_16), (((/* implicit */unsigned long long int) var_13)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((var_16) > (((/* implicit */unsigned long long int) var_8))))))) | (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_3))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 2])) : ((-(arr_1 [(short)16])))));
            var_21 = ((/* implicit */unsigned long long int) var_4);
            arr_5 [i_1 + 1] = ((/* implicit */_Bool) ((unsigned char) -2020178215640039614LL));
            var_22 = ((/* implicit */_Bool) ((short) ((unsigned int) var_8)));
        }
        arr_6 [i_0] [(short)3] = ((/* implicit */unsigned int) ((((arr_3 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))) ^ (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((8192) | (((/* implicit */int) (_Bool)1))))));
        arr_7 [i_0] = ((/* implicit */long long int) 8192);
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_17)))) / ((~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_1)) : ((((_Bool)0) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_3))))));
}
