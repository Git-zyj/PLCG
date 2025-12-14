/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198653
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((+(((/* implicit */int) (unsigned short)47326)))) <= (2147483647))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)47329)), (-2147483647)))) ? (751849021) : ((+(((/* implicit */int) (short)-26088))))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_21 -= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0])) % (((/* implicit */int) (short)25122))));
            arr_8 [i_0] [i_1 + 3] [i_0] = ((/* implicit */int) var_16);
        }
        for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 2] [i_0]))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [(unsigned short)11] [(unsigned short)11])) ^ (((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (7028840047393289590ULL)))))));
            var_23 = ((/* implicit */unsigned short) ((_Bool) (~((-2147483647 - 1)))));
            arr_11 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned short) ((max((2147483647), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-81)))))) < (((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 2] [i_2 + 1]))));
            arr_12 [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -751849012))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_0])))) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 2])))))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
        }
        var_24 = min((((/* implicit */int) arr_6 [i_0])), ((~(min((((/* implicit */int) var_12)), (-7))))));
    }
}
