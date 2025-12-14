/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242820
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63816))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))) >= (((var_13) ? (min((var_16), (((/* implicit */long long int) var_13)))) : (min((var_15), (((/* implicit */long long int) var_10))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) (~(-1984590866)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_0)))) : (arr_0 [i_0]))));
        arr_2 [5U] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_22 += ((/* implicit */unsigned short) var_4);
            arr_5 [i_1] = (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [(unsigned short)6] [(unsigned short)6])) : (((/* implicit */int) var_6)))));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_8 [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_0 [(short)0]);
            var_23 = ((/* implicit */unsigned int) arr_7 [i_0]);
            var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_2)))))));
            arr_9 [i_2] [i_2] = ((/* implicit */long long int) arr_3 [i_0] [i_2]);
        }
        arr_10 [18] = ((/* implicit */signed char) ((unsigned long long int) (~(arr_7 [i_0]))));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_3)), (arr_7 [i_0]))))));
    }
    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        var_26 = ((/* implicit */_Bool) ((signed char) var_11));
        var_27 = ((/* implicit */unsigned short) (~(var_12)));
    }
    var_28 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_19)))))))), (var_3)));
}
