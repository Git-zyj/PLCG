/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36647
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((6862249023134685888ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32745)))))) ? (((((/* implicit */_Bool) 5897566382822991087ULL)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32736))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
        var_17 -= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (arr_0 [(unsigned short)20] [(unsigned short)20])))));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)36368));
        var_18 = 2147483647;
        arr_8 [(unsigned char)11] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
    }
}
