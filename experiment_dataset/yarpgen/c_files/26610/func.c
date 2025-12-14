/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26610
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (+(((((((/* implicit */int) (signed char)-50)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65533))))))))));
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (min((var_8), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)63)), (arr_1 [(_Bool)1] [i_0]))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_12 = min((arr_3 [i_1] [(short)3]), (((/* implicit */unsigned long long int) arr_2 [i_1])));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min(((~(min((var_2), (arr_3 [i_1] [i_1 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 2])))))))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((var_5) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2])))))) ? (((((/* implicit */unsigned long long int) (+(arr_6 [i_2])))) - (min((((/* implicit */unsigned long long int) (signed char)0)), (var_4))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_6 [i_2]))))))));
        var_14 = ((/* implicit */signed char) var_2);
    }
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned char i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [(short)5] [i_4])))))));
                    var_16 = ((/* implicit */unsigned long long int) arr_1 [i_3] [i_5]);
                    arr_18 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) << (((min((((/* implicit */unsigned long long int) 422013267U)), (2300403256318876336ULL))) - (422013262ULL)))))) ? ((-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [i_3])) == (((/* implicit */int) var_5))))))) : ((-(((/* implicit */int) arr_0 [i_3] [i_3]))))));
                    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(signed char)6])) * (((/* implicit */int) (signed char)-127))))) ? (((/* implicit */int) arr_12 [i_3] [i_4 - 1])) : (((((/* implicit */_Bool) (short)-32028)) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) (signed char)3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_3]), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [i_3]))))))))));
                }
            } 
        } 
    } 
}
