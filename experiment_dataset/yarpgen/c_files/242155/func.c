/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242155
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
    var_13 = ((/* implicit */_Bool) var_4);
    var_14 = ((/* implicit */signed char) var_8);
    var_15 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2])) ? (arr_6 [i_0] [i_0 - 2] [i_0 + 4]) : (arr_4 [i_0 + 1] [i_0 - 1])));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1])) < ((((_Bool)1) ? (70887331) : (((/* implicit */int) var_12))))));
            var_17 = ((/* implicit */signed char) ((unsigned char) arr_5 [(unsigned short)7]));
        }
        for (short i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
            arr_11 [i_2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 2]))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) var_10))));
        }
        var_20 = ((/* implicit */int) var_9);
        arr_12 [i_0 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) -1849515445)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4947776377669786184LL)));
        var_21 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (4947776377669786180LL))));
    }
}
