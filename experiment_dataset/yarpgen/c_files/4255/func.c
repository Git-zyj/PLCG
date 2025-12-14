/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4255
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
    var_14 = ((/* implicit */int) max((var_14), ((-(((/* implicit */int) (signed char)127))))));
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned char) min(((~(((((/* implicit */int) (signed char)117)) % (((/* implicit */int) (short)(-32767 - 1))))))), (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)32741)) : (((/* implicit */int) (signed char)62)))) + (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_3)))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
            arr_6 [i_0] [6] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_1))))) < (((((/* implicit */int) var_13)) + (var_11))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) / (var_4))) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))));
        }
        arr_7 [i_0] = ((/* implicit */long long int) min(((+((-(((/* implicit */int) var_12)))))), (((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))))));
    }
}
