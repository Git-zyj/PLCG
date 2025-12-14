/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201376
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_0);
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1851693528230425301LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29781))) : (1851693528230425321LL)));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (~(arr_2 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((-325772060), (((/* implicit */int) (short)13424))))) ^ (arr_1 [i_1] [i_1])));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (8713574731284491749ULL) : (((/* implicit */unsigned long long int) -1851693528230425321LL))))) ? (min((((((/* implicit */_Bool) (signed char)-63)) ? (-1851693528230425324LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59985))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-13657)) % (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) arr_0 [i_1]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))))))))));
        var_13 = ((/* implicit */unsigned short) max((1482489090U), (((/* implicit */unsigned int) -1939314305))));
    }
    var_14 = (((!(((/* implicit */_Bool) 848743014)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((var_5) - (253845479361875072ULL)))))) : (((((/* implicit */_Bool) (unsigned short)19207)) ? (max((var_0), (var_0))) : (((/* implicit */unsigned long long int) var_2)))));
    var_15 = ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_9))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((((/* implicit */int) var_6)) % (((/* implicit */int) (signed char)2))))))));
}
