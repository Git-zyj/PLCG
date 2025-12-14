/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195820
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (unsigned char)173))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0])))));
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)74)) << (((((/* implicit */int) arr_0 [i_0])) - (164))))))));
    }
    for (long long int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)82))))) - (((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)173)), (-6832313801862240459LL))) < (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
        var_23 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (8583560647309531659LL))));
    }
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 9; i_2 += 2) 
    {
        var_24 = ((/* implicit */int) (~(arr_1 [i_2 - 2])));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_11 [i_2 - 4] [i_3] = ((/* implicit */unsigned char) var_7);
            var_25 = ((/* implicit */_Bool) ((int) ((arr_9 [i_2 - 1] [i_3] [i_2 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) 4294967295U))))))));
            var_27 = (~(((/* implicit */int) (unsigned char)246)));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((arr_4 [i_4]) + (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_4] [i_4]))))))))));
        var_29 -= ((/* implicit */unsigned long long int) -6832313801862240431LL);
        arr_14 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) arr_2 [i_4] [i_4])) : (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))) : (-6832313801862240452LL));
    }
}
