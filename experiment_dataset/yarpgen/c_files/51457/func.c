/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51457
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((max((((var_0) & (arr_1 [(short)5]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (var_16))))) ^ (((unsigned int) (!(var_15))))))));
        var_18 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)255))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((arr_1 [8U]) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (-(((min((arr_4 [7ULL] [7U]), (arr_3 [i_1] [i_1]))) + (((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_8))))))));
        arr_6 [4] |= ((/* implicit */unsigned int) ((long long int) (+(arr_3 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) var_12))))) : (((unsigned long long int) var_13))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) (((!(var_15))) ? (((((/* implicit */int) var_5)) % (((/* implicit */int) arr_10 [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1])) || (((/* implicit */_Bool) var_0)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            arr_15 [(unsigned char)13] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))));
            arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_2]);
            var_20 *= ((/* implicit */unsigned int) ((_Bool) ((short) arr_14 [i_3] [i_3] [(signed char)12])));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) (+(((/* implicit */int) var_13))))), (((arr_2 [(unsigned short)8]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        arr_20 [18] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) ((((/* implicit */int) arr_17 [1] [i_4])) - (((/* implicit */int) arr_0 [i_4 + 1]))))))));
    }
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) (((+(((/* implicit */int) var_2)))) < (((var_15) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */int) var_2))))))));
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))))), (((((_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned int) var_10))))))));
}
