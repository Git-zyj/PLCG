/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27091
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)49654), (((/* implicit */unsigned short) (signed char)-58))))), (((((/* implicit */int) ((short) arr_2 [i_0] [(signed char)7]))) | (min((var_6), (((/* implicit */int) var_7))))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? ((+(9950697522714973645ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-32475)), (arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) min((arr_0 [i_0 + 1] [i_0]), (((/* implicit */short) var_14))))) ? (max((((/* implicit */int) (unsigned char)218)), (arr_1 [i_0]))) : (arr_1 [i_0 - 2]))) : (-1266306075)));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])), ((-(((/* implicit */int) (short)-12360)))))) : (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)26418))))), (var_7))))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 907278826)) && (((/* implicit */_Bool) var_7))));
}
