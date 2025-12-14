/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36001
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
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_11 += ((/* implicit */unsigned int) min((((unsigned long long int) (unsigned short)65528)), (((/* implicit */unsigned long long int) 2073103942329081962LL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15391542571954222193ULL)) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 3])))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3890)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_6 [(unsigned short)9] = (unsigned short)9264;
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (short)3840))));
    }
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
}
