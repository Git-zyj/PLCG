/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4774
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
    var_10 = ((/* implicit */unsigned long long int) ((var_4) >> (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) 12188010654710603062ULL)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (68719476735ULL)));
        var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)21)), ((unsigned short)496))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) (unsigned char)44);
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) max((((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_0)) : (arr_2 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((16383) - (((/* implicit */int) (unsigned char)44))))) + (arr_0 [i_1] [i_1])));
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) arr_1 [i_1])) ^ (6975663658480931007LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
    }
    var_15 *= ((/* implicit */short) ((((/* implicit */int) var_1)) << ((((-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 8ULL))))))) + (22)))));
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 += ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) var_8)) : (min((((/* implicit */unsigned long long int) var_0)), (7ULL))))));
}
