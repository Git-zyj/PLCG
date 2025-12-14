/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194610
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) 4611686018360279040ULL)) ? (3661283508U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))) < (((/* implicit */unsigned int) ((int) 2475601093U))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2475601093U)) ? (((/* implicit */int) (unsigned short)6556)) : (((/* implicit */int) (signed char)-71))));
        var_20 = ((/* implicit */int) (((((!(((/* implicit */_Bool) arr_1 [15])))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)217))) : (max((var_10), (13835058055349272566ULL))))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_12))), (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)1)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 4611686018360279049ULL);
    }
    var_21 = ((/* implicit */unsigned long long int) var_14);
    var_22 = ((/* implicit */unsigned char) ((unsigned int) min((var_1), (max((((/* implicit */int) (unsigned char)217)), (2146882097))))));
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : ((-(9))))))));
}
