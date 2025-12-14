/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46607
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (((-(var_12))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))))));
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (signed char)-69)))) + (((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_10)))))))));
        var_17 = ((/* implicit */int) var_10);
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-15)) % (((/* implicit */int) var_1))))) | (max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (2240365766U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6623))))), (((/* implicit */unsigned int) var_1))))));
    }
    var_19 = ((/* implicit */int) 70368744177408ULL);
}
