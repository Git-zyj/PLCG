/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214966
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) * (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((min((var_15), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        var_18 += ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) arr_0 [(unsigned short)12] [i_0]))))) ? (min((((2258354368919560544ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41803))))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_19 = ((arr_2 [i_1]) & (((/* implicit */int) arr_0 [(_Bool)1] [i_1])));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */int) max((var_0), (((/* implicit */signed char) arr_4 [(short)7]))))) + (min((((/* implicit */int) var_0)), (var_3))))) - ((-(((/* implicit */int) arr_0 [i_1] [i_1])))))))));
        var_21 = ((/* implicit */_Bool) ((min((var_3), (arr_2 [i_1]))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned short) arr_4 [i_1]))))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((var_11) < (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [7ULL] [i_2 - 1] [i_2 - 1] [i_2 - 3])), (max((arr_5 [i_1] [i_2] [i_1]), (var_1))))))));
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((int) var_3))) : (arr_10 [i_3])));
                    arr_12 [i_1] [i_1] = ((/* implicit */_Bool) arr_11 [i_3] [i_2]);
                }
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-32767), (var_14)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4])) : (18446744073709551596ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_4] [i_4])))))))) ? ((-(arr_14 [(unsigned short)4]))) : (((/* implicit */int) ((unsigned short) arr_1 [i_4])))))));
        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42316)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))) : (((17023379221713438394ULL) >> (((arr_13 [i_4] [(signed char)11]) - (1226094579)))))))) ? (var_8) : (((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (7706)))))));
        var_26 = ((/* implicit */int) ((signed char) (((!(((/* implicit */_Bool) arr_13 [i_4] [i_4])))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) max((arr_1 [i_4]), (arr_1 [i_4])))))));
        var_27 = ((/* implicit */_Bool) arr_13 [(unsigned short)0] [i_4]);
    }
    var_28 = ((/* implicit */unsigned short) min((((/* implicit */int) var_2)), ((((!(((/* implicit */_Bool) var_11)))) ? (((var_3) ^ (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
}
