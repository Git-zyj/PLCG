/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48939
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
    var_14 = ((/* implicit */unsigned short) var_11);
    var_15 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-75))) - (var_2)))) ? (((((/* implicit */_Bool) 2804520533U)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)163)))));
    var_16 |= ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */short) (!(var_1)));
                var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 2]);
                var_19 *= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)166)), (arr_1 [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (var_11))))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (var_13))), (((/* implicit */unsigned int) ((unsigned short) var_9)))))) == (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) arr_0 [i_0 + 3]))))) ? (((arr_4 [(unsigned short)4] [(unsigned char)6] [i_0 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 2])))))))));
            }
        } 
    } 
}
