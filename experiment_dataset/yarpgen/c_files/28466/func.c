/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28466
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
    var_15 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (max((4717914263741208238LL), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((unsigned int) var_12))))));
    var_16 = ((((/* implicit */long long int) min((((var_2) ? (((/* implicit */int) (short)14238)) : (((/* implicit */int) var_5)))), ((~(var_10)))))) % ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-4717914263741208233LL))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) -4717914263741208238LL)) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (var_4)))) : ((~(((/* implicit */int) var_7))))))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36505)) < (789149640)))), (3046370262937091121LL)))));
        arr_3 [4U] = ((((/* implicit */long long int) ((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) | (var_0));
    }
    var_17 = ((/* implicit */_Bool) var_5);
    var_18 = ((/* implicit */_Bool) ((((max((((/* implicit */int) var_4)), (var_8))) + (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)31)))))) - (((((/* implicit */_Bool) 4717914263741208238LL)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned char)0))))));
}
