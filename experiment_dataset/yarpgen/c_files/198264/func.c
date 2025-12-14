/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198264
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
    var_11 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((unsigned char) var_6))))) <= (((/* implicit */int) var_0))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((0LL) != (((/* implicit */long long int) var_6))))) == ((-(((/* implicit */int) (unsigned char)76)))))))) > (18446744073709551586ULL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0]) > ((+(((unsigned long long int) var_7))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_0]));
        arr_5 [i_0] &= ((/* implicit */int) arr_1 [i_0]);
        arr_6 [i_0] [i_0] = ((/* implicit */int) (((+((+(arr_0 [i_0]))))) > (((((/* implicit */_Bool) max((10658332182830872819ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
    }
}
