/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52090
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
    var_16 = ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_18 = ((5278073424395778771LL) & (min(((((_Bool)1) ? (5278073424395778771LL) : (-5278073424395778770LL))), (((/* implicit */long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) (unsigned char)229))))))));
        var_19 = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_20 = ((((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) << (((/* implicit */int) arr_3 [(short)11]))))) & (((((/* implicit */_Bool) arr_4 [5LL])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) * (((/* implicit */long long int) ((/* implicit */int) max((min(((unsigned char)23), ((unsigned char)0))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) var_9)), (((960992538) / (-1)))))), (max((((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_1))), (arr_4 [i_1])))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_1])), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_14))))), (var_1)))));
    }
}
