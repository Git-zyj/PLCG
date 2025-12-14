/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27429
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1023LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5450))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-1))))))) && (((/* implicit */_Bool) (~(((((-8080689537269249501LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)255)) - (213)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) -1815286987);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [(signed char)2]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */int) (unsigned char)120)) + ((-(((/* implicit */int) var_7)))))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_7)), ((~(((/* implicit */int) (signed char)31))))))));
    var_19 = ((/* implicit */unsigned long long int) var_10);
}
