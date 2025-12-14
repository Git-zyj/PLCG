/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233661
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
    var_17 -= ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (var_3)))) : (((((/* implicit */_Bool) 4067574232U)) ? (((/* implicit */unsigned long long int) 227393064U)) : (15540987155495579005ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL)))));
        arr_2 [i_0] [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16203))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1704246560U)) || (((/* implicit */_Bool) var_2)))))) - (((((/* implicit */_Bool) (short)-2175)) ? (227393064U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (min((4294967295U), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))));
        var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967290U)), (6377354376632576819ULL))))));
        var_20 |= ((/* implicit */_Bool) (short)16203);
    }
}
