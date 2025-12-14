/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230441
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1193089628990109939ULL)) ? (1193089628990109922ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)159))));
    var_16 = ((/* implicit */unsigned char) max((max((max((((/* implicit */int) var_8)), (var_10))), (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775800LL)) && (((/* implicit */_Bool) var_4))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (1193089628990109922ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) : (max((((/* implicit */int) (unsigned short)0)), (var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
        var_18 = ((/* implicit */long long int) ((int) var_8));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_19 += min((((arr_4 [i_1]) ^ (arr_3 [i_1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65524))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)65531))))), ((~((-(var_11)))))));
    }
}
