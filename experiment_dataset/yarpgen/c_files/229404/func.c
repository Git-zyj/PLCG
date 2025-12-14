/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229404
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
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (-(13808768236447994603ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)47142))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_7)))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */int) min((((((13808768236447994603ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))))) <= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) var_0)) : (13808768236447994603ULL))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [(short)6]))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4637975837261557012ULL))))) : ((+(((/* implicit */int) (unsigned char)5)))))), (((/* implicit */int) var_11)))))));
        var_16 = ((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1] [i_0 - 1]) << (((((arr_0 [i_0 + 1] [i_0 + 1]) | (arr_0 [i_0 + 2] [i_0 + 1]))) - (2080054931)))));
        var_17 += ((/* implicit */short) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173)))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (+(arr_4 [i_1])));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_4 [i_1]))), (((/* implicit */unsigned long long int) (~(var_5))))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (arr_4 [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (4637975837261557013ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((arr_4 [i_1]) + (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((/* implicit */unsigned long long int) arr_5 [i_1]))))));
    }
}
