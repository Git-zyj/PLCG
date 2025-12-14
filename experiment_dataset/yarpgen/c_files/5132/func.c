/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5132
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
    var_11 = ((/* implicit */unsigned char) ((var_1) <= (((/* implicit */unsigned long long int) 2147483647))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_12 = var_10;
        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) : (var_9))))))) / (((((((/* implicit */int) (signed char)-2)) / (2022460678))) | (((((/* implicit */_Bool) -859839737)) ? (-2147483647) : (2147483629)))))))));
        var_14 -= ((/* implicit */int) ((((((/* implicit */_Bool) -2147483647)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))) <= (min((((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 + 2]))))), (arr_0 [i_0 - 1])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_4 [i_1] [(short)16] = ((/* implicit */unsigned char) min((-859839707), (((/* implicit */int) min((((/* implicit */short) (signed char)-41)), ((short)11548))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((+(-2022460676))), (((/* implicit */int) arr_3 [(unsigned char)16] [i_2]))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (min((arr_7 [i_2]), (((/* implicit */unsigned int) (unsigned char)249)))) : ((~(arr_6 [3LL])))))));
        arr_9 [i_2] = ((/* implicit */_Bool) arr_3 [i_2] [8U]);
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (-859839708) : (((/* implicit */int) (unsigned short)47539)))))));
        var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2]))))), (arr_6 [i_2])));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] &= min((9223372036854775807LL), ((-9223372036854775807LL - 1LL)));
        var_17 |= ((/* implicit */signed char) arr_10 [i_3]);
    }
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
    {
        for (int i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            {
                var_18 = ((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */int) (signed char)-50)) | (((/* implicit */int) (signed char)-5))))) / (max((((/* implicit */long long int) (unsigned short)24)), (9223372036854775783LL))))), (((/* implicit */long long int) ((arr_0 [i_4 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4 - 1] [i_5 + 3]))))))));
                var_19 = (+((-(-9223372036854775797LL))));
            }
        } 
    } 
}
