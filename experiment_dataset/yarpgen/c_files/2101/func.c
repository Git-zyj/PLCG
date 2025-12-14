/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2101
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
    var_15 = ((/* implicit */unsigned char) (+(var_14)));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min(((~(arr_0 [i_0 - 1]))), (((/* implicit */long long int) (signed char)-1))));
        var_16 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) var_9);
        arr_5 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2113929216), (((/* implicit */int) arr_4 [i_1 - 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) min((arr_3 [8]), (((/* implicit */unsigned char) var_5)))))))) : ((-(max((arr_0 [i_1 - 1]), (((/* implicit */long long int) arr_1 [i_1 - 1]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [4U])) || (((/* implicit */_Bool) var_14)))))) != (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (227854235204775429LL) : (((/* implicit */long long int) 2113929216))))) || (((/* implicit */_Bool) (signed char)5))));
        }
        for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            var_20 *= ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_1 - 1])))));
            var_21 = ((/* implicit */unsigned int) ((min((1711507929), (((/* implicit */int) (signed char)5)))) > (max(((-(-26))), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_8 [i_1])))))))));
        }
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 227854235204775433LL)) ? (227854235204775429LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))));
        arr_14 [i_4] = min((((((/* implicit */int) arr_3 [i_4])) & (((/* implicit */int) arr_3 [i_4])))), (((((/* implicit */int) arr_3 [i_4])) ^ (((/* implicit */int) arr_3 [i_4])))));
        var_23 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((((/* implicit */_Bool) 2734261616U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13))))));
        var_24 = ((/* implicit */short) (signed char)(-127 - 1));
        var_25 = var_11;
    }
}
