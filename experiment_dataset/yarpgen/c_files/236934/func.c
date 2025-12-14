/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236934
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (var_8) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6279320697885191985ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)102))))) ? (max((((/* implicit */unsigned int) (unsigned short)13588)), (0U))) : (((/* implicit */unsigned int) ((int) var_13)))))) : (((((((var_7) + (9223372036854775807LL))) >> (((/* implicit */int) var_3)))) & (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
    var_15 = ((/* implicit */long long int) var_9);
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_11)), ((((~(6437676391833077983LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)65509))))) : (((unsigned long long int) arr_3 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6279320697885191973ULL))));
    }
}
