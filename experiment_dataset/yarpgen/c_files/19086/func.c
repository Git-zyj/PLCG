/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19086
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
    var_11 = ((/* implicit */int) ((((/* implicit */long long int) 16383)) + (-4909748062895608323LL)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+((-(var_6)))));
        var_12 = ((((/* implicit */_Bool) ((((var_0) * (18277651867566425628ULL))) + (var_0)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))))) : (((/* implicit */int) (_Bool)0)));
        arr_3 [i_0] = ((/* implicit */signed char) var_6);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_13 *= ((/* implicit */_Bool) var_1);
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 4909748062895608323LL)) || (((/* implicit */_Bool) -7491623874557981803LL))))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        var_15 &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            var_16 ^= ((/* implicit */unsigned short) ((long long int) var_7));
            var_17 = ((/* implicit */_Bool) var_7);
        }
    }
}
