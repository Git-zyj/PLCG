/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226178
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), (18446744073709551609ULL))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) & (max((var_9), (arr_9 [i_0] [i_2] [1LL] [i_2])))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)29))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)5))))) ? ((-(arr_9 [i_2] [12U] [12U] [(unsigned short)6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (8U)))))))))));
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_2] [i_2] [(unsigned char)10])) >= (2275776673U))) ? ((+(arr_7 [i_0 - 1] [i_2] [i_0 - 1] [i_2]))) : (((arr_7 [i_0 + 1] [i_2] [(unsigned char)10] [i_0]) % (arr_7 [i_0 - 1] [i_2] [i_2] [i_2])))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 587028897U)) ? (arr_4 [i_0 + 1]) : (((/* implicit */int) var_4)))) > ((~(arr_4 [i_0 - 1])))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) (~(var_16)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))) | (4975631140098195236ULL)))))));
        arr_11 [i_0] [(signed char)16] = ((/* implicit */unsigned char) ((int) max((((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) 4294967288U)))));
    }
    for (short i_3 = 1; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((long long int) 268434432U)), (((/* implicit */long long int) (signed char)-48))))) ? (((4294967288U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_9 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned int) (short)12)), (3750549597U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) + (((/* implicit */int) (signed char)96)))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_6))) ^ (((/* implicit */int) (short)12837))));
    }
    for (short i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_20 [i_4] = ((/* implicit */signed char) ((min((min((((/* implicit */long long int) -1120127056)), (var_2))), (((/* implicit */long long int) ((unsigned int) var_9))))) != (((/* implicit */long long int) ((/* implicit */int) ((short) ((9223372036854775807LL) < (((/* implicit */long long int) arr_13 [i_4] [(unsigned short)12])))))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_4])) && (((/* implicit */_Bool) (unsigned short)62299)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_4 + 1] [i_4 + 1])))) : (min((((/* implicit */unsigned long long int) (unsigned short)59040)), (arr_8 [i_4] [i_4 - 1]))))))));
        arr_21 [9U] = ((/* implicit */unsigned short) ((short) ((((((/* implicit */int) (signed char)-39)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 433126138U)) && (((/* implicit */_Bool) 4294967288U))))) - (1))))));
    }
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((var_9) ^ (((/* implicit */long long int) var_13)))))));
}
