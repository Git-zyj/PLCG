/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201514
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
    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_3)), (var_5)))))) ? ((-(var_11))) : (((/* implicit */long long int) ((-20) * (((/* implicit */int) (signed char)-25)))))));
    var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_16)))) ? (max((2147483647), (((/* implicit */int) var_17)))) : (((/* implicit */int) ((unsigned char) (signed char)-25)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 &= ((/* implicit */unsigned long long int) (-(arr_1 [i_0])));
        var_21 &= ((/* implicit */short) ((((/* implicit */long long int) (+(var_5)))) + (arr_0 [i_0] [i_0])));
    }
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_2]))));
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_2 - 2])), (var_10)))), (3552943040U)));
            arr_10 [i_1] [i_1] &= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 3] [i_2 + 1]))) * (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) 3552943040U)) : (13466172331806739888ULL))))), (((/* implicit */unsigned long long int) max((arr_3 [i_1 + 1]), (arr_2 [i_1 + 2] [i_2 + 1]))))));
            arr_11 [i_1] [i_1 - 1] [i_1] &= ((/* implicit */unsigned long long int) var_8);
        }
        /* vectorizable */
        for (short i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            var_22 = ((/* implicit */int) ((3548457267483035996ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [3LL] [i_1])))));
            var_23 = ((/* implicit */short) arr_3 [i_3]);
            var_24 &= ((/* implicit */unsigned long long int) ((((742024258U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1]))))) ? ((-(((/* implicit */int) (signed char)0)))) : ((~(arr_3 [i_3])))));
        }
        var_25 = (-(arr_2 [i_1 + 3] [i_1 - 1]));
    }
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (signed char)88))));
}
