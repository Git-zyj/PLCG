/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238953
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
    var_14 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) < (max((((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (var_7)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 ^= (-(((/* implicit */int) ((((/* implicit */int) var_13)) != (min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0])))))));
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((var_4), (var_2)))))))) != (((((((/* implicit */_Bool) (unsigned short)8191)) || (((/* implicit */_Bool) 9804061545725856400ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (var_1)))))));
        var_17 = ((/* implicit */_Bool) var_7);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (((var_3) >> (((((/* implicit */int) var_11)) - (57213))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1024)))), ((+(((/* implicit */int) (signed char)31)))))))));
            var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (arr_3 [i_0])))))) && (var_13)));
            arr_5 [i_0] [i_1] = (~(((/* implicit */int) arr_1 [i_0])));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (arr_3 [i_0]))) : (min((arr_3 [i_0]), (((/* implicit */unsigned int) var_0))))));
        }
    }
    var_21 = ((/* implicit */unsigned char) var_1);
}
