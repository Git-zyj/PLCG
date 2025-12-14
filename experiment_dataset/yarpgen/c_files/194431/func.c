/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194431
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2105317320U)) ? ((-(1071065275247813736ULL))) : (6538041546726409846ULL)));
        var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-57))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < ((-9223372036854775807LL - 1LL)))))) : (arr_3 [i_0]))))));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_19 = arr_5 [i_1 + 1];
        var_20 = ((/* implicit */unsigned char) arr_6 [i_1 - 3]);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_6 [11]))))))) ^ (min((min((((/* implicit */long long int) (unsigned char)0)), (arr_0 [i_1 - 1]))), (((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))))))))));
        arr_8 [i_1 - 3] = ((/* implicit */short) ((((var_5) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) ((signed char) arr_1 [i_1 - 1]))), (var_11))) - (18446744073709551488ULL)))));
        var_22 = ((/* implicit */unsigned char) max((min((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))))), ((+(1881667814U))))), (((/* implicit */unsigned int) arr_2 [i_1]))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)55)) ? (2147483635) : (var_7)))))) + (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */long long int) var_5)) / (var_6))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
    var_24 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)72)) || (((/* implicit */_Bool) var_15))))) >> (((((/* implicit */int) (unsigned char)181)) - (176))))) : (((/* implicit */int) var_17)));
    var_25 = ((/* implicit */unsigned short) var_9);
}
