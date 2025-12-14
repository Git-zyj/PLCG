/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245563
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) && (((/* implicit */_Bool) -991779252)));
        var_13 = arr_3 [i_0] [i_0];
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_0))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_5 [i_1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (var_1)));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) arr_9 [i_2]))), (((unsigned int) arr_8 [i_2]))));
        var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -991779252)) ? (991779252) : (-1940452461)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (((unsigned int) arr_3 [i_2] [i_2]))));
        var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_2))))) ? (((/* implicit */int) min((arr_0 [(unsigned char)11]), (var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) < (var_6))))))) ? (((int) (unsigned char)22)) : (((int) min((991779257), (511))))))));
    }
    var_19 = ((/* implicit */short) var_10);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3836750109U)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_12)))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (min((max((((/* implicit */int) var_8)), (var_11))), (((/* implicit */int) min((var_0), (var_4))))))));
}
