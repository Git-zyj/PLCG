/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231579
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
    var_18 = max((((/* implicit */unsigned long long int) var_12)), ((+(15260189496522892365ULL))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0] [(signed char)13];
        var_19 -= ((/* implicit */long long int) ((((/* implicit */int) ((short) 1024U))) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)15762)))) - (110)))));
        var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) == (((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)253))))), (((4294966271U) >> (((((/* implicit */int) (short)-24310)) + (24340)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)));
    var_22 -= ((((/* implicit */_Bool) -3557541981074604021LL)) ? (524288) : (((/* implicit */int) (signed char)-73)));
}
