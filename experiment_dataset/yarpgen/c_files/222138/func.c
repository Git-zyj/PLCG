/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222138
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
    var_18 += ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (min((((((/* implicit */_Bool) var_7)) ? (15939430725523435711ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11637))))), ((~(var_16))))));
    var_19 = (short)32756;
    var_20 = ((/* implicit */unsigned char) min((max(((-(var_4))), (((/* implicit */unsigned long long int) (short)-27021)))), (((/* implicit */unsigned long long int) (short)15))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */short) max((18446744073709551588ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) - (((/* implicit */int) var_11)))) + (((/* implicit */int) (short)-32753)))))));
        arr_3 [i_0] = ((/* implicit */int) max((15939430725523435717ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_0 [i_0 + 1] [i_0 + 1]))) < (((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) (short)32739)) : (((/* implicit */int) (short)-32755)))))))));
        arr_4 [i_0 - 2] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) (short)-32748)))));
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 2]);
    }
}
