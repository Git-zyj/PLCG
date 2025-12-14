/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235009
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((-(arr_2 [(unsigned short)12] [i_0]))), (((/* implicit */unsigned int) var_10)))))));
        var_17 = ((/* implicit */short) (signed char)2);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_2 [i_0] [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24)) ? (3771081179U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) * (((((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_1])) / (arr_5 [i_1] [i_1]))))))))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)14])))))) ? ((~(1907638060U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
        arr_6 [i_1] = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        var_20 = arr_1 [10ULL];
    }
    var_21 = ((/* implicit */unsigned int) var_13);
}
