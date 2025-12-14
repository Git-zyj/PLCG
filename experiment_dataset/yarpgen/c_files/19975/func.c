/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19975
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_18)) < (arr_0 [i_0])));
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) 31)) ? (1175187906U) : (3119779389U)));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_2 [i_1]))));
        arr_4 [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (var_10)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139))) % (arr_0 [i_1])))) : (arr_1 [i_1])));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_8))));
}
