/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35892
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned char) ((short) ((unsigned char) arr_1 [i_0]))));
        arr_4 [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7837))) * ((~(((((/* implicit */_Bool) arr_3 [24ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (5738043793120736436ULL)))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)154)), (5906334786002461217ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_12))));
    var_22 -= ((/* implicit */signed char) min((((((/* implicit */int) (short)-32752)) * (((/* implicit */int) ((short) 4673141057083156677ULL))))), (((/* implicit */int) ((short) min(((unsigned char)202), (((/* implicit */unsigned char) var_2))))))));
}
