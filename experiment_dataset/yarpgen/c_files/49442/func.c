/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49442
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (491520LL));
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)0)), (var_9)))), (max((2199023255551ULL), (((/* implicit */unsigned long long int) arr_6 [i_1]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-32)), (arr_6 [13LL])))) : (((/* implicit */int) arr_7 [i_1] [i_0] [(unsigned char)10]))));
                arr_8 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_6);
}
