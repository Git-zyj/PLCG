/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207349
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
    var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_7))));
    var_19 ^= ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((signed char) var_10))))) ? (((/* implicit */int) (unsigned short)8813)) : (max((350612036), (((/* implicit */int) var_0))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [1U] [(short)0]) : (((/* implicit */unsigned long long int) 0U))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)10389)) : (((/* implicit */int) (signed char)23)))), (((/* implicit */int) ((arr_0 [0U] [0ULL]) == (arr_0 [0ULL] [i_0]))))))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_22 = ((/* implicit */short) min((max((-1970257699), (((/* implicit */int) (unsigned char)54)))), ((+(((/* implicit */int) (unsigned char)154))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 2027361284U);
    }
}
