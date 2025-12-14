/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/382
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-9)))) > ((+(((/* implicit */int) var_15))))))) : (((/* implicit */int) max((((signed char) var_8)), (((/* implicit */signed char) ((((/* implicit */int) var_7)) != (((/* implicit */int) (signed char)96))))))))));
        var_17 = ((/* implicit */signed char) max((min(((-(((/* implicit */int) var_1)))), ((+(((/* implicit */int) (signed char)30)))))), (((/* implicit */int) arr_0 [i_0]))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? ((~(((/* implicit */int) (signed char)1)))) : (((/* implicit */int) min((var_11), (var_4))))))) ? (((((/* implicit */int) (signed char)-122)) * (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (signed char)31)))))));
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_19 = ((signed char) max(((signed char)-88), (arr_2 [i_1 - 1])));
        var_20 = ((/* implicit */signed char) min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))), ((-(((/* implicit */int) var_11))))));
        arr_4 [i_1] = (signed char)0;
    }
    var_21 = min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-91)) > (((/* implicit */int) min(((signed char)-32), (var_9))))))), (var_12));
    var_22 = var_14;
}
