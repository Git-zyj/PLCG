/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241765
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_9), (var_1))), (((/* implicit */long long int) ((2147483647) <= (((/* implicit */int) (unsigned char)204)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned char)36), (((/* implicit */unsigned char) (signed char)-101))))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), ((unsigned short)12)));
        var_15 = ((/* implicit */unsigned long long int) (+(((unsigned int) ((unsigned int) arr_0 [i_0])))));
    }
    var_16 = ((/* implicit */short) (signed char)-110);
    /* LoopSeq 2 */
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_17 = ((/* implicit */long long int) (signed char)93);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65523))) ? (((int) arr_3 [i_1 + 1])) : ((~(arr_3 [i_1 + 2])))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_5 [i_1 + 1] [i_1]))));
    }
    for (signed char i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) arr_7 [i_2]);
        var_20 = ((/* implicit */unsigned short) -1);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_0))));
        arr_9 [i_2 - 3] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_2)))))), (((long long int) arr_6 [i_2 + 2]))));
    }
    var_23 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) var_5)), (var_1))));
}
