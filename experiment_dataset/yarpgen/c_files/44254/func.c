/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44254
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
    var_17 = ((/* implicit */unsigned char) (((+(8687095326851318666ULL))) >> (((((/* implicit */int) var_0)) - (947)))));
    var_18 = ((/* implicit */unsigned int) 1962895423);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_9))))));
            var_20 = ((/* implicit */signed char) arr_5 [(_Bool)0] [i_1]);
            arr_6 [(unsigned char)5] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 2688656926565351081ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)252)))));
            var_21 = ((/* implicit */short) var_3);
            var_22 = ((/* implicit */short) min((var_22), (arr_3 [i_1 + 1])));
        }
        for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) var_14);
            var_24 -= ((/* implicit */unsigned char) -4534711020502059566LL);
        }
        arr_11 [i_0] [i_0] = (((!(((/* implicit */_Bool) 4095ULL)))) || (((/* implicit */_Bool) var_11)));
        var_25 = ((/* implicit */unsigned char) ((_Bool) arr_4 [i_0]));
    }
    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (0LL))))));
        arr_14 [(unsigned char)0] [14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(8581779564092956096ULL)))) ? (1125899906842620LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21744)))));
    }
}
