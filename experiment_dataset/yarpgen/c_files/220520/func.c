/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220520
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)-36)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) + ((+(72057594037927904LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-100)) - (((/* implicit */int) var_8))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_19 += ((/* implicit */unsigned char) 16840697233704578667ULL);
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))));
            var_21 = ((/* implicit */unsigned long long int) (unsigned short)3);
        }
    }
}
