/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46453
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
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) (!((_Bool)0)))) : (max((((/* implicit */int) (unsigned char)70)), (377847185)))))) * (((((/* implicit */_Bool) -8612775323924564933LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (9266757325016559386ULL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        arr_3 [i_0] = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-20)) + (2147483647))) >> (((9179840923573056316LL) - (9179840923573056285LL))))) % (var_6)));
    }
    var_14 = ((/* implicit */unsigned long long int) var_2);
}
