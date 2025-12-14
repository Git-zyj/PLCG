/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215648
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
    var_13 &= ((/* implicit */unsigned char) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 -= ((/* implicit */unsigned char) var_8);
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */int) max((max((-1439367829864916501LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_3 [(unsigned short)0] [i_1 - 3] [i_2]))));
                    var_16 -= ((/* implicit */int) arr_1 [i_0] [(short)8]);
                    arr_7 [10U] [i_2] &= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)62))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [(unsigned short)0]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
                    arr_8 [(signed char)11] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_0])) + (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_1])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 + 1] [i_0]))))) : (var_10));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((short) ((long long int) (short)32765)));
        arr_10 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))))), (((unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
    }
    for (short i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        var_18 = ((unsigned char) (!(((/* implicit */_Bool) arr_12 [i_3 - 1]))));
        var_19 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)255)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 - 2])))))));
    }
    var_20 = ((/* implicit */unsigned char) ((_Bool) var_10));
    var_21 = ((/* implicit */short) var_10);
    var_22 = (+(max((((/* implicit */long long int) (-(((/* implicit */int) (short)-32751))))), (min((var_0), (((/* implicit */long long int) var_3)))))));
}
