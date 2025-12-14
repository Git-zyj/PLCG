/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195288
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)77))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3336355660U)) ? (((/* implicit */int) var_9)) : (1240706160)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3886474156U)) || (((/* implicit */_Bool) var_9)))))) : (3304821340U))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) >= (((/* implicit */int) (signed char)14))));
            arr_7 [i_1] = ((/* implicit */int) max(((signed char)1), ((signed char)-29)));
        }
        var_12 = ((/* implicit */int) max((max((((/* implicit */short) ((-1) >= (((/* implicit */int) (signed char)7))))), (arr_1 [i_0] [i_0]))), (((/* implicit */short) (!(((/* implicit */_Bool) max(((signed char)-7), ((signed char)7)))))))));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (+(max((((/* implicit */int) ((((/* implicit */int) (signed char)-7)) <= (((/* implicit */int) (signed char)7))))), (((((/* implicit */_Bool) (signed char)18)) ? (var_4) : (((/* implicit */int) (signed char)15))))))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)18)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))))), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((signed char)23), ((signed char)23)))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_13 = ((/* implicit */long long int) var_0);
        arr_12 [i_2] [i_2] = ((((/* implicit */int) min(((signed char)23), ((signed char)18)))) % ((~(((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) var_1)))))));
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_2 [i_2 - 1]), (((/* implicit */unsigned int) arr_1 [i_2] [i_2 + 2])))))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) var_4);
        arr_14 [i_2] = (signed char)42;
    }
    var_15 = var_0;
}
