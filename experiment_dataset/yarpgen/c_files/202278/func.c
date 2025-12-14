/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202278
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
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13423))) & (arr_2 [i_0]))))))) + (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [(unsigned short)1])))) ? (((/* implicit */unsigned long long int) ((arr_1 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) : (arr_2 [i_0])));
        arr_4 [3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((-721166660) == (-1033204671))))));
    }
    var_21 += var_0;
}
