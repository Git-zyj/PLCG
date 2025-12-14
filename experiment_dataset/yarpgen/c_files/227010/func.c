/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227010
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
    var_12 = ((/* implicit */int) ((((long long int) min((var_3), (((/* implicit */int) var_6))))) + (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32374)))))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)50)) ^ (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))));
        var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_2))));
        var_17 = ((/* implicit */int) arr_0 [i_0] [i_0 + 1]);
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_18 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_8 [i_1] [i_1])))))))) - (((/* implicit */int) arr_8 [i_1 + 1] [i_1]))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? ((~(arr_17 [i_2] [i_2 + 1] [i_2 + 3] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 + 1] [i_2 + 3] [i_2])))))))))));
                        var_20 = ((/* implicit */signed char) max((((arr_13 [i_4 - 1] [i_4 - 2] [i_2 + 2] [i_1 - 3]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))))), (((arr_13 [i_4 - 2] [i_4 - 1] [i_4] [i_3]) << (((arr_13 [i_4] [i_4 + 3] [i_2] [i_2]) - (6467062485859122629LL)))))));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_15 [6ULL] [i_1] [i_1] [i_1 - 1] [i_1])))) ? (arr_17 [i_1] [i_1] [i_1 + 1] [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1 - 3])))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))) + (var_5)));
}
