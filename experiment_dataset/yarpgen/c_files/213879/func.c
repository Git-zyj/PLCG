/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213879
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
    var_10 = ((/* implicit */_Bool) -6735945680399540511LL);
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2214)))))), (min((arr_2 [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */int) (unsigned char)128)) : (160052465)));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) var_5);
        arr_6 [i_1] = ((/* implicit */int) ((arr_2 [i_1] [(signed char)15]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)128)), (arr_3 [i_1] [i_1]))))))))));
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((int) ((unsigned char) (-(((/* implicit */int) (_Bool)1))))));
        var_14 ^= (+(((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : ((-(((/* implicit */int) (unsigned short)16112)))))));
    }
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
}
