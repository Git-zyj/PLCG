/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223293
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
    var_12 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18370189010563055787ULL)))) ? (((var_2) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (((unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) <= (76555063146495829ULL)))))));
    var_13 = ((/* implicit */signed char) ((unsigned long long int) var_10));
    var_14 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_4)))), (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65522))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [6LL] |= ((/* implicit */int) (unsigned short)51323);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_2 [i_0] [i_0])) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)31))))) | (((long long int) 76555063146495829ULL))));
        arr_8 [i_1] = ((arr_5 [(_Bool)1]) >> (((arr_5 [i_1]) - (5192014878755347280ULL))));
    }
}
