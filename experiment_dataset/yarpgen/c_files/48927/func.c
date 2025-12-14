/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48927
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min(((signed char)-42), ((signed char)-35))), (min(((signed char)-117), ((signed char)31)))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) var_9))))) : (((/* implicit */int) (unsigned char)160))));
    var_11 = min(((unsigned char)23), ((unsigned char)107));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-31), ((signed char)16)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0 - 2])) >= (((/* implicit */int) arr_0 [i_0 - 2] [i_0])))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (arr_1 [i_0 + 1])));
        var_13 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) ((unsigned char) var_3))) >> (((((/* implicit */int) (unsigned char)7)) & (((/* implicit */int) var_5))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) max(((unsigned char)144), (var_0)))), (min((((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0])))), (((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)50)) || (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2]))))), ((unsigned char)28)))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_0 [i_1] [(unsigned char)20]))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-((((-(((/* implicit */int) (signed char)54)))) / (((/* implicit */int) var_3)))))))));
    }
}
