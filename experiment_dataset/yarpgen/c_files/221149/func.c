/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221149
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_15 = (-(((/* implicit */int) var_6)));
                    arr_8 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((_Bool) (+(18446744073709551615ULL))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) ((((arr_7 [i_0]) + (2147483647))) << (((576460752303423487ULL) - (576460752303423487ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (4574945012062975266LL)))) : (0ULL));
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */int) var_4)) & (arr_3 [i_1] [i_1] [i_1])));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) (short)-22372)) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(4333636044844725642LL))))))));
            }
        } 
    } 
    var_17 = (signed char)101;
}
