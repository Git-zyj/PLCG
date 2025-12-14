/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230794
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) / (arr_2 [i_0])));
        var_12 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0])))));
        var_13 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
        arr_4 [10LL] = ((/* implicit */short) (~(((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(arr_6 [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 4; i_2 < 24; i_2 += 4) 
        {
            arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((10579331925827858405ULL) | (((/* implicit */unsigned long long int) -9199117312716610370LL)))));
            arr_10 [i_2] [i_2] [i_2] &= ((/* implicit */short) ((-543459523393333360LL) | (((/* implicit */long long int) -694767375))));
        }
        var_15 += (+(((/* implicit */int) arr_8 [13])));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63123)) | (((/* implicit */int) (short)-1))));
        var_17 *= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3))))));
    }
    for (signed char i_3 = 2; i_3 < 13; i_3 += 4) 
    {
        arr_15 [i_3] |= ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned short)63114))) / (((((/* implicit */_Bool) (unsigned short)63123)) ? (387914778) : ((((-2147483647 - 1)) | (((/* implicit */int) (signed char)(-127 - 1)))))))));
        arr_16 [i_3 + 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_5))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_5))));
    }
    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) / ((-9223372036854775807LL - 1LL))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_4 + 1])) || (((/* implicit */_Bool) var_8))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        arr_21 [i_5] [i_5] = max((((/* implicit */int) (unsigned short)0)), (-34346186));
        var_21 ^= ((/* implicit */unsigned short) max((((((/* implicit */long long int) arr_6 [i_5])) / (var_11))), (((((/* implicit */long long int) 4294967288U)) / (-5852185951369400410LL)))));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 11; i_6 += 4) 
    {
        arr_24 [i_6] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [(unsigned short)6])) > (((/* implicit */int) var_2))))));
        arr_25 [i_6] [i_6] = ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (unsigned short)60005))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_8))));
    }
}
