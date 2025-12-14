/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19180
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
    var_19 ^= ((((/* implicit */int) var_11)) % (max((((((/* implicit */_Bool) (unsigned char)121)) ? (1983878463) : (((/* implicit */int) (unsigned char)44)))), (var_3))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((long long int) max((min((arr_0 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(-2666184443494109745LL)))) ? (max(((~(-6277383971544302344LL))), (-6277383971544302344LL))) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (unsigned char)135)), (-7479156017921232322LL))) > (((/* implicit */long long int) 1170362734))))))));
    }
}
