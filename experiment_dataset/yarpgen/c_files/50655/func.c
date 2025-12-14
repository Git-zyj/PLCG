/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50655
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
    var_15 *= ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((7694733934985049012ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_11)) / (arr_0 [13ULL] [i_0]))), (((arr_0 [i_0] [i_0]) + (((/* implicit */int) var_12))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)7466))))), (((((/* implicit */_Bool) (unsigned short)16676)) ? (1486440318329645465ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_8)))) ? (((/* implicit */long long int) ((var_0) << (((arr_1 [i_0]) + (3526861518214010679LL)))))) : (max((arr_1 [i_0]), (arr_1 [i_0]))))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_11)) / (arr_0 [13ULL] [i_0]))), (((arr_0 [i_0] [i_0]) + (((/* implicit */int) var_12))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)7466))))), (((((/* implicit */_Bool) (unsigned short)16676)) ? (1486440318329645465ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_8)))) ? (((/* implicit */long long int) ((var_0) << (((((arr_1 [i_0]) - (3526861518214010679LL))) - (4709922432538909218LL)))))) : (max((arr_1 [i_0]), (arr_1 [i_0])))))))));
    }
}
