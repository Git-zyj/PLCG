/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52766
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (short)0))))) | (((((/* implicit */_Bool) (unsigned short)43360)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) : (var_9)))))) ? (((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) var_8)) - (214))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) (short)20))))) : ((-(((/* implicit */int) (short)32767)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) (~(arr_1 [i_0]))));
        var_11 ^= ((/* implicit */unsigned char) min(((+(((var_4) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55891))))))), (min(((~(arr_2 [i_0]))), (((/* implicit */long long int) 483626738))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((7867885033598485431LL) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)153)), ((short)14))))))) ^ (((/* implicit */long long int) 16376U))));
        arr_5 [i_0] = ((/* implicit */unsigned char) 483626738);
    }
}
