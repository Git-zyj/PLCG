/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30929
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
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 = ((/* implicit */long long int) max(((-(var_9))), (var_4)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((max((15U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12749)))))) && (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) == (arr_1 [i_0] [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1LL)) ? (4U) : (4294967291U)));
        arr_7 [2] [2] &= ((/* implicit */unsigned short) min((((arr_5 [(signed char)7] [(_Bool)1]) >> (((((((/* implicit */_Bool) 4294967292U)) ? (arr_5 [i_1] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [10LL]))))) - (1792132642U))))), ((-(((0U) / (((/* implicit */unsigned int) 136989942))))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) max((max((max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) arr_6 [i_1])))), (((/* implicit */unsigned int) arr_6 [i_1])))), (((/* implicit */unsigned int) max(((~(var_14))), ((~(((/* implicit */int) var_5))))))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)10] [i_1])) ? (arr_4 [i_1] [(signed char)4]) : (((/* implicit */int) arr_6 [i_1])))))));
    }
    var_22 &= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_12)) : (var_4))))), (max((((/* implicit */unsigned int) ((4294967288U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (int i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            {
                arr_13 [(unsigned short)3] = arr_12 [(_Bool)1] [i_3];
                arr_14 [i_2] [i_2] [i_3] = ((/* implicit */int) ((((4294967292U) * (((/* implicit */unsigned int) ((arr_8 [i_2] [1LL]) & (arr_9 [3LL] [12LL])))))) << (min((12LL), (((/* implicit */long long int) 986492981U))))));
            }
        } 
    } 
}
