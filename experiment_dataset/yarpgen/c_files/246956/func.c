/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246956
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_1))), (max((var_12), (((/* implicit */unsigned int) var_3))))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (+(max((arr_0 [i_1 - 2] [i_0 + 3]), (arr_0 [i_1 - 1] [i_0 + 1])))));
                var_14 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (var_5) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))))));
        var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_6 [(short)3])) % (arr_8 [23LL]))) > (arr_8 [i_2])));
        arr_10 [9ULL] = ((((/* implicit */_Bool) arr_7 [22LL] [(short)0])) ? (arr_6 [i_2]) : ((-(var_1))));
    }
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (short)8142)))))) > (((3558109143U) >> (((((/* implicit */int) (unsigned short)4317)) - (4301))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [10LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1]))) : (arr_6 [i_3]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_3])) && (((/* implicit */_Bool) var_5)))))))))) : (var_6)));
        arr_14 [i_3] |= ((/* implicit */unsigned short) arr_12 [i_3 + 1]);
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_8 [(unsigned short)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3])))))) ? (((/* implicit */int) ((short) ((unsigned char) arr_11 [13U])))) : (((((/* implicit */_Bool) ((long long int) arr_13 [i_3 - 1] [i_3]))) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3 - 1])))) : (arr_12 [i_3 - 1]))))))));
    }
}
