/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249322
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (!((_Bool)1))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((~(((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 -= ((/* implicit */short) arr_0 [i_0]);
        var_13 = ((/* implicit */long long int) var_6);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = (-(((min((18446744073709551601ULL), (((/* implicit */unsigned long long int) -7)))) + (((/* implicit */unsigned long long int) (~(3117677726783451422LL)))))));
        var_14 &= ((/* implicit */unsigned long long int) (-(0)));
    }
    var_15 = ((/* implicit */_Bool) ((signed char) var_0));
    var_16 = ((/* implicit */int) var_4);
}
