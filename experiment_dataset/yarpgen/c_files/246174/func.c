/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246174
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
    for (signed char i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_8 [12U] [i_0] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_9)))));
            var_14 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) >= (max((-1152921504606846976LL), (((/* implicit */long long int) (_Bool)1)))))))) <= (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (min((3140410402782537287ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1]))))))));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_1] [i_0 + 2])), ((unsigned short)10820)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_3 [4LL] [5ULL])))))))) : (((unsigned int) max((var_12), (((/* implicit */int) arr_7 [i_0 + 4] [7] [i_1])))))));
        }
        var_16 = ((/* implicit */unsigned char) var_3);
        var_17 = ((((/* implicit */int) (signed char)-68)) > (((/* implicit */int) (_Bool)1)));
        arr_9 [i_0 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_3))));
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (signed char)-107))));
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_12 [i_2 + 1] [3LL])))) : (min((((/* implicit */int) arr_11 [i_2 + 1])), ((+(((/* implicit */int) (unsigned short)17))))))));
        arr_14 [i_2] = ((/* implicit */unsigned char) max((min((((((/* implicit */int) arr_12 [i_2] [i_2])) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) arr_12 [(unsigned char)7] [i_2 + 1])))), (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)3)))) ? (((/* implicit */int) (signed char)80)) : (((((/* implicit */int) (short)-26030)) * (((/* implicit */int) (unsigned char)0))))))));
        var_19 = 2800174470U;
    }
    var_20 = ((/* implicit */int) ((unsigned short) var_12));
}
