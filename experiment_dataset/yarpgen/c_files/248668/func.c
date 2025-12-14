/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248668
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
    var_10 = ((/* implicit */long long int) min(((-(-1787835177))), ((((~(((/* implicit */int) var_5)))) & ((~(((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [2LL] [i_1] = ((/* implicit */unsigned long long int) max((((((int) arr_3 [i_1])) ^ ((~(((/* implicit */int) arr_4 [(unsigned short)3] [i_1])))))), (((((/* implicit */_Bool) (~(arr_1 [i_1] [i_0])))) ? (var_4) : ((~(((/* implicit */int) arr_4 [i_0] [13U]))))))));
                var_11 = ((/* implicit */unsigned int) arr_5 [i_0]);
                arr_8 [13ULL] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) 1787835177)) > (arr_6 [i_0] [i_0] [i_1]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [(short)2]))))) : ((-(2154520670U)))));
            }
        } 
    } 
}
