/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40662
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
    var_13 = ((/* implicit */_Bool) var_5);
    var_14 = ((/* implicit */unsigned char) var_3);
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)32160)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-21614))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)31960)) <= (((((/* implicit */_Bool) arr_0 [16U] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)32167))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((-4022009565734424099LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-27632)), ((unsigned short)32160))))));
    }
    var_16 ^= ((/* implicit */short) var_8);
}
