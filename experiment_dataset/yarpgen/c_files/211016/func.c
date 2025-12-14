/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211016
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
    var_10 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0))), (((/* implicit */unsigned long long int) var_8))))));
    var_11 = (!(((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(min((((/* implicit */int) arr_0 [i_0 - 1])), ((-(arr_3 [i_0]))))))))));
        var_14 = ((/* implicit */long long int) arr_2 [(_Bool)1]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            var_15 &= ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0]))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-((-(((/* implicit */int) arr_4 [i_0] [(unsigned char)5] [i_0])))))) : ((+(((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_1]))))))));
            var_17 *= ((/* implicit */_Bool) arr_3 [i_1]);
            var_18 = ((/* implicit */signed char) max((3797793171U), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_0 [i_0])))))))));
        }
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)4])) ? (((/* implicit */int) ((unsigned short) ((unsigned char) arr_1 [i_0])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))));
            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)78))));
            var_21 = ((/* implicit */unsigned char) arr_2 [i_0]);
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((long long int) max((min((((/* implicit */unsigned int) arr_1 [i_0 + 1])), (arr_7 [i_0]))), (((/* implicit */unsigned int) arr_3 [i_0]))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
    {
        var_23 = (~(arr_10 [i_3]));
        var_24 = arr_1 [i_3];
    }
}
