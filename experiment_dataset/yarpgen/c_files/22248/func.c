/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22248
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [(signed char)5] [1] = ((/* implicit */short) max(((unsigned short)10885), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)10)))), (var_11))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((var_13), (((/* implicit */int) (!(((((/* implicit */int) var_3)) > (((/* implicit */int) var_9))))))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (max((((/* implicit */int) var_1)), (var_13)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)1087)), (var_14)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14))) : (((/* implicit */unsigned int) min((var_13), (((/* implicit */int) arr_0 [12] [i_0]))))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) + ((+(((/* implicit */int) var_0)))))))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            var_17 = ((/* implicit */int) var_5);
            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((370520606) >> (((((/* implicit */int) var_0)) - (35)))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) min((arr_10 [i_1] [i_2 + 2]), (arr_10 [i_1] [i_2]))))));
        }
        for (unsigned short i_3 = 1; i_3 < 24; i_3 += 3) 
        {
            arr_15 [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_13 [(short)11] [i_3] [i_1])))))) : (35184372088831ULL)))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_10 [i_3 + 1] [i_1])))) : ((-(((((/* implicit */int) arr_9 [i_1] [i_1])) >> (((((/* implicit */int) arr_14 [i_1] [23LL])) + (13784)))))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_13 [(short)11] [i_3] [i_1])))))) : (35184372088831ULL)))) ? (((((/* implicit */int) var_10)) + (((/* implicit */int) arr_10 [i_3 + 1] [i_1])))) : ((-(((((/* implicit */int) arr_9 [i_1] [i_1])) >> (((((((/* implicit */int) arr_14 [i_1] [23LL])) + (13784))) - (1677))))))))));
            arr_16 [3U] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10)) ? (((/* implicit */int) arr_10 [i_1] [i_3 + 1])) : (((/* implicit */int) arr_14 [i_1] [i_1]))))) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3 + 1])) ? (566196279U) : (var_14)))))));
        }
        var_19 = ((/* implicit */unsigned int) min((var_19), (3641914081U)));
    }
    var_20 = ((/* implicit */unsigned short) var_9);
}
