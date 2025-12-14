/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41209
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
    var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 ^= (-(((((/* implicit */int) var_6)) ^ (((((/* implicit */_Bool) (short)27121)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0])))))));
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27127)) ? (((/* implicit */int) arr_1 [i_1])) : (var_12)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(short)14])) ? (((/* implicit */int) (short)27121)) : (1805430136))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) (short)-27717))))))) ? (max(((+(((/* implicit */int) arr_2 [i_1] [i_1])))), (((/* implicit */int) arr_3 [i_1 - 2] [i_1])))) : (max((var_3), (((var_12) / (arr_0 [i_0] [i_1 - 2])))))));
                var_21 |= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_4 [7] [8])) || (((/* implicit */_Bool) var_6)))) && (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) || (((/* implicit */_Bool) var_4)))))) ? (var_2) : (arr_0 [i_1 - 1] [2])));
                var_22 = max(((-(((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (var_2))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) max((var_3), (var_17))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (((!(((/* implicit */_Bool) (short)-17122)))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-14810)) + (2147483647))) << (((((((/* implicit */int) (short)-27111)) + (27112))) - (1)))))) ? (((/* implicit */int) var_5)) : (var_17))) : (((((/* implicit */_Bool) (short)-10121)) ? (((/* implicit */int) ((((/* implicit */int) (short)27111)) == (2147483647)))) : (((/* implicit */int) (short)-18251)))))))));
    var_24 = var_10;
}
